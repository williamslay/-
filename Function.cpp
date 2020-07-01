#include"Function.h"
using namespace std;
//ʹ�ò��չ�ʽת������������
int WeekDayTransfer(int year, int month, int day)//ʹ�ò��չ�ʽת������������
{
	int week = 0;
	int century = year / 100;				//ע�����ʵ��������ݵ�ǰ��λ������������
	year = year % 100;						//��ݵĺ���λ
	if (month == 1 || month == 2)			//�·ݵķ�ΧΪ3-14������1��2�±����13��14��
	{
		month += 12;
		year--;
	}
	week = year + year / 4 + century / 4 - 2 * century + (26 * (month + 1)) / 10 + day - 1;
	week = week % 7;
	return (week >= 0) ? week : (7 + week);
}
//�������ڶ�Ӧ����
int DateTransfer(int year, int month, int day)//�������ڶ�Ӧ����
{
	int daycount = 0;
	if (year % 4 == 0 && year % 100 != 0)
		daycount++;
	switch (month)
	{
	case 12:
		daycount += 30;
	case 11:
		daycount += 31;
	case 10:
		daycount += 30;
	case 9:
		daycount += 31;
	case 8:
		daycount += 31;
	case 7:
		daycount += 30;
	case 6:
		daycount += 31;
	case 5:
		daycount += 30;
	case 4:
		daycount += 31;
	case 3:
		daycount += 28;
	case 2:
		daycount += 31;
		daycount += day;
		break;
	}
	return daycount;
}
//�жϷɻ���С�ɻ����Ǵ�ɻ���С�ɻ�����1����ɻ�����2
int JudgeAircraftSize(FlightID* ID, int n)//�жϷɻ���С�ɻ����Ǵ�ɻ���С�ɻ�����1����ɻ�����2
{
	if (strcmp(ID[n].AircraftType, "319") && strcmp(ID[n].AircraftType, "320") && strcmp(ID[n].AircraftType, "321") && strcmp(ID[n].AircraftType, "737") && strcmp(ID[n].AircraftType, "738"))
		return 2;
	else
		return 1;
}
//���뵼�����ݿ�
int ImportFlightDatabase(FlightID* ID, char* Location)//�����ڿ�ͷѯ���Ƿ�Ҫ�������к������ݿ�,�������ض�ȡ�������
{
	FILE* fp;
	if ((fp = fopen(Location, "r")) == NULL)
	{
		return -1;
	}
	int FlightIDcount = 0;
	char c;
	while (!feof(fp))
	{
		int i = 1;
		while ((c = fgetc(fp)) != ',')//��ȡ����
		{
			ID[FlightIDcount].FlyDay[i] = c;
			i++;
		}
		i = 0;
		while ((c = fgetc(fp)) != ',')//��ȡ��������
		{
			ID[FlightIDcount].DepartureAirport[i] = c;
			i++;
		}
		ID[FlightIDcount].DepartureAirport[i] = '\0';//�ַ�����β
		fscanf_s(fp, "%d", &ID[FlightIDcount].DepartureTime);//��ȡ����ʱ��
		fgetc(fp);
		fscanf_s(fp, "%d", &ID[FlightIDcount].ArrivalTime);//��ȡ����ʱ��
		i = 0;
		fgetc(fp);
		while ((c = fgetc(fp)) != ',')//��ȡ�������
		{
			ID[FlightIDcount].ArrivalAirport[i] = c;
			i++;
		}
		ID[FlightIDcount].ArrivalAirport[i] = '\0';//�ַ�����β
		i = 0;
		while (i < 2)//��ȡ���չ�˾
		{
			c = fgetc(fp);
			ID[FlightIDcount].Carrier[i] = c;
			i++;
		}
		ID[FlightIDcount].Carrier[i] = '\0';//�ַ�����β
		i = 0;
		while ((c = fgetc(fp)) != ',')//��ȡ�����
		{
			ID[FlightIDcount].ID[i] = c;
			i++;
		}
		ID[FlightIDcount].ID[i] = '\0';//�ַ�����β
		i = 0;
		while ((c = fgetc(fp)) != ',')//��ȡ����
		{
			ID[FlightIDcount].AircraftType[i] = c;
			i++;
		}
		ID[FlightIDcount].AircraftType[i] = '\0';//�ַ�����β
		i = 0;
		while (((c = fgetc(fp)) != ','))//��ȡ��λ
		{
			ID[FlightIDcount].Class[i] = c;
			i++;
		}
		ID[FlightIDcount].Class[i] = '\0';//�ַ�����β
		fscanf_s(fp, "%d", &ID[FlightIDcount].TravelTimeHour);//��ȡ����ʱ��
		c = fgetc(fp);//��ȡð��
		fscanf_s(fp, "%2d", &ID[FlightIDcount].TravelTimeMinute);
		ID[FlightIDcount].Price = ID[FlightIDcount].TravelTimeHour * 675 + ID[FlightIDcount].TravelTimeMinute * 11.25;
		FlightIDcount++;
		if ((c = fgetc(fp)) == EOF)break;
	}
	fclose(fp);
	return FlightIDcount;
}
int SaveFlightDatabase(FlightID* ID, int IDcount, char* Location)
{
	FILE* fp;
	if ((fp = fopen(Location, "w")) == NULL)
	{
		return -1;
	}
	for (int i = 0; i < IDcount; i++)
	{
		fprintf(fp, "%c%c%c%c%c%c%c,%s,%04d,%04d,%s,%s%s,%s,%s,%d:%02d\n", ID[i].FlyDay[1], ID[i].FlyDay[2], ID[i].FlyDay[3], ID[i].FlyDay[4], ID[i].FlyDay[5], ID[i].FlyDay[6], ID[i].FlyDay[7], ID[i].DepartureAirport, ID[i].DepartureTime, ID[i].ArrivalTime, ID[i].ArrivalAirport, ID[i].Carrier, ID[i].ID, ID[i].AircraftType, ID[i].Class, ID[i].TravelTimeHour, ID[i].TravelTimeMinute);
	}
	fclose(fp);
	return IDcount;
}
int ImportTicketDatabase(FlightTicket DATA[][999], int IDcount, char* Location)
{
	FILE* fp;
	if ((fp = fopen(Location, "rb")) == NULL)
	{
		return -1;
	}
	fread(DATA, sizeof(FlightTicket), 366 * 999, fp);
	fclose(fp);
	return IDcount;
}
int SaveTicketDatabase(FlightTicket DATA[][999], int IDcount, char* Location)
{
	FILE* fp;
	if ((fp = fopen(Location, "wb")) == NULL)
	{
		return -1;
	}
	fwrite(DATA, sizeof(FlightTicket), 366 * 999, fp);
	fclose(fp);
	return IDcount;
}
int ImportUserDatabase(users p[], Passenger m[])
{
	FILE* UserF;
	FILE* PassenF;
	users a;
	int i;
	if ((UserF = fopen(".\\Data\\Users.dat", "rb")) == NULL)
	{
		return -1;
	}
	for (i = 0; !feof(UserF); i++)
	{
		fread(&a, sizeof(users), 1, UserF); //����һ���ṹ���ַ��� ��b
		p[i] = a;
	}
	fclose(UserF);
	if ((PassenF = fopen(".\\Data\\Passenger.dat", "rb")) == NULL)
	{
		return -1;
	}
	fread(m, sizeof(Passenger), 999, PassenF); //����999���ṹ���ַ��� ��m
	fclose(PassenF);
	return 0;
}
int SaveUserDatabase(users p[], char* Location)
{
	FILE* fp;
	users tmp;
	if ((fp = fopen(Location, "wb")) == NULL)
	{
		return -1;
	}
	for (int i = 0;; i++)
	{
		if (p[i].id[0] == '\0')
			break;
		tmp = p[i];
		fwrite(&tmp, sizeof(users), 1, fp);
	}
	fclose(fp);
}
int SavePassengerDatabase(Passenger m[], char* Location)
{
	FILE* fp;
	if ((fp = fopen(Location, "wb")) == NULL)
	{
		return -1;
	}
	fwrite(m, sizeof(Passenger), 999, fp);
	fclose(fp);
}
//���Һ���ţ����ز��ҵ��������
int SearchFlightID(FlightID* ID, char* search, int IDcount, int* SearchReasult, int& SearchCount)//���Һ���ţ����ز��ҵ��������
{
	//��ѯ����ŷ������������һ�ִ����֣���û�к��չ�˾���룬��������¿����������ڶ�����ĸ�����֣����к��չ�˾���룬��������º����Ψһ��
	SearchCount = 0; //��¼�������ĺ������,������
	if (strcmp(search, "AAAA") < 0)//������
	{
		for (int i = 0; i < IDcount; i++)
		{
			if (!strcmp(search, ID[i].ID))
			{
				SearchReasult[SearchCount] = i;
				SearchCount++;
			}
		}
	}
	else
	{
		for (int i = 0; i < IDcount; i++)
		{
			char a[12];//�洢���չ�˾+����ŵĺ���
			a[0] = ID[i].Carrier[0];
			a[1] = ID[i].Carrier[1];
			a[2] = '\0';
			strcat(a, ID[i].ID);
			if (!_stricmp(search, a))
			{
				SearchReasult[SearchCount] = i;
				SearchCount++;
				return SearchCount;
			}
		}
	}
	return SearchCount;
}
//���Һ���ɵأ����ز��ҵ��������
int SearchFlightDepartureAirport(FlightID* ID, char* search, int IDcount, int* SearchReasult, int& SearchCount)//���Һ���ɵأ����ز��ҵ��������
{
	SearchCount = 0; //��¼�������ĺ������,������
	for (int i = 0; i < IDcount; i++)
	{
		if (!_strnicmp(search, ID[i].DepartureAirport, 3))
		{
			SearchReasult[SearchCount] = i;
			SearchCount++;
		}
	}
	return SearchCount;
}
//���Һ�����أ����ز��ҵ��������
int SearchFlightArrivalAirport(FlightID* ID, char* search, int IDcount, int* SearchReasult, int& SearchCount)//���Һ���ɵأ����ز��ҵ��������
{
	SearchCount = 0; //��¼�������ĺ������,������
	for (int i = 0; i < IDcount; i++)
	{
		if (!_strnicmp(search, ID[i].ArrivalAirport, 3))
		{
			SearchReasult[SearchCount] = i;
			SearchCount++;
		}
	}
	return SearchCount;
}
//���Һ���ɽ���أ����ز��ҵ��������
int SearchFlightDepartureAndArrivalAirport(FlightID* ID, char* Departure, char* Arrival, int IDcount, int* SearchReasult, int& SearchCount)//���Һ���ɵأ����ز��ҵ��������
{
	SearchCount = 0; //��¼�������ĺ������,������
	int TempSearchCount = 0;			//��ʱ�����������ͳ�ƣ����ڴ洢������ɻ���Ҫ��ĺ���
	int TempSearchReasult[999];
	for (int i = 0; i < IDcount; i++)
	{
		if (!_strnicmp(Departure, ID[i].DepartureAirport, 3))
		{
			TempSearchReasult[TempSearchCount] = i;
			TempSearchCount++;
		}
	}
	for (int i = 0; i < TempSearchCount; i++)
	{
		if (!_strnicmp(Arrival, ID[TempSearchReasult[i]].ArrivalAirport, 3))
		{
			SearchReasult[SearchCount] = TempSearchReasult[i];
			SearchCount++;
		}
	}
	return SearchCount;
}
//�������ʱ������
//���أ�ȫ���ݿ�����/����������ݿ�����
int SortByDepartureTime(FlightID* ID, int IDcount, int* SortReasult)//ð�����򷨰���ʱ���������к��ࣻע��˺���������
{
	int i;
	//����Ҫ��ʼ��һ�´洢������������
	for (i = 0; i < IDcount; i++)

	{
		SortReasult[i] = i;
	}
	int i1, i2;
	for (i1 = 0; i1 < (IDcount - 1); i1++)
	{
		for (i2 = 0; i2 < (IDcount - i1 - 1); i2++)
		{
			if (ID[SortReasult[i2]].DepartureTime > ID[SortReasult[i2 + 1]].DepartureTime)
			{
				int Switch;
				Switch = SortReasult[i2];
				SortReasult[i2] = SortReasult[i2 + 1];
				SortReasult[i2 + 1] = Switch;
			}
		}
	}
	return 0;
}
int SortByDepartureTime(FlightID* ID, int* SearchReasult, int SearchCount, int* SortReasult)//ð�����򷨰���ʱ������������������ע��˺���������
{
	int i;
	//����Ҫ��ʼ��һ�´洢������������
	for (i = 0; i < SearchCount; i++)
	{
		SortReasult[i] = SearchReasult[i];
	}
	int i1, i2;
	for (i1 = 0; i1 < (SearchCount - 1); i1++)
	{
		for (i2 = 0; i2 < (SearchCount - i1 - 1); i2++)
		{
			if (ID[SortReasult[i2]].DepartureTime > ID[SortReasult[i2 + 1]].DepartureTime)
			{
				int Switch;
				Switch = SortReasult[i2];
				SortReasult[i2] = SortReasult[i2 + 1];
				SortReasult[i2 + 1] = Switch;
			}
		}
	}
	return 0;
}
//ɾ��
//���أ�����Ӻ���ȡ��ʱʹ�õڶ���
int DeleteFlight(FlightID* ID, FlightTicket DATA[][999], int& IDcount, int Delete)
{
	for (int i = Delete; i < IDcount; i++)
	{
		ID[i] = ID[i + 1];
		for (int i2 = 0; i2 < 366; i2++)
		{
			DATA[i2][i] = DATA[i2][i + 1];
		}
	}
	IDcount--;
	return IDcount;
}
int DeleteFlight(FlightID* ID, int& IDcount, int Delete)
{
	for (int i = Delete; i < IDcount; i++)
	{
		ID[i] = ID[i + 1];
	}
	IDcount--;
	return IDcount;
}
//������������ݣ��������ƣ���������λ�ã����������λ�ã�Ĭ����ʾ�����ݣ�
int C_InputBox(char* Input, int Limit, int x, int y, const char* Default)
{
	clearrectangle(x, y, x + 160, y + 40);
	fflush(stdin);//��������뻺��
	char c;
	int Length = 0;
	char InputBuf[100] = { '\0' };
	//MOUSEMSG m;
	settextstyle(28, 0, FONT2_EN);
	setlinecolor(BLACK);
	for (int i = x + 5; i < x + 155; i++)
	{
		line(i, y + 35, i + 1, y + 35);
		Sleep(1);
	}
	settextcolor(RGB(220, 220, 220));
	outtextxy(x + 10, y + 4, Default);
	settextcolor(BLACK);
	FlushMouseMsgBuffer();
	while (true)
	{
		//if (MouseHit())//�����걻���£����˳�����
		//{
		//	//m = GetMouseMsg();
		//	//if (m.mkLButton || m.mkRButton)
		//	//{
		//		strcpy(Input, InputBuf);
		//		return Length;
		//	//}
		//}
		c = _getch();
		if (c != 13)//�������Ĳ��ǻس�
		{
			if (Length == 0)
			{
				clearrectangle(x, y, x + 160, y + 34);
			}
			if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
			{
				if (Length == Limit - 1)
				{
					;
				}
				else
				{
					InputBuf[Length] = c;
					InputBuf[Length + 1] = '\0';
					outtextxy(x + 10 + 14 * Length, y + 6, c);
					setlinecolor(RGB(0, 191, 255));
					line(x + 8 + Length * 14, y + 35, x + 22 + Length * 14, y + 35);
					Length++;
				}
			}
			if (c == 8)
			{
				if (Length != 0)
				{
					InputBuf[Length] = '\0';
					Length--;
					clearrectangle(x + 10 + 14 * Length, y, x + 24 + 14 * Length, y + 34);
					setlinecolor(BLACK);
					line(x + 8 + Length * 14, y + 35, x + 22 + Length * 14, y + 35);
				}
			}
		}
		else
		{
			strcpy(Input, InputBuf);
			return Length;
		}
	}
}
//������������ݣ��������ƣ���������λ�ã����������λ�ã�������ܳ��ȣ�����߶ȣ�Ĭ����ʾ�����ݣ�
int C_InputBox(char* Input, int Limit, int x, int y, int Lsize, int Hsize, const char* Default)
{
	clearrectangle(x, y, x + Lsize, y + Hsize);
	fflush(stdin);//��������뻺��
	char c;
	int Length = 0;
	char InputBuf[100] = { '\0' };
	//MOUSEMSG m;
	settextstyle(Hsize, 0, FONT);
	setlinecolor(BLACK);
	for (int i = x; i < x + Lsize; i++)
	{
		line(i, y + Hsize + 2, i + 1, y + Hsize + 2);
		//Sleep(1);
	}
	settextcolor(RGB(220, 220, 220));
	outtextxy(x, y, Default);
	settextcolor(BLACK);
	FlushMouseMsgBuffer();
	while (true)
	{
		//while (MouseHit())//�����걻���£����˳�����
		//{
		//	m = GetMouseMsg();
		//	if (m.uMsg == WM_LBUTTONDOWN)
		//	{
		//		strcpy(Input, InputBuf);
		//		return Length;
		//	}
		//}
		c = _getch();
		if (c != 13)//�������Ĳ��ǻس�
		{
			if (Length == 0)
			{
				clearrectangle(x, y, x + Lsize, y + Hsize);
				settextcolor(RGB(220, 220, 220));
				outtextxy(x, y, Default);
				settextcolor(BLACK);
			}
			if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c == '.' || c == '\\' || c == '/' || c == '_' || c == ':' || c == '-')
			{
				if (Length == Limit)
				{
					;
				}
				else
				{
					if (Length == 0)//��һ���ַ�
					{
						clearrectangle(x, y, x + Lsize, y + Hsize);
					}
					InputBuf[Length] = c;
					InputBuf[Length + 1] = '\0';
					outtextxy(x + (Hsize / 2) * Length, y, c);
					setlinecolor(RGB(0, 191, 255));
					line(x + Length * (Hsize / 2), y + Hsize + 2, x + (Length + 1) * (Hsize / 2), y + Hsize + 2);
					Length++;
				}
			}
			if (c == 8)
			{
				if (Length != 0)
				{
					InputBuf[Length] = '\0';
					Length--;
					clearrectangle(x + Length * (Hsize / 2), y, x + (Length + 1) * (Hsize / 2), y + Hsize);
					setlinecolor(BLACK);
					line(x + Length * (Hsize / 2), y + Hsize + 2, x + (Length + 1) * (Hsize / 2), y + Hsize + 2);
				}
			}
		}
		else
		{
			strcpy(Input, InputBuf);
			return Length;
		}
	}
}
//�����_��¼���棨�������ݣ��������ƣ���������λ�ã����������λ�ã�������ܳ��ȣ�����߶ȣ�Ĭ����ʾ�����ݣ�
int CR_InputBox(char* Input, int Limit, int x, int y, int Lsize, int Hsize, const char* Default)
{
	clearrectangle(x, y, x + Lsize, y + Hsize + 2);
	fflush(stdin);//��������뻺��
	char c;
	int Length = 0;
	char InputBuf[100] = { '\0' };
	//MOUSEMSG m;
	settextstyle(Hsize, 0, FONT);
	setlinecolor(BLACK);
	for (int i = x; i < x + Lsize; i++)
	{
		line(i, y + Hsize, i + 1, y + Hsize);
		//Sleep(1);
	}
	settextcolor(RGB(220, 220, 220));
	outtextxy(x, y, Default);
	settextcolor(BLACK);
	FlushMouseMsgBuffer();
	while (true)
	{
		//while (MouseHit())//�����걻���£����˳�����
		//{
		//	m = GetMouseMsg();
		//	if (m.uMsg == WM_LBUTTONDOWN)
		//	{
		//		strcpy(Input, InputBuf);
		//		return Length;
		//	}
		//}
		c = _getch();
		if (c != 13)//�������Ĳ��ǻس�
		{
			if (Length == 0)
			{
				clearrectangle(x, y, x + Lsize, y + Hsize);
				settextcolor(RGB(220, 220, 220));
				outtextxy(x, y, Default);
				settextcolor(BLACK);
			}
			if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c == '.' || c == '\\' || c == '/' || c == '_' || c == ':' || c == '-')
			{
				if (Length == Limit)
				{
					;
				}
				else
				{
					if (Length == 0)//��һ���ַ�
					{
						clearrectangle(x, y, x + Lsize, y + Hsize);
					}
					InputBuf[Length] = c;
					InputBuf[Length + 1] = '\0';
					outtextxy(x + (Hsize / 2) * Length, y, c);
					setlinecolor(RGB(0, 191, 255));
					line(x + Length * (Hsize / 2), y + Hsize, x + (Length + 1) * (Hsize / 2), y + Hsize);
					Length++;
				}
			}
			if (c == 8)
			{
				if (Length != 0)
				{
					InputBuf[Length] = '\0';
					Length--;
					clearrectangle(x + Length * (Hsize / 2), y, x + (Length + 1) * (Hsize / 2), y + Hsize);
					setlinecolor(BLACK);
					line(x + Length * (Hsize / 2), y + Hsize, x + (Length + 1) * (Hsize / 2), y + Hsize);
				}
			}
		}
		else
		{
			strcpy(Input, InputBuf);
			return Length;
		}
	}
}
//�����_����ʾ�ַ�_��¼���棨�������ݣ��������ƣ���������λ�ã����������λ�ã�������ܳ��ȣ�����߶ȣ�Ĭ����ʾ�����ݣ�
int CHR_InputBox(char* Input, int Limit, int x, int y, int Lsize, int Hsize, const char* Default)
{
	clearrectangle(x, y, x + Lsize, y + Hsize + 2);
	fflush(stdin);//��������뻺��
	char c;
	int Length = 0;
	char InputBuf[100] = { '\0' };
	//MOUSEMSG m;
	settextstyle(Hsize, 0, FONT);
	setlinecolor(BLACK);
	for (int i = x; i < x + Lsize; i++)
	{
		line(i, y + Hsize, i + 1, y + Hsize);
		//Sleep(1);
	}
	settextcolor(RGB(220, 220, 220));
	outtextxy(x, y, Default);
	settextcolor(BLACK);
	FlushMouseMsgBuffer();
	while (true)
	{
		//while (MouseHit())//�����걻���£����˳�����
		//{
		//	m = GetMouseMsg();
		//	if (m.uMsg == WM_LBUTTONDOWN)
		//	{
		//		strcpy(Input, InputBuf);
		//		return Length;
		//	}
		//}
		c = _getch();
		if (c != 13)//�������Ĳ��ǻس�
		{
			if (Length == 0)
			{
				clearrectangle(x, y, x + Lsize, y + Hsize);
				settextcolor(RGB(220, 220, 220));
				outtextxy(x, y, Default);
				settextcolor(BLACK);
			}
			if (c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c == '.' || c == '\\' || c == '/' || c == '_' || c == ':' || c == '-')
			{
				if (Length == Limit)
				{
					;
				}
				else
				{
					if (Length == 0)//��һ���ַ�
					{
						clearrectangle(x, y, x + Lsize, y + Hsize);
					}
					InputBuf[Length] = c;
					InputBuf[Length + 1] = '\0';
					outtextxy(x + (Hsize / 2) * Length, y, '*');
					setlinecolor(RGB(0, 191, 255));
					line(x + Length * (Hsize / 2), y + Hsize, x + (Length + 1) * (Hsize / 2), y + Hsize);
					Length++;
				}
			}
			if (c == 8)
			{
				if (Length != 0)
				{
					InputBuf[Length] = '\0';
					Length--;
					clearrectangle(x + Length * (Hsize / 2), y, x + (Length + 1) * (Hsize / 2), y + Hsize);
					setlinecolor(BLACK);
					line(x + Length * (Hsize / 2), y + Hsize, x + (Length + 1) * (Hsize / 2), y + Hsize);
				}
			}
		}
		else
		{
			strcpy(Input, InputBuf);
			return Length;
		}
	}
}
//�����������
int CountFlyingDetail(FlightID* ID, FlightTicket DATA[][999], int IDcount, int wday, int yday,
	int* FlyingID, int& FlyCount, int& OnTimeCount, int& DelayCount, int& CancelCount)
{
	int Arrival;
	if (wday == 0)
		wday = 7;
	FlyCount = 0;
	OnTimeCount = 0;
	DelayCount = 0;
	CancelCount = 0;
	for (int i = 0; i < IDcount; i++)
	{
		if (ID[i].FlyDay[wday] != '0')
		{
			FlyingID[FlyCount] = i;
			FlyCount++;
			if (DATA[yday][i].ActuralDepartureTime == 2500)
			{
				CancelCount++;
				continue;
			}
			if ((ID[i].ArrivalTime % 100) >= 45)
				Arrival = ID[i].ArrivalTime + 65;
			else
				Arrival = ID[i].ArrivalTime + 15;
			if (DATA[yday][i].ActuralArrivalTime > Arrival)
			{
				DelayCount++;
				continue;
			}
			OnTimeCount++;
		}
	}
	return FlyCount;
}

//�˿Ͳ���

int JudgeAircraftSizeSeat(int n)
{
	if (n == 1)
		return 188;
	else
		return 448;
}
int Passengercount(The_users* users, int i)
{
	int x = 0, count = 0;
	for (x = 0; x < 5; x++)
	{
		if (users[i].p[x] != 0)
			count++;
	}
	return count;
}
int FirstClassTicketRemain(FlightTicket DATA[366][999], int daycount, int i, int judge)//ͷ�Ȳն�Ʊ����
{
	int m, n, f_count = 0;
	if (judge == 1)
	{
		for (m = 0; m < 4; m++)
		{
			for (n = 0; n < 2; n++)
			{
				if (DATA[daycount - 2][i].Seat[m][n] != 0)//�ж��Ƿ�����
					f_count++;//��������
			}
		}
	}
	else
	{
		for (m = 0; m < 4; m++)
		{
			for (n = 0; n < 3; n++)
			{
				if (DATA[daycount - 2][i].Seat[m][n] != 0)//�ж��Ƿ�����
					f_count++;//��������
			}
		}
	}
	return f_count;
}
int BusinessClassTicketRemain(FlightTicket DATA[366][999], int daycount, int i)//���������
{
	int m, n, b_count = 0;
	for (m = 0; m < 6; m++)
	{
		for (n = 0; n < 6; n++)
		{
			if (DATA[daycount - 2][i].Seat[m][n] != 0)//�ж��Ƿ�����
				b_count++;//��������
		}
	}
	return b_count;
}
int EconomyClassTicketRemain(FlightTicket DATA[366][999], int daycount, int i, int judge)//���òն�Ʊ����
{
	int m, n, e_count = 0;
	if (judge == 1)
	{
		for (m = 0; m < 6; m++)
		{
			for (n = 0; n < 30; n++)
			{
				if (DATA[daycount - 2][i].Seat[m][n] != 0)//�ж��Ƿ�����
					e_count++;//��������
			}
		}
	}
	else
	{
		for (m = 0; m < 10; m++)
		{
			for (n = 0; n < 40; n++)
			{
				if (DATA[daycount - 2][i].Seat[m][n] != 0)//�ж��Ƿ�����
					e_count++;//��������
			}
		}
	}
	return e_count;
}
int FindTheHistoryAndOrder(FlightTicket DATA[366][999], FlightID* ID, Passenger* P, The_users* User, int i, FlyhistoryAndOrder* FO)//�Ѷ���ȫ�̳���
{
	int m, n, j, k, h, l=0;
	int pagc = Passengercount(User, i);
	int count = 0;
	for (m = 0; m < 366; m++)
	{
		for (n = 0; n < 999; n++)
		{
			for (j = 0; j < 50; j++)
			{
				for (k = 0; k < 10; k++)
				{
					for (h = 0; h < pagc; h++)
					{
						if (User[i].p[h] == DATA[m][n].Seat[j][k])
						{
							count++;
							for (; l < count; l++)
							{
								FO->flyday[l] = m + 1;
								FO->flight[l] = n;
								FO->seat_x[l] = j;
								FO->seat_y[l] = k;
								int size = JudgeAircraftSize(ID, n);
								FO->Class[l] = Class_get(FO->seat_x, size, l);
								FO->price[l] = price_get(ID, n, FO->Class[l]);
								FO->id[l] = DATA[m][n].Seat[j][k];
							}
						}
					}
				}
			}
		}
		if (count >= 100)
			break;
	}
	return count;
}
int REFindTheHistoryAndOrder(FlightTicket DATA[366][999], FlightID* ID, Passenger* P, The_users* User, int i, FlyhistoryAndOrder* FO)//�Ѷ���ȫ�̳���
{
	int m, n, j, k, h, l=0;
	int pagc = Passengercount(User, i);
	time_t NOW;
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	int year = Local->tm_year + 1900;
	int month = Local->tm_mon + 1;
	int day = Local->tm_mday;
	int x = DateTransfer(year, month, day);
	int count = 0;
	for (m = x - 2; m < 366; m++)
	{
		for (n = 0; n < 999; n++)
		{
			for (j = 0; j < 50; j++)
			{
				for (k = 0; k < 10; k++)
				{
					for (h = 0; h < pagc; h++)
					{
						if (User[i].p[h] == DATA[m][n].Seat[j][k])
						{
							if (strcmp(P[User[i].p[h]].id, User[i].id) == 0)
							{
								count++;
								for (; l < count; l++)
								{
									FO->flyday[l] = m + 1;
									FO->flight[l] = n;
									FO->seat_x[l] = j;
									FO->seat_y[l] = k;
									int size = JudgeAircraftSize(ID, n);
									FO->Class[l] = Class_get(FO->seat_x, size, l);
									FO->price[l] = price_get(ID, n, FO->Class[l]);
									FO->id[l] = DATA[m][n].Seat[j][k];
								}
							}
						}
					}
				}
			}
		}
		if (count >= 100)
			break;
	}
	return count;
}
int year_get()
{
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	int x = sys.wYear;
	return x;
}
int hour_get(int x)
{
	return (x / 100);
}
char Class_get(int seat[100], int size, int i)//������λ�жϲ�λ
{
	if (size == 1)
	{
		if (seat[i] <= 1)
			return 'f';
		else
			return 'e';
	}
	else
	{
		if (seat[i] <= 2)
			return 'f';
		else if ((seat[i] > 2) && (seat[i] <= 8))
			return 'b';
		else
			return 'e';
	}
}
int price_get(FlightID* ID, int i, char Class)//�жϼ۸�
{
	int price = ID[i].Price;
	if (Class == 'e')
		return price;
	else if (Class == 'b')
		return (int)(1.5 * price);
	else
		return (int)(2.5 * price);
}
int Searching(FlightID* ID, FlightTicket DATA[366][999], bookiinginformation* custom, int IDcount)//������Ҫ��һ����Ѱ����ı������ı������Ҳ��˳�Ÿ�
{
	clearrectangle(300, 200, 1280, 720);//��ʼǰ����ʾ�������
	IMAGE plane;
	loadimage(&plane, ".\\IMAGES\\plane.jpeg",0,0);
	putimage(700, 250, &plane);
	settextstyle(28, 0, FONT2_EN);
	outtextxy(300, 255, "FROM:");
	outtextxy(300, 300, "TO:");
	outtextxy(300, 355, "MON:");
	outtextxy(300, 400, "DAY:");
	setlinecolor(RGB(220, 220, 220));
	line(140, 535, 290, 535);
	setlinecolor(BLACK);
	char month[3], day[3];
	C_InputBox(custom->departure, 11, 360, 255, "PEK");
	C_InputBox(custom->destination, 11, 360, 300, "PVG");
	C_InputBox(month, 4, 360, 355, "12");
	C_InputBox(day, 4, 360, 400, "31");
	settextstyle(20, 0, FONT);
	if (month[1] == '\0')
		custom->month = ((int)month[0] - 48);
	else
		custom->month = ((int)month[0] - 48) * 10 + ((int)month[1] - 48);
	if (day[1] == '\0')
		custom->day = ((int)day[0] - 48);
	else
		custom->day = ((int)day[0] - 48) * 10 + ((int)day[1] - 48);
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	custom->year = sys.wYear;
	int t_hour = sys.wHour;
	int today = DateTransfer(sys.wYear, sys.wMonth, sys.wDay);
	int daycount = DateTransfer(custom->year, custom->month, custom->day);
	custom->flyday = daycount;
	int weekday = WeekDayTransfer(custom->year, custom->month, custom->day);
	int i = 0, j = 0, a = 0, f = 0, e = 0, b = 0, r = 0, count = 0;
	int& x = j;
	for (i = 0; i < 999; i++)
	{
		int flyhour = hour_get(ID[i].DepartureTime);
		if ((_strnicmp(ID[i].ArrivalAirport, custom->destination, 3) == 0)\
			&& (_strnicmp(ID[i].DepartureAirport, custom->departure, 3) == 0) && (ID[i].FlyDay[weekday - 1] != '0'))//����ʱ����ʼ���ж�ID
		{
			if (custom->flyday == today)
			{
				if (flyhour - t_hour > 4)
				{
					a = JudgeAircraftSizeSeat(JudgeAircraftSize(ID, i));//����ɸѡ�ĺ��ߵķɻ�����λ��
					if (JudgeAircraftSize(ID, i) == 1)
					{
						f = FirstClassTicketRemain(DATA, daycount, i, 1);
						e = EconomyClassTicketRemain(DATA, daycount, i, 1);
						r = a - f - e;
					}
					else
					{
						f = FirstClassTicketRemain(DATA, daycount, i, 2);
						b = BusinessClassTicketRemain(DATA, daycount, i);
						e = EconomyClassTicketRemain(DATA, daycount, i, 2);
						r = a - f - e - b;
					}
					if (r > 0)
					{
						custom->flynumber[x] = i;//ɸѡ�����Ҫ���ID�ż���
						DATA[daycount - 1][i].FirstClassTicketRemain = f;
						DATA[daycount - 1][i].EconomyClassTicketRemain = e;
						if (JudgeAircraftSize(ID, i) == 2)
							DATA[daycount - 1][i].BusinessClassTicketRemain = b;
						x++;//���������ķɻ���
					}
				}
			}
			else
			{
				a = JudgeAircraftSizeSeat(JudgeAircraftSize(ID, i));//����ɸѡ�ĺ��ߵķɻ�����λ��
				if (JudgeAircraftSize(ID, i) == 1)
				{
					f = FirstClassTicketRemain(DATA, daycount, i, 1);
					e = EconomyClassTicketRemain(DATA, daycount, i, 1);
					r = a - f - e;
				}
				else
				{
					f = FirstClassTicketRemain(DATA, daycount, i, 2);
					b = BusinessClassTicketRemain(DATA, daycount, i);
					e = EconomyClassTicketRemain(DATA, daycount, i, 2);
					r = a - f - e - b;
				}
				if (r > 0)
				{
					custom->flynumber[x] = i;//ɸѡ�����Ҫ���ID�ż���
					DATA[daycount - 1][i].FirstClassTicketRemain = f;
					DATA[daycount - 1][i].EconomyClassTicketRemain = e;
					if (JudgeAircraftSize(ID, i) == 2)
						DATA[daycount - 1][i].BusinessClassTicketRemain = b;
					x++;//���������ķɻ���
				}
			}
		}
	}
	return x;//����ID�����ڷ���Ҫ��ķɻ�����
}
int p_Booking(FlightID* ID, FlightTicket DATA[366][999], Passenger* P, The_users* users, int i, int flyday, int flynumber)
{
	int m = 0, p_count = 0;
	for (m = 0; m < 5; m++)
	{
		if (users[i].p[m] != 0)
			p_count++;
	}
	cleardevice();
	setbkcolor(RGB(255, 255, 253));
	settextcolor(BLACK);
	IMAGE BG;
	loadimage(&BG, _T(".\\IMAGES\\Bacgr.png"), 1280, 720);
	putimage(0, 0, &BG);		// ���±���
	PrintCustomer(users, i);
	settextstyle(25, 0, FONT);
	outtextxy(660, 200, "��ѡ��˳���");
	IMAGE Chioce1, Chioce2, Chioce3, Chioce4, Chioce5, Chioce6, Chioce7, Chioce8;
	IMAGE passenger;
	loadimage(&passenger, ".\\IMAGES\\passenger.jpg", 0, 0);
	putimage( 860, 350 ,&passenger);
	int MENUchoice;
	int l = 0;
	p_count = 0;
	for (l = 0; l < 5; l++)
	{
		if (users[i].p[l] != 0)
			p_count++;
	}
	if (p_count == 0)
	{
		outtextxy(440, 290, "���޳˳��˿����");
		loadimage(&Chioce1, _T(".\\IMAGES\\choose.png"), 30, 30);
		putimage(500, 600, &Chioce1);
		loadimage(&Chioce2, _T(".\\IMAGES\\cancel.png"), 30, 30);
		putimage(700, 600, &Chioce2);
		MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_Passenger_MENUChoose();
		if (MENUchoice == 29)
			return 18;
		else if (MENUchoice == 28)
			MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_Passenger_MENUChoose();
		else
			return MENUchoice;
	}
	int flag1 = 0, flag2 = 0, flag3 = 0, flag4 = 0, flag5 = 0;
	for (l = 0; l < p_count; l++)
	{
		loadimage(&Chioce3, _T(".\\IMAGES\\SelectBox.png"), 30, 30);
		putimage(430, 290 + 60 * l, &Chioce3);
		outtextxy(500, 290 + 60 * l, P[users[i].p[l]].name);
	}
	loadimage(&Chioce1, _T(".\\IMAGES\\choose.png"), 100, 50);
	putimage(500, 600, &Chioce1);
	loadimage(&Chioce2, _T(".\\IMAGES\\cancel.png"), 100, 50);
	putimage(700, 600, &Chioce2);
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.x > 430 && m.y > 290 && m.x < 460 && m.y < 310)
			{
				if (flag1 == 0)
				{
					if (flag1 + flag2 + flag3 + flag4 + flag5 < 2)
					{
						flag1 = 1;
						clearrectangle(430, 290, 460, 310);
						loadimage(&Chioce4, _T(".\\IMAGES\\SelectBoxActive.png"), 30, 30);
						putimage(430, 290, &Chioce4);
					}
				}
				else if (flag1 == 1)
				{
					flag1 = 0;
					clearrectangle(430, 290, 460, 310);
					loadimage(&Chioce4, _T(".\\IMAGES\\SelectBox.png"), 30, 30);
					putimage(430, 290, &Chioce4);
				}
			}
			if (m.x > 430 && m.y > 350 && m.x < 460 && m.y < 380)
			{
				if (flag2 == 0)
				{
					if (flag1 + flag2 + flag3 + flag4 + flag5 < 2)
					{
						flag2 = 1;
						clearrectangle(430, 350, 460, 380);
						loadimage(&Chioce5, _T(".\\IMAGES\\SelectBoxActive.png"), 30, 30);
						putimage(430, 350, &Chioce5);
					}
				}
				else if (flag2 == 1)
				{
					flag2 = 0;
					clearrectangle(430, 350, 460, 380);
					loadimage(&Chioce5, _T(".\\IMAGES\\SelectBox.png"), 30, 30);
					putimage(430, 350, &Chioce5);
				}
			}
			if (m.x > 430 && m.y > 410 && m.x < 460 && m.y < 440)
			{
				if (flag3 == 0)
				{
					if (flag1 + flag2 + flag3 + flag4 + flag5 < 2)
					{
						flag3 = 1;
						clearrectangle(430, 410, 460, 440);
						loadimage(&Chioce6, _T(".\\IMAGES\\SelectBoxActive.png"), 30, 30);
						putimage(430, 410, &Chioce6);
					}
				}
				else if (flag3 == 1)
				{
					flag3 = 0;
					clearrectangle(430, 410, 460, 440);
					loadimage(&Chioce6, _T(".\\IMAGES\\SelectBox.png"), 30, 30);
					putimage(430, 410, &Chioce6);
				}
			}
			if (m.x > 430 && m.y > 470 && m.x < 460 && m.y < 500)
			{
				if (flag4 == 0)
				{
					if (flag1 + flag2 + flag3 + flag4 + flag5 < 2)
					{
						flag4 = 1;
						clearrectangle(430, 470, 460, 500);
						loadimage(&Chioce7, _T(".\\IMAGES\\SelectBoxActive.png"), 30, 30);
						putimage(430, 470, &Chioce7);
					}
				}
				else if (flag4 == 1)
				{
					flag4 = 0;
					clearrectangle(430, 470, 460, 500);
					loadimage(&Chioce7, _T(".\\IMAGES\\SelectBox.png"), 30, 30);
					putimage(430, 470, &Chioce7);
				}
			}
			if (m.x > 430 && m.y > 530 && m.x < 460 && m.y < 560)
			{
				if (flag5 == 0)
				{
					if (flag1 + flag2 + flag3 + flag4 + flag5 < 2)
					{
						flag5 = 1;
						clearrectangle(430, 530, 460, 560);
						loadimage(&Chioce8, _T(".\\IMAGES\\SelectBoxActive.png"), 30, 30);
						putimage(430, 530, &Chioce8);
					}
				}
				else if (flag5 == 1)
				{
					flag5 = 0;
					clearrectangle(430, 530, 460, 560);
					loadimage(&Chioce8, _T(".\\IMAGES\\SelectBox.png"), 30, 30);
					putimage(430, 530, &Chioce8);
				}
			}
			if (m.x > 500 && m.y > 600 && m.x < 600 && m.y < 655)//��갴�ڶ�Ʊȷ������
			{
				if (flag1 + flag2 + flag3 + flag4 + flag5 == 0)
				{
					//û��ѡ��˳��ˣ��޷�Ӧ
				}
				else
					break;
			}
			if (m.x > 700 && m.y > 600 && m.x < 800 && m.y < 655)//��갴��ȡ������
				return 18;
		}
	}
	cleardevice();
	setbkcolor(RGB(255, 255, 253));
	settextcolor(BLACK);
	IMAGE seat1, seat2, seat3;
	loadimage(&BG, _T(".\\IMAGES\\Bacgr.png"), 1280, 720);
	putimage(0, 0, &BG);						// ���±���
	PrintCustomer(users, i);
	settextstyle(25, 0, FONT);
	outtextxy(660, 200, "��ѡ���λ");
	int size = JudgeAircraftSize(ID, flynumber);
	loadimage(&Chioce1, _T(".\\IMAGES\\choose.png"), 0, 0);
	putimage(400, 650, &Chioce1);
	loadimage(&Chioce2, _T(".\\IMAGES\\cancel.png"), 0, 0);
	putimage(800, 650, &Chioce2);
	int  SA = 0, SB = 0, SC = 0, SD = 0, SE = 0, SG = 0, SH = 0, SJ = 0, SK = 0, SL = 0;
	int F = 0, B = 0, E = 0;
	IMAGE seat0;
	IMAGE CS;
	loadimage(&CS, ".\\IMAGES\\CS.jpg", 0, 0);
	putimage(860, 200, &CS);
	if (size == 1)//С�ɻ�`
	{
		for (l = 0; l < 2; l++)
		{
			loadimage(&Chioce3, _T(".\\IMAGES\\SelectBox.png"), 0, 0);
			putimage(430, 290 + 60 * l, &Chioce3);
		}
		outtextxy(500, 290, "ͷ�Ȳ�");
		outtextxy(500, 350, "���ò�");
		while (true)
		{
			MOUSEMSG m;
			// ��ȡһ�������Ϣ
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN)//������������
			{
				if (m.x > 430 && m.y > 290 && m.x < 460 && m.y < 310)//ͷ�Ȳ�
				{
					if (F == 0)
					{
						if (F + E < 1)
						{
							F = 1;
							clearrectangle(430, 290, 460, 310);
							loadimage(&Chioce4, _T(".\\IMAGES\\SelectBoxActive.png"), 0, 0);
							putimage(430, 290, &Chioce4);
						}
					}
					else if (F == 1)
					{
						F = 0;
						clearrectangle(430, 290, 460, 310);
						loadimage(&Chioce4, _T(".\\IMAGES\\SelectBox.png"), 0, 0);
						putimage(430, 290, &Chioce4);
					}
				}
				if (m.x > 430 && m.y > 350 && m.x < 460 && m.y < 380)
				{
					if (E == 0)
					{
						if (F + E < 1)
						{
							E = 1;
							clearrectangle(430, 350, 460, 380);
							loadimage(&Chioce5, _T(".\\IMAGES\\SelectBoxActive.png"), 0, 0);
							putimage(430, 350, &Chioce5);
						}
					}
					else if (E == 1)
					{
						E = 0;
						clearrectangle(430, 350, 460, 380);
						loadimage(&Chioce5, _T(".\\IMAGES\\SelectBox.png"), 0, 0);
						putimage(430, 350, &Chioce5);
					}
				}
				if (m.x > 400 && m.y > 650 && m.x < 500 && m.y < 750)//��갴��ѡ��ȷ������
				{
					if (F + E == 0)
					{
						//û��ѡ���λ���޷�Ӧ
					}
					else
						break;
				}
				if (m.x > 800 && m.y > 650 && m.x < 500 && m.y < 750)//��갴��ȡ������
					return 18;
			}
		}
		if (F == 1)//ͷ�Ȳ�
		{
			cleardevice();
			setbkcolor(RGB(255, 255, 253));
			settextcolor(BLACK);
			IMAGE BG, seat1, seat2, seat3;
			loadimage(&BG, _T(".\\IMAGES\\FirstBc.png"), 1280, 720);
			putimage(0, 0, &BG);						// ���±���
			PrintCustomer(users, i);
			settextstyle(25, 0, FONT);
			loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
			putimage(435, 348, &seat0);
			putimage(490, 348, &seat0);
			putimage(635, 348, &seat0);
			putimage(690, 348, &seat0);
			if (flag1 + flag2 + flag3 + flag4 + flag5 == 1)
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 435 && m.y > 348 && m.x < 490 && m.y < 410)//ͷ�Ȳ�
						{
							if (SA == 0)
							{
								if (SA + SB + SJ + SL < 1)
								{
									SA = 1;
									clearrectangle(435, 348, 490, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(435, 348, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(435, 348, 490, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(435, 348, &seat0);
							}
						}
						if (m.x > 490 && m.y > 348 && m.x < 545 && m.y < 410)
						{
							if (SB == 0)
							{
								if (SA + SB + SJ + SL < 1)
								{
									SB = 1;
									clearrectangle(490, 348, 545, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(490, 348, &seat1);
								}
							}
							else if (SB == 1)
							{
								SB = 0;
								clearrectangle(490, 348, 545, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(490, 348, &seat0);
							}
						}
						if (m.x > 635 && m.y > 348 && m.x < 690 && m.y < 410)
						{
							if (SJ == 0)
							{
								if (SA + SB + SJ + SL < 1)
								{
									SJ = 1;
									clearrectangle(635, 348, 690, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(635, 348, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(635, 348, 690, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(635, 348, &seat0);
							}
						}
						if (m.x > 690 && m.y > 348 && m.x < 745 && m.y < 410)
						{
							if (SL == 0)
							{
								if (SA + SB + SJ + SL < 1)
								{
									SL = 1;
									clearrectangle(690, 348, 745, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(690, 348, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(690, 348, 745, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(690, 348, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SB + SJ + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
			else
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 435 && m.y > 348 && m.x < 490 && m.y < 410)//ͷ�Ȳ�
						{
							if (SA == 0)
							{
								if (SA + SB + SJ + SL < 2)
								{
									SA = 1;
									clearrectangle(435, 348, 490, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(435, 348, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(435, 348, 490, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(435, 348, &seat0);
							}
						}
						if (m.x > 490 && m.y > 348 && m.x < 545 && m.y < 410)
						{
							if (SB == 0)
							{
								if (SA + SB + SJ + SL < 2)
								{
									SB = 1;
									clearrectangle(490, 348, 545, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(490, 348, &seat1);
								}
							}
							else if (SB == 1)
							{
								SB = 0;
								clearrectangle(490, 348, 545, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(490, 348, &seat0);
							}
						}
						if (m.x > 635 && m.y > 348 && m.x < 690 && m.y < 410)
						{
							if (SJ == 0)
							{
								if (SA + SB + SJ + SL < 2)
								{
									SJ = 1;
									clearrectangle(635, 348, 690, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(635, 348, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(635, 348, 690, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(635, 348, &seat0);
							}
						}
						if (m.x > 690 && m.y > 348 && m.x < 745 && m.y < 410)
						{
							if (SL == 0)
							{
								if (SA + SB + SJ + SL < 2)
								{
									SL = 1;
									clearrectangle(690, 348, 745, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(690, 348, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(690, 348, 745, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(690, 348, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SB + SJ + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
		}
		if (E == 1)//���ò�
		{
			cleardevice();
			setbkcolor(RGB(255, 255, 253));
			settextcolor(BLACK);
			IMAGE BG, seat1, seat2, seat3;
			loadimage(&BG, _T(".\\IMAGES\\EconomicalBc1.png"), 1280, 720);
			putimage(0, 0, &BG);						// ���±���
			PrintCustomer(users, i);
			settextstyle(25, 0, FONT);
			loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
			putimage(406, 348, &seat0);
			putimage(461, 348, &seat0);
			putimage(516, 348, &seat0);
			putimage(705, 348, &seat0);
			putimage(760, 348, &seat0);
			putimage(815, 348, &seat0);
			if (flag1 + flag2 + flag3 + flag4 + flag5 == 1)
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 406 && m.y > 348 && m.x < 461 && m.y < 410)
						{
							if (SA == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 1)
								{
									SA = 1;
									clearrectangle(406, 348, 461, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(406, 348, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(406, 348, 461, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(406, 348, &seat0);
							}
						}
						if (m.x > 461 && m.y > 348 && m.x < 516 && m.y < 410)
						{
							if (SB == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 1)
								{
									SB = 1;
									clearrectangle(461, 348, 516, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(461, 348, &seat1);
								}
							}
							else if (SB == 1)
							{
								SB = 0;
								clearrectangle(461, 348, 516, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(461, 348, &seat0);
							}
						}
						if (m.x > 516 && m.y > 348 && m.x < 571 && m.y < 410)
						{
							if (SC == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 1)
								{
									SC = 1;
									clearrectangle(516, 348, 571, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(516, 348, &seat1);
								}
							}
							else if (SC == 1)
							{
								SC = 0;
								clearrectangle(516, 348, 571, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(516, 348, &seat0);
							}
						}
						if (m.x > 705 && m.y > 348 && m.x < 760 && m.y < 410)
						{
							if (SJ == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 1)
								{
									SJ = 1;
									clearrectangle(705, 348, 760, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(705, 348, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(705, 348, 760, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(705, 348, &seat0);
							}
						}
						if (m.x > 760 && m.y > 348 && m.x < 815 && m.y < 410)
						{
							if (SK == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 1)
								{
									SK = 1;
									clearrectangle(760, 348, 815, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(760, 348, &seat1);
								}
							}
							else if (SK == 1)
							{
								SK = 0;
								clearrectangle(760, 348, 815, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(760, 348, &seat0);
							}
						}
						if (m.x > 815 && m.y > 348 && m.x < 870 && m.y < 410)
						{
							if (SL == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 1)
								{
									SL = 1;
									clearrectangle(815, 348, 870, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(815, 348, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(690, 348, 870, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(815, 348, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SB + SC + SJ + SK + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
			else
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 406 && m.y > 348 && m.x < 461 && m.y < 410)
						{
							if (SA == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 2)
								{
									SA = 1;
									clearrectangle(406, 348, 461, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(406, 348, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(406, 348, 461, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(406, 348, &seat0);
							}
						}
						if (m.x > 461 && m.y > 348 && m.x < 516 && m.y < 410)
						{
							if (SB == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 2)
								{
									SB = 1;
									clearrectangle(461, 348, 516, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(461, 348, &seat1);
								}
							}
							else if (SB == 1)
							{
								SB = 0;
								clearrectangle(461, 348, 516, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(461, 348, &seat0);
							}
						}
						if (m.x > 516 && m.y > 348 && m.x < 571 && m.y < 410)
						{
							if (SC == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 2)
								{
									SC = 1;
									clearrectangle(516, 348, 571, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(516, 348, &seat1);
								}
							}
							else if (SC == 1)
							{
								SC = 0;
								clearrectangle(516, 348, 571, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(516, 348, &seat0);
							}
						}
						if (m.x > 705 && m.y > 348 && m.x < 760 && m.y < 410)
						{
							if (SJ == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 2)
								{
									SJ = 1;
									clearrectangle(705, 348, 760, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(705, 348, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(705, 348, 760, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(705, 348, &seat0);
							}
						}
						if (m.x > 760 && m.y > 348 && m.x < 815 && m.y < 410)
						{
							if (SK == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 2)
								{
									SK = 1;
									clearrectangle(760, 348, 815, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(760, 348, &seat1);
								}
							}
							else if (SK == 1)
							{
								SK = 0;
								clearrectangle(760, 348, 815, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(760, 348, &seat0);
							}
						}
						if (m.x > 815 && m.y > 348 && m.x < 870 && m.y < 410)
						{
							if (SL == 0)
							{
								if (SA + SB + SC + SJ + SK + SL < 2)
								{
									SL = 1;
									clearrectangle(815, 348, 870, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(815, 348, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(690, 348, 870, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(815, 348, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SB + SC + SJ + SK + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
		}
	}
	else//��ɻ�
	{
		for (l = 0; l < 3; l++)
		{
			loadimage(&Chioce3, _T(".\\IMAGES\\SelectBox.png"), 0, 0);
			putimage(430, 290 + 60 * l, &Chioce3);
		}
		outtextxy(500, 290, "ͷ�Ȳ�");
		outtextxy(500, 350, "�����");
		outtextxy(500, 410, "���ò�");
		while (true)
		{
			MOUSEMSG m;
			// ��ȡһ�������Ϣ
			m = GetMouseMsg();
			if (m.uMsg == WM_LBUTTONDOWN)//������������
			{
				if (m.x > 430 && m.y > 290 && m.x < 460 && m.y < 310)//ͷ�Ȳ�
				{
					if (F == 0)
					{
						if (F + E + B < 1)
						{
							F = 1;
							clearrectangle(430, 290, 460, 310);
							loadimage(&Chioce4, _T(".\\IMAGES\\SelectBoxActive.png"), 0, 0);
							putimage(430, 290, &Chioce4);
						}
					}
					else if (F == 1)
					{
						F = 0;
						clearrectangle(430, 290, 460, 310);
						loadimage(&Chioce4, _T(".\\IMAGES\\SelectBox.png"), 0, 0);
						putimage(430, 290, &Chioce4);
					}
				}
				if (m.x > 430 && m.y > 350 && m.x < 460 && m.y < 380)
				{
					if (B == 0)
					{
						if (F + E + B < 1)
						{
							B = 1;
							clearrectangle(430, 350, 460, 380);
							loadimage(&Chioce5, _T(".\\IMAGES\\SelectBoxActive.png"), 0, 0);
							putimage(430, 350, &Chioce5);
						}
					}
					else if (B == 1)
					{
						B = 0;
						clearrectangle(430, 350, 460, 380);
						loadimage(&Chioce5, _T(".\\IMAGES\\SelectBox.png"), 0, 0);
						putimage(430, 350, &Chioce5);
					}
				}
				if (m.x > 430 && m.y > 410 && m.x < 460 && m.y < 440)
				{
					if (E == 0)
					{
						if (F + E + B < 1)
						{
							E = 1;
							clearrectangle(430, 410, 460, 380);
							loadimage(&Chioce5, _T(".\\IMAGES\\SelectBoxActive.png"), 0, 0);
							putimage(430, 410, &Chioce5);
						}
					}
					else if (E == 1)
					{
						E = 0;
						clearrectangle(430, 410, 460, 380);
						loadimage(&Chioce5, _T(".\\IMAGES\\SelectBox.png"), 0, 0);
						putimage(430, 410, &Chioce5);
					}
				}
				if (m.x > 400 && m.y > 650 && m.x < 500 && m.y < 700)//��갴��ѡ��ȷ������
				{
					if (F + E + B == 0)
					{
						//û��ѡ���λ���޷�Ӧ
					}
					else
						break;
				}
				if (m.x > 800 && m.y > 650 && m.x < 900 && m.y < 700)//��갴��ȡ������
					return 18;
			}
		}
		if (F == 1)//ͷ�Ȳ�
		{
			cleardevice();
			setbkcolor(RGB(255, 255, 253));
			settextcolor(BLACK);
			IMAGE BG, seat1, seat2, seat3;
			loadimage(&BG, _T(".\\IMAGES\\FirstBc.png"), 1280, 720);
			putimage(0, 0, &BG);						// ���±���
			PrintCustomer(users, i);
			settextstyle(25, 0, FONT);
			loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
			putimage(435, 348, &seat0);
			putimage(490, 348, &seat0);
			putimage(635, 348, &seat0);
			putimage(690, 348, &seat0);
			if (flag1 + flag2 + flag3 + flag4 + flag5 == 1)
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 435 && m.y > 348 && m.x < 490 && m.y < 410)//ͷ�Ȳ�
						{
							if (SA == 0)
							{
								if (SA + SB + SJ + SL < 1)
								{
									SA = 1;
									clearrectangle(435, 348, 490, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(435, 348, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(435, 348, 490, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(435, 348, &seat0);
							}
						}
						if (m.x > 490 && m.y > 348 && m.x < 545 && m.y < 410)
						{
							if (SB == 0)
							{
								if (SA + SB + SJ + SL < 1)
								{
									SB = 1;
									clearrectangle(490, 348, 545, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(490, 348, &seat1);
								}
							}
							else if (SB == 1)
							{
								SB = 0;
								clearrectangle(490, 348, 545, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(490, 348, &seat0);
							}
						}
						if (m.x > 635 && m.y > 348 && m.x < 690 && m.y < 410)
						{
							if (SJ == 0)
							{
								if (SA + SB + SJ + SL < 1)
								{
									SJ = 1;
									clearrectangle(635, 348, 690, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(635, 348, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(635, 348, 690, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(635, 348, &seat0);
							}
						}
						if (m.x > 690 && m.y > 348 && m.x < 745 && m.y < 410)
						{
							if (SL == 0)
							{
								if (SA + SB + SJ + SL < 1)
								{
									SL = 1;
									clearrectangle(690, 348, 745, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(690, 348, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(690, 348, 745, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(690, 348, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SB + SJ + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
			else
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 435 && m.y > 348 && m.x < 490 && m.y < 410)//ͷ�Ȳ�
						{
							if (SA == 0)
							{
								if (SA + SB + SJ + SL < 2)
								{
									SA = 1;
									clearrectangle(435, 348, 490, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(435, 348, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(435, 348, 490, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(435, 348, &seat0);
							}
						}
						if (m.x > 490 && m.y > 348 && m.x < 545 && m.y < 410)
						{
							if (SB == 0)
							{
								if (SA + SB + SJ + SL < 2)
								{
									SB = 1;
									clearrectangle(490, 348, 545, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(490, 348, &seat1);
								}
							}
							else if (SB == 1)
							{
								SB = 0;
								clearrectangle(490, 348, 545, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(490, 348, &seat0);
							}
						}
						if (m.x > 635 && m.y > 348 && m.x < 690 && m.y < 410)
						{
							if (SJ == 0)
							{
								if (SA + SB + SJ + SL < 2)
								{
									SJ = 1;
									clearrectangle(635, 348, 690, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(635, 348, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(635, 348, 690, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(635, 348, &seat0);
							}
						}
						if (m.x > 690 && m.y > 348 && m.x < 745 && m.y < 410)
						{
							if (SL == 0)
							{
								if (SA + SB + SJ + SL < 2)
								{
									SL = 1;
									clearrectangle(690, 348, 745, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(690, 348, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(690, 348, 745, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(690, 348, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SB + SJ + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
		}
		if (B == 1)
		{
			cleardevice();
			setbkcolor(RGB(255, 255, 253));
			settextcolor(BLACK);
			IMAGE BG, seat1, seat2, seat3;
			loadimage(&BG, _T(".\\IMAGES\\BussinessBc.png"), 1280, 720);
			putimage(0, 0, &BG);						// ���±���
			PrintCustomer(users, i);
			settextstyle(25, 0, FONT);
			loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
			putimage(406, 348, &seat0);
			putimage(461, 348, &seat0);
			putimage(516, 348, &seat0);
			putimage(705, 348, &seat0);
			putimage(760, 348, &seat0);
			putimage(815, 348, &seat0);
			if (flag1 + flag2 + flag3 + flag4 + flag5 == 1)
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 406 && m.y > 348 && m.x < 461 && m.y < 410)
						{
							if (SA == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 1)
								{
									SA = 1;
									clearrectangle(406, 348, 461, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(406, 348, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(406, 348, 461, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(406, 348, &seat0);
							}
						}
						if (m.x > 461 && m.y > 348 && m.x < 516 && m.y < 410)
						{
							if (SC == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 1)
								{
									SC = 1;
									clearrectangle(461, 348, 516, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(461, 348, &seat1);
								}
							}
							else if (SC == 1)
							{
								SC = 0;
								clearrectangle(461, 348, 516, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(461, 348, &seat0);
							}
						}
						if (m.x > 516 && m.y > 348 && m.x < 571 && m.y < 410)
						{
							if (SD == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 1)
								{
									SD = 1;
									clearrectangle(516, 348, 571, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(516, 348, &seat1);
								}
							}
							else if (SD == 1)
							{
								SD = 0;
								clearrectangle(516, 348, 571, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(516, 348, &seat0);
							}
						}
						if (m.x > 705 && m.y > 348 && m.x < 760 && m.y < 410)
						{
							if (SH == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 1)
								{
									SH = 1;
									clearrectangle(705, 348, 760, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(705, 348, &seat1);
								}
							}
							else if (SH == 1)
							{
								SH = 0;
								clearrectangle(705, 348, 760, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(705, 348, &seat0);
							}
						}
						if (m.x > 760 && m.y > 348 && m.x < 815 && m.y < 410)
						{
							if (SJ == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 1)
								{
									SJ = 1;
									clearrectangle(760, 348, 815, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(760, 348, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(760, 348, 815, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(760, 348, &seat0);
							}
						}
						if (m.x > 815 && m.y > 348 && m.x < 870 && m.y < 410)
						{
							if (SL == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 1)
								{
									SL = 1;
									clearrectangle(815, 348, 870, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(815, 348, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(690, 348, 870, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(815, 348, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SD + SC + SJ + SH + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
			else
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 406 && m.y > 348 && m.x < 461 && m.y < 410)
						{
							if (SA == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 2)
								{
									SA = 1;
									clearrectangle(406, 348, 461, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(406, 348, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(406, 348, 461, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(406, 348, &seat0);
							}
						}
						if (m.x > 461 && m.y > 348 && m.x < 516 && m.y < 410)
						{
							if (SC == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 2)
								{
									SC = 1;
									clearrectangle(461, 348, 516, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(461, 348, &seat1);
								}
							}
							else if (SC == 1)
							{
								SC = 0;
								clearrectangle(461, 348, 516, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(461, 348, &seat0);
							}
						}
						if (m.x > 516 && m.y > 348 && m.x < 571 && m.y < 410)
						{
							if (SD == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 2)
								{
									SD = 1;
									clearrectangle(516, 348, 571, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(516, 348, &seat1);
								}
							}
							else if (SD == 1)
							{
								SD = 0;
								clearrectangle(516, 348, 571, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(516, 348, &seat0);
							}
						}
						if (m.x > 705 && m.y > 348 && m.x < 760 && m.y < 410)
						{
							if (SH == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 2)
								{
									SH = 1;
									clearrectangle(705, 348, 760, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(705, 348, &seat1);
								}
							}
							else if (SH == 1)
							{
								SH = 0;
								clearrectangle(705, 348, 760, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(705, 348, &seat0);
							}
						}
						if (m.x > 760 && m.y > 348 && m.x < 815 && m.y < 410)
						{
							if (SJ == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 2)
								{
									SJ = 1;
									clearrectangle(760, 348, 815, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(760, 348, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(760, 348, 815, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(760, 348, &seat0);
							}
						}
						if (m.x > 815 && m.y > 348 && m.x < 870 && m.y < 410)
						{
							if (SL == 0)
							{
								if (SA + SD + SC + SJ + SH + SL < 2)
								{
									SL = 1;
									clearrectangle(815, 348, 870, 410);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(815, 348, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(690, 348, 870, 410);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(815, 348, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SD + SC + SJ + SH + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
		}
		if (E == 1)
		{
			cleardevice();
			setbkcolor(RGB(255, 255, 253));
			settextcolor(BLACK);
			IMAGE BG, seat1, seat2, seat3;
			loadimage(&BG, _T(".\\IMAGES\\EconomicalBc2.png"), 1280, 720);
			putimage(0, 0, &BG);						// ���±���
			PrintCustomer(users, i);
			settextstyle(25, 0, FONT);
			loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
			putimage(383, 360, &seat0);
			putimage(438, 360, &seat0);
			putimage(493, 360, &seat0);
			putimage(585, 360, &seat0);
			putimage(640, 360, &seat0);
			putimage(695, 360, &seat0);
			putimage(750, 360, &seat0);
			putimage(850, 360, &seat0);
			putimage(905, 360, &seat0);
			putimage(960, 360, &seat0);
			if (flag1 + flag2 + flag3 + flag4 + flag5 == 1)
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 383 && m.y > 360 && m.x < 438 && m.y < 422)
						{
							if (SA == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SA = 1;
									clearrectangle(383, 360, 438, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(383, 360, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(383, 360, 438, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(383, 360, &seat0);
							}
						}
						if (m.x > 438 && m.y > 360 && m.x < 493 && m.y < 422)
						{
							if (SB == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SB = 1;
									clearrectangle(438, 360, 493, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(438, 360, &seat1);
								}
							}
							else if (SB == 1)
							{
								SB = 0;
								clearrectangle(438, 360, 493, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(438, 360, &seat0);
							}
						}
						if (m.x > 493 && m.y > 360 && m.x < 548 && m.y < 422)
						{
							if (SC == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SC = 1;
									clearrectangle(493, 360, 548, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(493, 360, &seat1);
								}
							}
							else if (SC == 1)
							{
								SC = 0;
								clearrectangle(493, 360, 548, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(493, 360, &seat0);
							}
						}
						if (m.x > 585 && m.y > 360 && m.x < 640 && m.y < 422)
						{
							if (SD == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SD = 1;
									clearrectangle(585, 360, 640, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(585, 360, &seat1);
								}
							}
							else if (SD == 1)
							{
								SD = 0;
								clearrectangle(585, 360, 640, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(585, 360, &seat0);
							}
						}
						if (m.x > 640 && m.y > 360 && m.x < 695 && m.y < 422)
						{
							if (SE == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SE = 1;
									clearrectangle(640, 360, 695, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(640, 360, &seat1);
								}
							}
							else if (SE == 1)
							{
								SE = 0;
								clearrectangle(640, 360, 695, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(640, 360, &seat0);
							}
						}
						if (m.x > 695 && m.y > 360 && m.x < 750 && m.y < 422)
						{
							if (SG == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SG = 1;
									clearrectangle(695, 360, 750, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(695, 360, &seat1);
								}
							}
							else if (SG == 1)
							{
								SG = 0;
								clearrectangle(695, 360, 750, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(695, 360, &seat0);
							}
						}
						if (m.x > 750 && m.y > 360 && m.x < 805 && m.y < 422)
						{
							if (SH == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SH = 1;
									clearrectangle(750, 360, 805, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(750, 360, &seat1);
								}
							}
							else if (SH == 1)
							{
								SH = 0;
								clearrectangle(750, 360, 805, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(750, 360, &seat0);
							}
						}
						if (m.x > 850 && m.y > 360 && m.x < 905 && m.y < 422)
						{
							if (SJ == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SJ = 1;
									clearrectangle(850, 360, 905, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(850, 360, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(850, 360, 905, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(850, 360, &seat0);
							}
						}
						if (m.x > 905 && m.y > 360 && m.x < 960 && m.y < 422)
						{
							if (SK == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SK = 1;
									clearrectangle(905, 360, 960, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(905, 360, &seat1);
								}
							}
							else if (SK == 1)
							{
								SK = 0;
								clearrectangle(905, 360, 960, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(905, 360, &seat0);
							}
						}
						if (m.x > 960 && m.y > 360 && m.x < 1015 && m.y < 422)
						{
							if (SL == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 1)
								{
									SL = 1;
									clearrectangle(960, 360, 1015, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(960, 360, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(960, 360, 1015, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(960, 360, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
			else
			{
				while (true)
				{
					MOUSEMSG m;
					// ��ȡһ�������Ϣ
					m = GetMouseMsg();
					if (m.uMsg == WM_LBUTTONDOWN)//������������
					{
						if (m.x > 383 && m.y > 360 && m.x < 438 && m.y < 422)
						{
							if (SA == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SA = 1;
									clearrectangle(383, 360, 438, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(383, 360, &seat1);
								}
							}
							else if (SA == 1)
							{
								SA = 0;
								clearrectangle(383, 360, 438, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(383, 360, &seat0);
							}
						}
						if (m.x > 438 && m.y > 360 && m.x < 493 && m.y < 422)
						{
							if (SB == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SB = 1;
									clearrectangle(438, 360, 493, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(438, 360, &seat1);
								}
							}
							else if (SB == 1)
							{
								SB = 0;
								clearrectangle(438, 360, 493, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(438, 360, &seat0);
							}
						}
						if (m.x > 493 && m.y > 360 && m.x < 548 && m.y < 422)
						{
							if (SC == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SC = 1;
									clearrectangle(493, 360, 548, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(493, 360, &seat1);
								}
							}
							else if (SC == 1)
							{
								SC = 0;
								clearrectangle(493, 360, 548, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(493, 360, &seat0);
							}
						}
						if (m.x > 585 && m.y > 360 && m.x < 640 && m.y < 422)
						{
							if (SD == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SD = 1;
									clearrectangle(585, 360, 640, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(585, 360, &seat1);
								}
							}
							else if (SD == 1)
							{
								SD = 0;
								clearrectangle(585, 360, 640, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(585, 360, &seat0);
							}
						}
						if (m.x > 640 && m.y > 360 && m.x < 695 && m.y < 422)
						{
							if (SE == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SE = 1;
									clearrectangle(640, 360, 695, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(640, 360, &seat1);
								}
							}
							else if (SE == 1)
							{
								SE = 0;
								clearrectangle(640, 360, 695, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(640, 360, &seat0);
							}
						}
						if (m.x > 695 && m.y > 360 && m.x < 750 && m.y < 422)
						{
							if (SG == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SG = 1;
									clearrectangle(695, 360, 750, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(695, 360, &seat1);
								}
							}
							else if (SG == 1)
							{
								SG = 0;
								clearrectangle(695, 360, 750, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(695, 360, &seat0);
							}
						}
						if (m.x > 750 && m.y > 360 && m.x < 805 && m.y < 422)
						{
							if (SH == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SH = 1;
									clearrectangle(750, 360, 805, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(750, 360, &seat1);
								}
							}
							else if (SH == 1)
							{
								SH = 0;
								clearrectangle(750, 360, 805, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(750, 360, &seat0);
							}
						}
						if (m.x > 850 && m.y > 360 && m.x < 905 && m.y < 422)
						{
							if (SJ == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SJ = 1;
									clearrectangle(850, 360, 905, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(850, 360, &seat1);
								}
							}
							else if (SJ == 1)
							{
								SJ = 0;
								clearrectangle(850, 360, 905, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(850, 360, &seat0);
							}
						}
						if (m.x > 905 && m.y > 360 && m.x < 960 && m.y < 422)
						{
							if (SK == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SK = 1;
									clearrectangle(905, 360, 960, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(905, 360, &seat1);
								}
							}
							else if (SK == 1)
							{
								SK = 0;
								clearrectangle(905, 360, 960, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(905, 360, &seat0);
							}
						}
						if (m.x > 960 && m.y > 360 && m.x < 1015 && m.y < 422)
						{
							if (SL == 0)
							{
								if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL < 2)
								{
									SL = 1;
									clearrectangle(960, 360, 1015, 422);
									loadimage(&seat1, _T(".\\IMAGES\\ChosenSeat.png"), 0, 0);
									putimage(960, 360, &seat1);
								}
							}
							else if (SL == 1)
							{
								SL = 0;
								clearrectangle(960, 360, 1015, 422);
								loadimage(&seat0, _T(".\\IMAGES\\Seat.png"), 0, 0);
								putimage(960, 360, &seat0);
							}
						}
						if (m.x > 422 && m.y > 589 && m.x < 498 && m.y < 628)//��갴��ѡ��ȷ������
						{
							if (SA + SB + SC + SD + SE + SG + SH + SJ + SK + SL == 0)
							{
								//û��ѡ����λ���޷�Ӧ
							}
							else
								break;
						}
						if (m.x > 703 && m.y > 589 && m.x < 782 && m.y < 628)//��갴��ȡ������
							return 18;
					}
				}
			}
		}
	}
	int Sflag[10] = { SA, SB, SC, SD, SE, SG, SH, SJ, SK, SL };
	int Pflag[5] = { flag1,flag2,flag3,flag4,flag5 };
	if (flag1 + flag2 + flag3 + flag4 + flag5 == 1)
	{
		int x, y;
		for (x = 0; x < 5; x++)
		{
			if (Pflag[x] == 1)
				break;
		}
		for (y = 0; y < 10; y++)
		{
			if (Sflag[y] == 1)
			{
				break;
			}
		}
		if (size == 1)
		{
			if (F == 1)
			{
				for (int m = 0; m < 2; m++)
				{
					if (DATA[flyday - 1][flynumber].Seat[m][y] == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][y] = users[i].p[x];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						return 30;
					}
				}
			}
			else
			{
				for (int m = 2; m < 32; m++)
				{
					if (DATA[flyday - 1][flynumber].Seat[m][y] == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][y] = users[i].p[x];
						DATA[flyday - 1][flynumber].EconomyClassTicketRemain -= 1;
						return 30;
					}
				}
			}
		}
		if (size == 2)
		{
			if (F == 1)
			{
				for (int m = 0; m < 3; m++)
				{
					if (DATA[flyday - 1][flynumber].Seat[m][y] == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][y] = users[i].p[x];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						return 30;
					}
				}
			}
			else if (B == 1)
			{
				for (int m = 3; m < 9; m++)
				{
					if (DATA[flyday - 1][flynumber].Seat[m][y] == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][y] = users[i].p[x];
						DATA[flyday - 1][flynumber].BusinessClassTicketRemain -= 1;
						return 30;
					}
				}
			}
			else
			{
				for (int m = 9; m < 49; m++)
				{
					if (DATA[flyday - 1][flynumber].Seat[m][y] == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][y] = users[i].p[x];
						DATA[flyday - 1][flynumber].EconomyClassTicketRemain -= 1;
						return 30;
					}
				}
			}
		}
	}
	if (flag1 + flag2 + flag3 + flag4 + flag5 == 2)
	{
		int passenger[2] = { 0 };
		int x = 0, y = 0, count = 0;
		for (int x = 0; x < 5; x++)
		{
			if (Pflag[x] == 1)
			{
				passenger[count++] = x;
			}
		}
		int cseat[2] = { 0 };
		count = 0;
		for (int y = 0; y < 10; y++)
		{
			if (Sflag[y] == 1)
			{
				cseat[count++] = y;
			}
		}
		if (size == 1)
		{
			if (F == 1)
			{
				for (int m = 0; m < 2; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && (DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0))
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 2;
						return 30;
					}
				}
				int c1 = 0, c2 = 0;
				for (int m = 0; m < 2; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && c1 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c1 = 1;
					}
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0) && c2 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c2 = 1;
					}
					if (c1 == 1 && c2 == 1)
						return 30;
				}
				return 31;
			}
			else
			{
				for (int m = 2; m < 32; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && (DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0))
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 2;
						return 30;
					}
				}
				int c1 = 0, c2 = 0;
				for (int m = 2; m < 32; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && c1 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c1 = 1;
					}
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0) && c2 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c2 = 1;
					}
					if (c1 == 1 && c2 == 1)
						return 30;
				}
				return 31;
			}
		}
		else
		{
			if (F == 1)
			{
				for (int m = 0; m < 3; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && (DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0))
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 2;
						return 30;
					}
				}
				int c1 = 0, c2 = 0;
				for (int m = 0; m < 3; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && c1 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c1 = 1;
					}
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0) && c2 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c2 = 1;
					}
					if (c1 == 1 && c2 == 1)
						return 30;
				}
				return 31;
			}
			else if (B == 1)
			{
				for (int m = 3; m < 9; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && (DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0))
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 2;
						return 30;
					}
				}
				int c1 = 0, c2 = 0;
				for (int m = 3; m < 9; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && c1 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c1 = 1;
					}
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0) && c2 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c2 = 1;
					}
					if (c1 == 1 && c2 == 1)
						return 30;
				}
				return 31;
			}
			else
			{
				for (int m = 9; m < 49; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && (DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0))
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 2;
						return 30;
					}
				}
				int c1 = 0, c2 = 0;
				for (int m = 9; m < 49; m++)
				{
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[0]] == 0) && c1 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[0]] = users[i].p[passenger[0]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c1 = 1;
					}
					if ((DATA[flyday - 1][flynumber].Seat[m][cseat[1]] == 0) && c2 == 0)
					{
						DATA[flyday - 1][flynumber].Seat[m][cseat[1]] = users[i].p[passenger[1]];
						DATA[flyday - 1][flynumber].FirstClassTicketRemain -= 1;
						c2 = 1;
					}
					if (c1 == 1 && c2 == 1)
						return 30;
				}
				return 31;
			}
		}
	}
}
int Refunding(FlightTicket DATA[366][999], FlyhistoryAndOrder* FO, int n)//��Ʊ
{
	int m = FO->flyday[n]-1, x = FO->flight[n], j = FO->seat_x[n], k = FO->seat_y[n];
	char c = FO->Class[n];
	DATA[m][x].Seat[j][k] = 0;
	if (c == 'f')
		DATA[m][x].FirstClassTicketRemain += 1;
	else if (c == 'b')
		DATA[m][x].BusinessClassTicketRemain += 1;
	else
		DATA[m][x].EconomyClassTicketRemain += 1;
	return 1;
}
void GetIMEString(HWND hWnd, string& str)
{
	HIMC hIMC = ImmGetContext(hWnd);//��ȡHIMC 
	if (hIMC)
	{
		static bool flag = false;//������ɱ�ǣ���������ʱ��IME����ַ�����Ϊ�գ���true��������ɺ�IME����ַ���Ϊ�գ���false 
		DWORD dwSize = ImmGetCompositionStringW(hIMC, GCS_COMPSTR, NULL, 0); //��ȡIME���������ַ����ĳ��� 
		if (dwSize > 0)//���IME����ַ�����Ϊ�գ���û�д��󣨴�ʱdwSizeΪ��ֵ��������������ɱ��Ϊtrue 
		{
			if (flag == false)
			{
				flag = true;
			}
		}
		else if (dwSize == 0 && flag) //���IME����ַ���Ϊ�գ����ұ��Ϊtrue�����ȡIME����ַ��� 
		{
			int iSize; //IME����ַ����Ĵ�С 
			LPSTR pszMultiByte = NULL;//IME����ַ���ָ�� 
			int ChineseSimpleAcp = 936;//���ֽ�ת��ʱ���ĵı��� 
			WCHAR* lpWideStr = NULL;//���ֽ��ַ����� 
			dwSize = ImmGetCompositionStringW(hIMC, GCS_RESULTSTR, NULL, 0);//��ȡIME����ַ����Ĵ�С 
			if (dwSize > 0) //���IME����ַ�����Ϊ�գ���û�д��� 
			{
				dwSize += sizeof(WCHAR);//��СҪ����NULL������ 
				//Ϊ��ȡIME����ַ�������ռ� 
				if (lpWideStr)
				{
					delete[]lpWideStr;
					lpWideStr = NULL;
				}
				lpWideStr = new WCHAR[dwSize];
				memset(lpWideStr, 0, dwSize); //��ս���ռ� 
				ImmGetCompositionStringW(hIMC, GCS_RESULTSTR, lpWideStr, dwSize);//��ȡIME����ַ����������ȡ���ǿ��ֽ� 
				iSize = WideCharToMultiByte(ChineseSimpleAcp, 0, lpWideStr, -1, NULL, 0, NULL, NULL);//���㽫IME����ַ���ת��ΪASCII��׼�ֽں�Ĵ�С 
				//Ϊת������ռ� 
				if (pszMultiByte)
				{
					delete[] pszMultiByte;
					pszMultiByte = NULL;
				}
				pszMultiByte = new char[iSize + 1];
				WideCharToMultiByte(ChineseSimpleAcp, 0, lpWideStr, -1, pszMultiByte, iSize, NULL, NULL);//���ֽ�ת�� 
				pszMultiByte[iSize] = '\0';
				str += pszMultiByte;//��ӵ�string�� 
				//�ͷſռ� 
				if (lpWideStr)
				{
					delete[]lpWideStr;
					lpWideStr = NULL;
				}
				if (pszMultiByte)
				{
					delete[] pszMultiByte;
					pszMultiByte = NULL;
				}
			}
			flag = false;
		}
		ImmReleaseContext(hWnd, hIMC);//�ͷ�HIMC 
	}
}
void C_inputCbox(char* Input, int x, int y, int Lsize, int Hsize)
{
	fflush(stdin);//��������뻺��
	settextstyle(20, 0, "����");
	setlinecolor(BLACK);
	HWND hWnd = GetHWnd();
	string str;
	// ��ʱ
	while (true)
	{
		if (_kbhit()) //�����ASCII���� 
		{
			char c = _getch();
			if (c == '\b')
			{
				if (str.length() >=0)
				{
					if (str.at(str.length() - 1) & 0x8000)
						str.erase(str.end() - 1);
					str.erase(str.end() - 1);
				}
			}
			else if (c == 27) {}
			else
			{
				str += c;
			}
			if (c == 13)
				break;
		}
		else //����֮�⣬����Ƿ���IME���룬����У�����������ӵ�string�� 
		{
			GetIMEString(hWnd, str);
		}
		Sleep(30);
		clearrectangle(x, y, 1280, y+Hsize);
		for (int i = x; i < x + Lsize; i++)
		{
			line(i, y + Hsize + 2, i + 1, y + Hsize + 2);
		}
		outtextxy(x, y, str.c_str());
	}
	strcpy(Input, str.c_str());
}
void  PicChoose(The_users* users, int id)
{
	clearrectangle(300, 170, 1280, 720);//��ʼǰ����ʾ�������
	IMAGE IM1, IM2, IM3, IM4, IM5, IM6, IM7, IM8, IM9, IM10, IM11, IM12, IM13, IM14, IM15;
	IMAGE Sbox, SboxA;
	IMAGE confirm, cancel;
	loadimage(&IM1, ".\\IMAGES\\picture\\P1.jpg", 130, 130);
	loadimage(&IM2, ".\\IMAGES\\picture\\P2.jpg", 130, 130);
	loadimage(&IM3, ".\\IMAGES\\picture\\P3.jpg", 130, 130);
	loadimage(&IM4, ".\\IMAGES\\picture\\P4.jpg", 130, 130);
	loadimage(&IM5, ".\\IMAGES\\picture\\P5.jpg", 130, 130);
	loadimage(&IM6, ".\\IMAGES\\picture\\P6.jpg", 130, 130);
	loadimage(&IM7, ".\\IMAGES\\picture\\P7.jpg", 130, 130);
	loadimage(&IM8, ".\\IMAGES\\picture\\P8.jpg", 130, 130);
	loadimage(&IM9, ".\\IMAGES\\picture\\P9.jpg", 130, 130);
	loadimage(&IM10, ".\\IMAGES\\picture\\P10.jpg", 130, 130);
	loadimage(&IM11, ".\\IMAGES\\picture\\P11.jpg", 130, 130);
	loadimage(&IM12, ".\\IMAGES\\picture\\P12.jpg", 130, 130);
	loadimage(&IM13, ".\\IMAGES\\picture\\P13.jpg", 130, 130);
	loadimage(&IM14, ".\\IMAGES\\picture\\P14.jpg", 130, 130);
	loadimage(&IM15, ".\\IMAGES\\picture\\P15.jpg", 130, 130);
	loadimage(&Sbox, ".\\IMAGES\\SelectBox.png", 30, 30);
	loadimage(&SboxA, ".\\IMAGES\\SelectBoxActive.png", 30, 30);
	loadimage(&confirm, _T(".\\IMAGES\\choose.png"), 90, 40);
	loadimage(&cancel, _T(".\\IMAGES\\cancel.png"), 90, 40);
	putimage(350, 160, &IM1);
	putimage(540, 160, &IM2);
	putimage(730, 160, &IM3);
	putimage(920, 160, &IM4);
	putimage(1110, 160, &IM5);
	putimage(350, 325, &IM6);
	putimage(540, 325, &IM7);
	putimage(730, 325, &IM8);
	putimage(920, 325, &IM9);
	putimage(1110, 325, &IM10);
	putimage(350, 490, &IM11);
	putimage(540, 490, &IM12);
	putimage(730, 490, &IM13);
	putimage(920, 490, &IM14);
	putimage(1110, 490, &IM15);
	//ѡ��
	putimage(405, 295, &Sbox);
	putimage(595, 295, &Sbox);
	putimage(785, 295, &Sbox);
	putimage(975, 295, &Sbox);
	putimage(1165, 295, &Sbox);
	putimage(405, 460, &Sbox);
	putimage(595, 460, &Sbox);
	putimage(785, 460, &Sbox);
	putimage(975, 460, &Sbox);
	putimage(1165, 460, &Sbox);
	putimage(405, 625, &Sbox);
	putimage(595, 625, &Sbox);
	putimage(785, 625, &Sbox);
	putimage(975, 625, &Sbox);
	putimage(1165, 625, &Sbox);
	//ȷ��ȡ��ѡ��
	putimage(430, 660, &confirm);
	putimage(985, 660, &cancel);
	int flag[15] = { 0 };
	while (true)
	{
		flushMouseMsgBuffer();
		MOUSEMSG m;
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			int x = 0; int y = 0;
			for (x = 0; x < 5; x++)
			{
				for (y = 0; y < 3; y++)
				{
					if (m.x > 405 + x * 190 && m.y > 295 + y * 165 && m.x < 435 + x * 190 && m.y < 325 + y * 165)
					{
						if (flag[x + 5 * y] == 0)
						{
							int count = 0;
							for (int i = 0; i < 15; i++)
							{
								count += flag[i];
							}
							if (count == 0)
							{
								flag[x + 5 * y] = 1;
								clearrectangle(405 + x * 190, 295 + y * 165, 435 + x * 190, 325 + y * 165);
								putimage(405 + x * 190, 295 + y * 165, &SboxA);
							}
						}
						else if (flag[x + 5 * y] == 1)
						{
							flag[x+ 5 * y] = 0;
							clearrectangle(405 + x * 190, 295 + y * 165, 435 + x * 190, 325 + y * 165);
							putimage(405 + x * 190, 295 + y * 165, &Sbox);
						}
					}
				}
			}
			for (x = 0; x < 5; x++)
			{
				for (y = 0; y < 3; y++)
				{
					if (m.x > 350 + x * 190 && m.y > 160 + y * 165 && m.x < 480 + x * 190 && m.y < 290 + y * 165)
					{
						clearrectangle(350, 160, 1240, 660);
						IMAGE BigOne;
						int i = x + y * 5 + 1;
						MatchPic(i, BigOne,500);
						putimage(525, 145, &BigOne);
						clearrectangle(430, 660, 520, 700);
					}
				}
			}
			if (m.x > 430 && m.y > 660 && m.x < 520 && m.y < 700)//����ȷ��
			{
				int count = 0;
				for (int i = 0; i < 15; i++)
				{
					count += flag[i];
				}
				if (count == 0)
				{
					//�޷�Ӧ
				}
				else
				{
					int i = 0;
					for (i = 0; i < 15; i++)
					{
						if (flag[i] == 1)
							break;
					}
					users[id].pic = i + 1;
					return;
				}
			}
			if (m.x > 985 && m.y > 660 && m.x < 1075 && m.y < 700)//����ȡ��
			{
				return;
			}
		}
	}
}
void flushMouseMsgBuffer()
{
	MOUSEMSG m;
	m = GetMouseMsg();
	m.x = 0;
	m.y = 0;
}