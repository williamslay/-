#include"Print.h"
//���ض���1280*720
void PrintLoading()
{
	IMAGE Loading;
	char Location[50];
	char IntChange[4];
	cleardevice();
	settextstyle(25, 0, FONT2_ZH);
	setbkcolor(RGB(255, 255, 255));
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Loading\\loading");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Loading, Location, 800, 600);
		putimage(240, 60, &Loading);
		if (i < 60)
			outtextxy(610, 550, "��ã�");
		else
			outtextxy(480, 550, "��ӭ���ʹ���Ա��̨����ϵͳ");
		Sleep(8);
	}
	cleardevice();
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Loading\\loading");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Loading, Location, 800, 600);
		putimage(240, 60, &Loading);
		outtextxy(460, 550, "��Ȩ����");
		outtextxy(570, 550, "CopyRight 2020 HuaCL");
		Sleep(8);
	}
	cleardevice();
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Loading\\loading");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Loading, Location, 800, 600);
		putimage(240, 60, &Loading);
		if ((i / 20) % 5 == 0)
			outtextxy(470, 550, "���ڼ���ϵͳ�����ݣ����Ժ�");
		if ((i / 20) % 5 == 1)
			outtextxy(468, 550, "���ڼ���ϵͳ�����ݣ����Ժ�.");
		if ((i / 20) % 5 == 2)
			outtextxy(466, 550, "���ڼ���ϵͳ�����ݣ����Ժ�..");
		if ((i / 20) % 5 == 3)
			outtextxy(464, 550, "���ڼ���ϵͳ�����ݣ����Ժ�...");
		if ((i / 20) % 5 == 4)
			outtextxy(462, 550, "���ڼ���ϵͳ�����ݣ����Ժ�....");
		Sleep(8);
	}
	settextstyle(25, 0, FONT);
}
//�˳������Ҳ��Զ�����1280*720����
void C_PrintLoading()
{
	IMAGE Loading;
	char Location[50];
	char IntChange[4];
	cleardevice();
	settextstyle(25, 0, FONT2_ZH);
	setbkcolor(RGB(255, 255, 255));
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Loading\\loading");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Loading, Location, 800, 600);
		putimage(240, 60, &Loading);
		if (i < 60)
			outtextxy(610, 550, "��ã�");
		else
			outtextxy(550, 550, "��ӭ���ʶ�Ʊϵͳ");
		Sleep(8);
	}
	cleardevice();
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Loading\\loading");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Loading, Location, 800, 600);
		putimage(240, 60, &Loading);
		outtextxy(460, 550, "��Ȩ����");
		outtextxy(570, 550, "CopyRight 2020 WillLay");
		Sleep(8);
	}
	cleardevice();
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Loading\\loading");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Loading, Location, 800, 600);
		putimage(240, 60, &Loading);
		if ((i / 20) % 5 == 0)
			outtextxy(470, 550, "���ڼ���ϵͳ�����ݣ����Ժ�");
		if ((i / 20) % 5 == 1)
			outtextxy(468, 550, "���ڼ���ϵͳ�����ݣ����Ժ�.");
		if ((i / 20) % 5 == 2)
			outtextxy(466, 550, "���ڼ���ϵͳ�����ݣ����Ժ�..");
		if ((i / 20) % 5 == 3)
			outtextxy(464, 550, "���ڼ���ϵͳ�����ݣ����Ժ�...");
		if ((i / 20) % 5 == 4)
			outtextxy(462, 550, "���ڼ���ϵͳ�����ݣ����Ժ�....");
		Sleep(8);
	}
	settextstyle(25, 0, FONT);
}
void PrintExit()
{
	IMAGE Exit;
	char Location[100];
	char IntChange[8];
	cleardevice();
	settextstyle(25, 0, FONT2_ZH);
	setbkcolor(RGB(255, 255, 255));
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Exit\\Exit");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Exit, Location, 800, 600);
		putimage(240, 60, &Exit);
		outtextxy(590, 550, "�����˳�");
		Sleep(8);
	}
	return;
}
//�˳��������Զ�����1280*720����
void PrintExit_AutoSAVE(FlightID* ID, FlightTicket DATA[][999], int IDcount)
{
	IMAGE Exit;
	char Location[100];
	char IntChange[8];
	cleardevice();
	settextstyle(25, 0, FONT2_ZH);
	setbkcolor(RGB(255, 255, 255));
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Exit\\Exit");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Exit, Location, 800, 600);
		putimage(240, 60, &Exit);
		outtextxy(480, 550, "�����˳�����Ա��̨����ϵͳ");
		Sleep(8);
	}
	cleardevice();
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Exit\\Exit");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Exit, Location, 800, 600);
		putimage(240, 60, &Exit);
		outtextxy(460, 550, "��Ȩ����");
		settextstyle(25, 0, FONT2_EN);
		outtextxy(570, 550, "CopyRight 2020 HuaCL");
		settextstyle(25, 0, FONT2_ZH);
		Sleep(8);
	}
	cleardevice();
	for (int i = 0; i < 156; i++)
	{
		strcpy(Location, ".\\IMAGES\\Exit\\Exit");
		_stprintf(IntChange, _T("%03d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Exit, Location, 800, 600);
		putimage(240, 60, &Exit);
		if ((i / 20) % 5 == 0)
			outtextxy(480, 550, "�����Զ��������ݣ����Ժ�");
		if ((i / 20) % 5 == 1)
			outtextxy(478, 550, "�����Զ��������ݣ����Ժ�.");
		if ((i / 20) % 5 == 2)
			outtextxy(476, 550, "�����Զ��������ݣ����Ժ�..");
		if ((i / 20) % 5 == 3)
			outtextxy(474, 550, "�����Զ��������ݣ����Ժ�...");
		if ((i / 20) % 5 == 4)
			outtextxy(472, 550, "�����Զ��������ݣ����Ժ�....");
		Sleep(8);
	}
	time_t NOW;									//��ȡ��ǰʱ��
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	strcpy(Location, ".\\Data\\AutoSAVE_FlightID_");
	_stprintf(IntChange, _T("%4d"), Local->tm_year + 1900);
	strcat(Location, IntChange);
	_stprintf(IntChange, _T("%02d"), Local->tm_mon + 1);
	strcat(Location, IntChange);
	_stprintf(IntChange, _T("%02d"), Local->tm_mday);
	strcat(Location, IntChange);
	strcat(Location, ".txt");
	SaveFlightDatabase(ID, IDcount, Location);
	strcpy(Location, ".\\Data\\AutoSAVE_Ticket_");
	_stprintf(IntChange, _T("%4d"), Local->tm_year + 1900);
	strcat(Location, IntChange);
	_stprintf(IntChange, _T("%02d"), Local->tm_mon + 1);
	strcat(Location, IntChange);
	_stprintf(IntChange, _T("%02d"), Local->tm_mday);
	strcat(Location, IntChange);
	strcat(Location, ".dat");
	SaveTicketDatabase(DATA, IDcount, Location);
	return;
}
//�����ж���
void PrintProcess()
{
	IMAGE BG;
	IMAGE Process;
	char Location[100];
	char IntChange[8];
	setbkcolor(RGB(255, 255, 255));
	strcpy(Location, ".\\IMAGES\\Process\\Search4.png");
	loadimage(&BG, Location, 1280, 720);
	putimage(0, 0, &BG);
	for (int i = 0; i < 53; i++)
	{
		strcpy(Location, ".\\IMAGES\\Process\\Process");
		_stprintf(IntChange, _T("%02d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".png");
		loadimage(&Process, Location, 200, 200);
		putimage(540, 260, &Process);
		Sleep(12);
	}
	return;
}
//��ӡ�������ߵ���ϸ��Ϣ:��ҳ�������������飬��Ҫ��ӡ����������±꣩
void PrintFlightDetail(FlightID* ID, FlightTicket DATA[][999], int IDcount, int i)
{
	clearrectangle(380, 200, 1220, 720);
	IMAGE plane;
	IMAGE FlightDetail;
	LOGFONT format;
	loadimage(&FlightDetail, _T(".\\IMAGES\\FlightDetail.png"), 680, 40);
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 25;						// ��������߶�Ϊ 25
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	settextstyle(20, 0, FONT);
	char carrier[20];
	char AircraftType[50];
	char DepartureAirport[50];
	char ArrivalAirport[50];
	char Flyday[50];
	MatchCarrier(ID[i].Carrier, carrier);
	MatchPlaneImage(plane, ID[i].AircraftType);
	MatchPlaneType(ID[i].AircraftType, AircraftType);
	MatchAirport(ID[i].DepartureAirport, DepartureAirport);
	MatchAirport(ID[i].ArrivalAirport, ArrivalAirport);
	MatchFlyDay(ID[i].FlyDay, Flyday);
	putimage(1280 - 60 - 240, 200, &plane);						//�ɻ�ͼƬ
	char IntChange[8];
	//��Ϣ�����25pxΪ�о�
	outtextxy(380, 200, "����ţ�");
	outtextxy(520, 200, ID[i].Carrier);
	outtextxy(540, 200, ID[i].ID);
	outtextxy(380, 225, "ִ�ɺ�˾��");
	outtextxy(520, 225, carrier);
	//��ʾ�������ڵĵ�ɫ��ǳ��ɫ��
	settextcolor(RGB(220, 220, 220));
	outtextxy(520, 250, "һ  ��  ��  ��  ��  ��  ��");
	//�ָ�ԭ����ɫ
	settextcolor(BLACK);
	outtextxy(380, 250, "�������ڣ�");
	outtextxy(520, 250, Flyday);
	outtextxy(380, 275, "��׼Ʊ�ۣ�");
	outtextxy(520, 275, _itoa(ID[i].Price, IntChange, 10));
	outtextxy(380, 300, "��λ��");
	outtextxy(520, 300, ID[i].Class);
	outtextxy(380, 325, "���ͣ�");
	outtextxy(520, 325, AircraftType);							//�ɻ��ͺ�
	//������Ϣչʾ
	outtextxy(380, 400, "�𽵻�����");
	outtextxy(380, 425, "IATA���룺");
	outtextxy(380, 450, "��ʱ�䣺");
	outtextxy(520, 400, DepartureAirport);
	outtextxy(520, 425, ID[i].DepartureAirport);
	_stprintf(IntChange, _T("%04d"), ID[i].DepartureTime);
	outtextxy(520, 450, IntChange);
	outtextxy(580, 450, "Ԥ��");
	//���߷ɻ�����С����
	setlinecolor(RGB(255, 255, 253));
	setfillcolor(RGB(255, 255, 253));
	int timer = 0;
	putimage(480, 360, &FlightDetail);							//����ʾ��ͼ
	for (int i = 520; i < 1120; i += 3)
	{
		putimage(480, 360, &FlightDetail);						//����ʾ��ͼ
		fillrectangle(i, 360, 1280, 400);
		Sleep((int)((timer - 300) * (timer - 300) / 10000));
		timer += 3;
	}
	putimage(480, 360, &FlightDetail);								//����ʾ��ͼ
	//С�������˽���
	outtextxy(1020, 400, ArrivalAirport);
	outtextxy(1020, 425, ID[i].ArrivalAirport);
	_stprintf(IntChange, _T("%04d"), ID[i].ArrivalTime);
	outtextxy(1020, 450, IntChange);
	outtextxy(1080, 450, "Ԥ��");
	//����ʱ��
	outtextxy(790, 420, "����ʱ��");
	_stprintf(IntChange, _T("%2d"), ID[i].TravelTimeHour);
	outtextxy(770, 440, IntChange);
	outtextxy(790, 440, "Сʱ");
	_stprintf(IntChange, _T("%2d"), ID[i].TravelTimeMinute);
	outtextxy(835, 440, IntChange);
	outtextxy(860, 440, "����");
	return;
}
//��ӡ�������ߣ������������飬��Ҫ��ӡ����������±꣩
int PrintSingleFlight(FlightID* ID, FlightTicket DATA[][999], int IDcount, int i)
{
	cleardevice();
	IMAGE BG;
	IMAGE TimeAccuracy;
	loadimage(&BG, _T(".\\IMAGES\\Search.png"), 1280, 720);
	loadimage(&TimeAccuracy, _T(".\\IMAGES\\TimeAccuracy.png"), 200, 40);
	putimage(0, 0, &BG);						//��ʾ����
	putimage(100, 550, &TimeAccuracy);			//��ѯ�����ͼƬ
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 25;						// ��������߶�Ϊ 25
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	char count[8];
	_stprintf(count, _T("%d"), IDcount);
	outtextxy(110, 200, "��ǰ���ݿ�����");
	outtextxy(110, 230, count);
	outtextxy(162, 230, "����������");
	settextstyle(20, 0, FONT);
	outtextxy(380, 170, "���ҵ�һ������");
	PrintFlightDetail(ID, DATA, IDcount, i);
	PrintTimeAccuracyBar(ID, DATA, i);
	int MENUchoice = AdminMENU_SearchMENU_SingleFlight_MENUChoose();
	while (true)
	{
		switch (MENUchoice)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 11:
		case 12:
		case 13:
		case 14:
			return MENUchoice;
		case 17:
			MENUchoice = PrintTicket(ID, DATA, i);
			break;
		case 18:
			return PrintSingleFlight(ID, DATA, IDcount, i);
		}
	}
}
//��ҳ��ӡ������ߣ������������飬�������ݼ���������������飬�������������
int PrintMultiFlight(FlightID* ID, FlightTicket DATA[][999], int IDcount, int* SearchReasult, int SearchCount)//���ز˵�ѡ��
{
	cleardevice();
	IMAGE BG;
	IMAGE PageChoiceImage;
	loadimage(&BG, _T(".\\IMAGES\\Search.png"), 1280, 720);
	loadimage(&PageChoiceImage, _T(".\\IMAGES\\PageChoice.png"), 150, 30);
	putimage(0, 0, &BG);									//��ʾ����
	putimage(1280 - 60 - 150, 165, &PageChoiceImage);		//����ҳͼƬ
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 25;						// ��������߶�Ϊ 25
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	char count[8];
	_stprintf(count, _T("%d"), IDcount);
	outtextxy(110, 200, "��ǰ���ݿ�����");
	outtextxy(110, 230, count);
	outtextxy(162, 230, "����������");
	settextstyle(20, 0, FONT);
	char IntChange[8];
	int Page = (SearchCount - 1) / 15 + 1;
	int CurrentPage = 1;
	outtextxy(380, 170, "���ҵ�");
	_stprintf(IntChange, _T("%d"), SearchCount);
	outtextxy(450, 170, IntChange);
	outtextxy(485, 170, "������");
	PrintFlightTitle();
	PrintMultiFlightPage(ID, DATA, IDcount, SearchReasult, SearchCount, CurrentPage, Page);
	int MENUchoice = AdminMENU_SearchMENU_MultiFlight_MENUChoose();
	while (true)
	{
		switch (MENUchoice)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 11:
		case 12:
		case 13:
		case 14:
			return MENUchoice;
		case 15:					//��һҳ
			if (CurrentPage == 1)
				PrintMultiFlightPage(ID, DATA, IDcount, SearchReasult, SearchCount, CurrentPage, Page);
			else
			{
				CurrentPage--;
				PrintMultiFlightPage(ID, DATA, IDcount, SearchReasult, SearchCount, CurrentPage, Page);
			}
			MENUchoice = AdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		case 16:					//��һҳ
			if (CurrentPage == Page)
				PrintMultiFlightPage(ID, DATA, IDcount, SearchReasult, SearchCount, CurrentPage, Page);
			else
			{
				CurrentPage++;
				PrintMultiFlightPage(ID, DATA, IDcount, SearchReasult, SearchCount, CurrentPage, Page);
			}
			MENUchoice = AdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		case 18:					//�����˷��ؼ���Ҳ���ǻ���ʾ��һ�εĽ���
			clearrectangle(1070, 165, 1220, 200);	//��ʼǰ�ѷ����������
			clearrectangle(380, 200, 1220, 720);	//��ʼǰ����ʾ�������
			PrintFlightTitle();
			PrintMultiFlightPage(ID, DATA, IDcount, SearchReasult, SearchCount, CurrentPage, Page);
			MENUchoice = AdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		case 19:					//�����ʱ������
			int SortReasult[999];												//���ڴ洢������˳�������Ͳ������ԭ�еĽṹ������˳�򣬲�Ӱ���±���ʡ�
			SortByDepartureTime(ID, SearchReasult, SearchCount, SortReasult);	//ð�����򷨰���ʱ������������������ע��˺���������
			return PrintMultiFlight(ID, DATA, IDcount, SortReasult, SearchCount);
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:						//��ת������ҳ��
			//�����жϸ�ҳ�ĺ�������
			int Count = (CurrentPage - 1) * 15;//count��ʾ֮ǰҳ���ܼƵĺ�����������ҳ����Ӧ�ô�count+1���±꿪ʼ
			if ((MENUchoice % 100 + Count) <= SearchCount)
			{
				cleardevice();
				IMAGE Back;
				IMAGE TimeAccuracy;
				loadimage(&TimeAccuracy, _T(".\\IMAGES\\TimeAccuracy.png"), 200, 40);
				loadimage(&Back, _T(".\\IMAGES\\Back.png"), 30, 30);
				putimage(0, 0, &BG);										//��ʾ����
				putimage(1280 - 60 - 30, 165, &Back);						//���ؼ�ͼƬ
				putimage(100, 550, &TimeAccuracy);							//��ѯ�����ͼƬ
				settextstyle(25, 0, FONT);
				outtextxy(110, 200, "��ǰ���ݿ�����");
				outtextxy(110, 230, count);
				outtextxy(162, 230, "����������");
				settextstyle(20, 0, FONT);
				outtextxy(380, 170, "���ҵ�");
				outtextxy(450, 170, IntChange);
				outtextxy(485, 170, "������");
				PrintFlightDetail(ID, DATA, IDcount, SearchReasult[MENUchoice % 100 + Count - 1]);
				PrintTimeAccuracyBar(ID, DATA, SearchReasult[MENUchoice % 100 + Count - 1]);
				int MenuCloice;
				MenuCloice = AdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose();
				if (MenuCloice == 17)
				{
					MenuCloice = PrintTicket(ID, DATA, SearchReasult[MENUchoice % 100 + Count - 1]);
					if (MenuCloice == 18)
						break;
				}
				MENUchoice = MenuCloice;
			}
			else
				MENUchoice = AdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		}
	}
}
//��ҳ��ӡʱ�ı���ͷ����
void PrintFlightTitle()
{
	outtextxy(380, 200, "�����");
	outtextxy(460, 200, "���ʱ��");
	outtextxy(620, 200, "��ɻ���");
	outtextxy(820, 200, "�������");
	outtextxy(980, 200, "����ʱ��");
	outtextxy(1080, 200, "����");
	outtextxy(1140, 200, "����ʱ��");
	return;
}
//��ҳ��ӡʱ�Ĵ�ӡһҳ�������ݣ������������飬�������ݼ���������������飬���������������ǰҳ������ҳ����
void PrintMultiFlightPage(FlightID* ID, FlightTicket DATA[][999], int IDcount, int* SearchReasult, int SearchCount, int CurrentPage, int Page)//page��ʾ��ǰ��ʾ�ڼ�ҳ
{
	cleardevice();
	IMAGE BG;
	IMAGE PageChoiceImage;
	loadimage(&BG, _T(".\\IMAGES\\Search.png"), 1280, 720);
	loadimage(&PageChoiceImage, _T(".\\IMAGES\\PageChoice.png"), 150, 30);
	putimage(0, 0, &BG);	// ����һ��λ���ٴ���ʾ����
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 25;						// ��������߶�Ϊ 25
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	char count[8];
	_stprintf(count, _T("%d"), IDcount);
	outtextxy(110, 200, "��ǰ���ݿ�����");
	outtextxy(110, 230, count);
	outtextxy(162, 230, "����������");
	settextstyle(20, 0, FONT);
	putimage(1280 - 60 - 150, 165, &PageChoiceImage);						//����ҳͼƬ
	char IntChange[8];
	outtextxy(380, 170, "���ҵ�");
	_stprintf(IntChange, _T("%d"), SearchCount);
	outtextxy(450, 170, IntChange);
	outtextxy(485, 170, "������");
	PrintFlightTitle();
	_stprintf(IntChange, _T("%d"), CurrentPage);
	outtextxy(1280 - 60 - 120, 170, IntChange);
	outtextxy(1280 - 60 - 95, 170, "/");
	_stprintf(IntChange, _T("%d"), Page);
	outtextxy(1280 - 60 - 80, 170, IntChange);
	outtextxy(1280 - 60 - 55, 170, "ҳ");
	int Count = (CurrentPage - 1) * 15;//count��ʾ֮ǰҳ���ܼƵĺ�����������ҳ����Ӧ�ô�count+1���±꿪ʼ
	for (int i = 0; i < 15; i++)//i������������
	{
		if ((i + Count) >= SearchCount)
			break;
		PrintSingleLineFlight(ID, DATA, IDcount, SearchReasult[Count + i], 230 + 30 * i);
	}
	return;
}
//��ӡ�������ߵ���ϸ��Ϣ:һ�У������������飬�������ݼ�������Ҫ��ӡ����������±꣬����:xλ�ã�
void PrintSingleLineFlight(FlightID* ID, FlightTicket DATA[][999], int IDcount, int i, int roll)
{
	char DepartureAirport[50];
	char ArrivalAirport[50];
	char IntChange[5];
	MatchAirport(ID[i].DepartureAirport, DepartureAirport);
	MatchAirport(ID[i].ArrivalAirport, ArrivalAirport);
	outtextxy(390, roll, ID[i].Carrier);
	outtextxy(410, roll, ID[i].ID);
	_stprintf(IntChange, _T("%04d"), ID[i].DepartureTime);
	outtextxy(480, roll, IntChange);
	outtextxy(570, roll, DepartureAirport);
	outtextxy(780, roll, ArrivalAirport);
	_stprintf(IntChange, _T("%04d"), ID[i].ArrivalTime);
	outtextxy(1000, roll, IntChange);
	outtextxy(1090, roll, ID[i].AircraftType);
	_stprintf(IntChange, _T("%2d"), ID[i].TravelTimeHour);
	outtextxy(1150, roll, IntChange);
	outtextxy(1170, roll, "h");
	_stprintf(IntChange, _T("%02d"), ID[i].TravelTimeMinute);
	outtextxy(1180, roll, IntChange);
	outtextxy(1200, roll, "m");
	return;
}
//������ҳ�·���ӡ������������
void PrintTimeAccuracyBar(FlightID* ID, FlightTicket DATA[][999], int n)
{
	clearrectangle(380, 500, 1220, 650);		//��ʼǰ����ʾ�������
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	char IntChange[8];
	time_t NOW;
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	int yday = Local->tm_yday;
	int wday = Local->tm_wday;
	int year = Local->tm_year + 1900;
	if (wday == 0)
		wday = 7;
	int Fly[10] = { -1,-1,-1,-1,-1,-1,-1,-1,-1,-1 };//��ȡ�����10�η���
	for (int i = 0; ; )
	{
		if (yday == -1)//�����һ��Ŀ�ͷ���Ͳ�����ǰ���ˣ�������ֻ���Ǳ�������ݣ�
			break;
		if (ID[n].FlyDay[wday] != '0')
		{
			Fly[i] = yday;
			i++;
		}
		yday--;
		if (wday == 1)//����ǰ�������ղ���������
			wday = 7;
		else
			wday--;
		if (i > 9)
			break;
	}
	outtextxy(410, 500, "����");
	outtextxy(520, 500, "���");
	outtextxy(580, 500, "����");
	outtextxy(680, 500, "״̬");
	outtextxy(830, 500, "����");
	outtextxy(940, 500, "���");
	outtextxy(1000, 500, "����");
	outtextxy(1100, 500, "״̬");
	char Date[20];
	char Accuracy[20];
	COLORREF TextColor;
	for (int i = 0; i < 5; i++)
	{
		if (Fly[i] == -1)
			break;
		MatchDate(year, Fly[i], Date);
		outtextxy(380, 525 + 25 * i, Date);
		_stprintf(IntChange, _T("%04d"), DATA[Fly[i]][n].ActuralDepartureTime);
		outtextxy(520, 525 + 25 * i, IntChange);
		_stprintf(IntChange, _T("%04d"), DATA[Fly[i]][n].ActuralArrivalTime);
		outtextxy(580, 525 + 25 * i, IntChange);
		MatchTimeAccuracy(ID, DATA, n, Fly[i], Accuracy, TextColor);
		settextcolor(TextColor);
		outtextxy(660, 525 + 25 * i, Accuracy);
		settextcolor(BLACK);
	}
	for (int i = 0; i < 5; i++)
	{
		if (Fly[i + 5] == -1)
			break;
		MatchDate(year, Fly[i + 5], Date);
		outtextxy(800, 525 + 25 * i, Date);
		_stprintf(IntChange, _T("%04d"), DATA[Fly[i + 5]][n].ActuralDepartureTime);
		outtextxy(940, 525 + 25 * i, IntChange);
		_stprintf(IntChange, _T("%04d"), DATA[Fly[i + 5]][n].ActuralArrivalTime);
		outtextxy(1000, 525 + 25 * i, IntChange);
		MatchTimeAccuracy(ID, DATA, n, Fly[i + 5], Accuracy, TextColor);
		settextcolor(TextColor);
		outtextxy(1080, 525 + 25 * i, Accuracy);
		settextcolor(BLACK);
	}
}
//��ӡ��Ʊҳ������
void PrintTicketTitle()
{
	outtextxy(90, 200, "����");
	outtextxy(180, 200, "���");
	outtextxy(240, 200, "����");
	outtextxy(320, 200, "״̬");
	outtextxy(405, 200, "ͷ��");
	outtextxy(475, 200, "����");
	outtextxy(555, 200, "����");
	outtextxy(90 + 610, 200, "����");
	outtextxy(180 + 610, 200, "���");
	outtextxy(240 + 610, 200, "����");
	outtextxy(320 + 610, 200, "״̬");
	outtextxy(405 + 610, 200, "ͷ��");
	outtextxy(475 + 610, 200, "����");
	outtextxy(555 + 610, 200, "����");
}
//��ӡÿ�ջ�Ʊ��ϸ��Ϣ
int PrintTicket(FlightID* ID, FlightTicket DATA[][999], int n)
{
	cleardevice();
	IMAGE BG;									//����ͼƬ
	IMAGE PageChoiceImage;
	IMAGE Back;
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	loadimage(&BG, _T(".\\IMAGES\\BackGround.png"), 1280, 720);
	loadimage(&Back, _T(".\\IMAGES\\Back.png"), 30, 30);
	loadimage(&PageChoiceImage, _T(".\\IMAGES\\PageChoice.png"), 150, 30);
	putimage(0, 0, &BG);						// ���±���
	putimage(1280 - 60 - 200, 165, &Back);		//���ؼ�ͼƬ
	putimage(1280 - 60 - 150, 165, &PageChoiceImage);
	outtextxy(60, 170, ID[n].Carrier);
	outtextxy(80, 170, ID[n].ID);
	char IntChange[8];
	outtextxy(160, 170, ID[n].DepartureAirport);
	outtextxy(210, 170, "->");
	outtextxy(235, 170, ID[n].ArrivalAirport);
	outtextxy(310, 170, "ʱ�̱�:");
	_stprintf(IntChange, _T("%04d"), ID[n].DepartureTime);
	outtextxy(390, 170, IntChange);
	outtextxy(440, 170, "->");
	_stprintf(IntChange, _T("%04d"), ID[n].ArrivalTime);
	outtextxy(470, 170, IntChange);
	outtextxy(550, 170, ID[n].AircraftType);
	time_t NOW;									//��ȡ��ǰʱ��
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	int ydayNOW = Local->tm_yday;
	int year = Local->tm_year + 1900;//����������
	int Fly[366] = { 0 };//��ȡ��������
	int FlyDayCountCurrent = 0;//�ӽ��꿪ʼ�����ڵķ�������
	int FlyDayCountAll = 0;//������ܷ�������
	int wday = WeekDayTransfer(year, 1, 1);//��������һ�����ܼ�
	int ydayCount;
	if (year % 4 == 0 && year % 100 != 0)
		ydayCount = 366;
	else
		ydayCount = 365;
	for (int yday = 0; yday < ydayCount; yday++)//������ֻ���Ǳ���ȵ�����
	{
		if (ID[n].FlyDay[wday] != '0')
		{
			Fly[FlyDayCountAll] = yday;
			FlyDayCountAll++;				//����ܷ����ռ�һ
			if (yday <= ydayNOW)
				FlyDayCountCurrent++;		//��ֹ����ķ����ռ�һ
		}
		if (wday == 7)//�����յ���һ�첻��������
			wday = 1;
		else
			wday++;
	}
	int Page = (FlyDayCountAll - 1) / 36 + 1;
	//ΪʲôҪ��һ�أ���������һ������36��
	//Ĭ�ϴӽ��쿪ʼ��ʾ
	int CurrentPage = (FlyDayCountCurrent - 1) / 36 + 1;
	PrintTicketTitle();
	PrintTicketPage(ID, DATA, Fly, n, Page, CurrentPage, FlyDayCountAll);
	int MENUchoice = AdminMENU_Ticket_MENUChoose();
	while (true)
	{
		switch (MENUchoice)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 11:
		case 12:
		case 13:
		case 14:
		case 18:
			return MENUchoice;
		case 15:					//��һҳ
			if (CurrentPage == 1)
				PrintTicketPage(ID, DATA, Fly, n, Page, CurrentPage, FlyDayCountAll);
			else
			{
				CurrentPage--;
				PrintTicketPage(ID, DATA, Fly, n, Page, CurrentPage, FlyDayCountAll);
			}
			MENUchoice = AdminMENU_Ticket_MENUChoose();
			break;
		case 16:					//��һҳ
			if (CurrentPage == Page)
				PrintTicketPage(ID, DATA, Fly, n, Page, CurrentPage, FlyDayCountAll);
			else
			{
				CurrentPage++;
				PrintTicketPage(ID, DATA, Fly, n, Page, CurrentPage, FlyDayCountAll);
			}
			MENUchoice = AdminMENU_Ticket_MENUChoose();
			break;
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:									//�������ʱ��
		{
			char Input[8];
			int i = MENUchoice % 100 - 1;
			int Count = (CurrentPage - 1) * 36 + i;
			if (Count < FlyDayCountAll)
			{
				C_InputBox(Input, 4, 180, 230 + 25 * i, 40, 20, "0000");
				sscanf(Input, "%4d", &DATA[Fly[Count]][n].ActuralDepartureTime);
				PrintTicketPage(ID, DATA, Fly, n, Page, CurrentPage, FlyDayCountAll);
			}
			MENUchoice = AdminMENU_Ticket_MENUChoose();
			break;
		}
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:									//���Ľ���ʱ��
		{
			char Input[8];
			int i = MENUchoice % 100 - 1;
			int Count = (CurrentPage - 1) * 36 + i;
			if (Count < FlyDayCountAll)
			{
				C_InputBox(Input, 4, 240, 230 + 25 * i, 40, 20, "0000");
				sscanf(Input, "%4d", &DATA[Fly[Count]][n].ActuralArrivalTime);
				PrintTicketPage(ID, DATA, Fly, n, Page, CurrentPage, FlyDayCountAll);
			}
			MENUchoice = AdminMENU_Ticket_MENUChoose();
			break;
		}
		case 301:
		case 302:
		case 303:
		case 304:
		case 305:
		case 306:
		case 307:
		case 308:
		case 309:
		case 310:
		case 311:
		case 312:
		case 313:
		case 314:
		case 315:
		case 316:
		case 317:
		case 318:									//�������ʱ��
		{
			char Input[8];
			int i = MENUchoice % 100 - 1;
			int Count = (CurrentPage - 1) * 36 + 18 + i;
			if (Count < FlyDayCountAll)
			{
				C_InputBox(Input, 4, 180 + 610, 230 + 25 * i, 40, 20, "0000");
				sscanf(Input, "%4d", &DATA[Fly[Count]][n].ActuralDepartureTime);
				PrintTicketPage(ID, DATA, Fly, n, Page, CurrentPage, FlyDayCountAll);
			}
			MENUchoice = AdminMENU_Ticket_MENUChoose();
			break;
		}
		case 401:
		case 402:
		case 403:
		case 404:
		case 405:
		case 406:
		case 407:
		case 408:
		case 409:
		case 410:
		case 411:
		case 412:
		case 413:
		case 414:
		case 415:
		case 416:
		case 417:
		case 418:									//���Ľ���ʱ��
		{
			char Input[8];
			int i = MENUchoice % 100 - 1;
			int Count = (CurrentPage - 1) * 36 + 18 + i;
			if (Count < FlyDayCountAll)
			{
				C_InputBox(Input, 4, 240 + 610, 230 + 25 * i, 40, 20, "0000");
				sscanf(Input, "%4d", &DATA[Fly[Count]][n].ActuralArrivalTime);
				PrintTicketPage(ID, DATA, Fly, n, Page, CurrentPage, FlyDayCountAll);
			}
			MENUchoice = AdminMENU_Ticket_MENUChoose();
			break;
		}
		}
	}
}
//��ӡÿ�ջ�Ʊ��ϸ��Ϣ:��ҳ
void PrintTicketPage(FlightID* ID, FlightTicket DATA[][999], int* Fly, int n, int Page, int CurrentPage, int FlyDayCountAll)
{
	clearrectangle(60, 230, 1220, 720);//��ʼǰ����ʾ�������
	IMAGE PageChoiceImage;
	loadimage(&PageChoiceImage, _T(".\\IMAGES\\PageChoice.png"), 150, 30);
	putimage(1280 - 60 - 150, 165, &PageChoiceImage);						//����ҳͼƬ
	char IntChange[8];
	_stprintf(IntChange, _T("%d"), CurrentPage);
	outtextxy(1280 - 60 - 120, 170, IntChange);
	outtextxy(1280 - 60 - 95, 170, "/");
	_stprintf(IntChange, _T("%d"), Page);
	outtextxy(1280 - 60 - 80, 170, IntChange);
	outtextxy(1280 - 60 - 55, 170, "ҳ");
	char Date[20];
	char Accuracy[20];
	COLORREF TextColor;
	time_t NOW;
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	int year = Local->tm_year + 1900;
	int Count = (CurrentPage - 1) * 36;
	for (int i = 0; i < 18; i++)
	{
		if (Count == FlyDayCountAll)
			break;
		MatchDate(year, Fly[Count], Date);
		outtextxy(60, 230 + 25 * i, Date);
		_stprintf(IntChange, _T("%04d"), DATA[Fly[Count]][n].ActuralDepartureTime);
		outtextxy(180, 230 + 25 * i, IntChange);
		_stprintf(IntChange, _T("%04d"), DATA[Fly[Count]][n].ActuralArrivalTime);
		outtextxy(240, 230 + 25 * i, IntChange);
		MatchTimeAccuracy(ID, DATA, n, Fly[Count], Accuracy, TextColor);
		settextcolor(TextColor);
		outtextxy(300, 230 + 25 * i, Accuracy);
		settextcolor(BLACK);
		_stprintf(IntChange, _T("%2d"), DATA[Fly[Count]][n].FirstClassTicketRemain);
		outtextxy(400, 230 + 25 * i, IntChange);
		if (JudgeAircraftSize(ID, n) == 2)
		{
			outtextxy(420, 230 + 25 * i, "/6");
		}
		else
		{
			outtextxy(420, 230 + 25 * i, "/8");
		}
		if (JudgeAircraftSize(ID, n) == 2)
		{
			_stprintf(IntChange, _T("%2d"), DATA[Fly[Count]][n].BusinessClassTicketRemain);
			outtextxy(470, 230 + 25 * i, IntChange);
			outtextxy(490, 230 + 25 * i, "/36");
		}
		else
		{
			outtextxy(470, 230 + 25 * i, " N/A");
		}
		_stprintf(IntChange, _T("%3d"), DATA[Fly[Count]][n].EconomyClassTicketRemain);
		outtextxy(540, 230 + 25 * i, IntChange);
		if (JudgeAircraftSize(ID, n) == 2)
		{
			outtextxy(570, 230 + 25 * i, "/400");
		}
		else
		{
			outtextxy(570, 230 + 25 * i, "/180");
		}
		Count++;
	}
	for (int i = 0; i < 18; i++)
	{
		if (Count == FlyDayCountAll)
			break;
		MatchDate(year, Fly[Count], Date);
		outtextxy(60 + 610, 230 + 25 * i, Date);
		_stprintf(IntChange, _T("%04d"), DATA[Fly[Count]][n].ActuralDepartureTime);
		outtextxy(180 + 610, 230 + 25 * i, IntChange);
		_stprintf(IntChange, _T("%04d"), DATA[Fly[Count]][n].ActuralArrivalTime);
		outtextxy(240 + 610, 230 + 25 * i, IntChange);
		MatchTimeAccuracy(ID, DATA, n, Fly[Count], Accuracy, TextColor);
		settextcolor(TextColor);
		outtextxy(300 + 610, 230 + 25 * i, Accuracy);
		settextcolor(BLACK);
		_stprintf(IntChange, _T("%2d"), DATA[Fly[Count]][n].FirstClassTicketRemain);
		outtextxy(400 + 610, 230 + 25 * i, IntChange);
		if (JudgeAircraftSize(ID, n) == 2)
		{
			outtextxy(420 + 610, 230 + 25 * i, "/6");
		}
		else
		{
			outtextxy(420 + 610, 230 + 25 * i, "/8");
		}
		if (JudgeAircraftSize(ID, n) == 2)
		{
			_stprintf(IntChange, _T("%2d"), DATA[Fly[Count]][n].BusinessClassTicketRemain);
			outtextxy(470 + 610, 230 + 25 * i, IntChange);
			outtextxy(490 + 610, 230 + 25 * i, "/36");
		}
		else
		{
			outtextxy(470 + 610, 230 + 25 * i, " N/A");
		}
		_stprintf(IntChange, _T("%3d"), DATA[Fly[Count]][n].EconomyClassTicketRemain);
		outtextxy(540 + 610, 230 + 25 * i, IntChange);
		if (JudgeAircraftSize(ID, n) == 2)
		{
			outtextxy(570 + 610, 230 + 25 * i, "/400");
		}
		else
		{
			outtextxy(570 + 610, 230 + 25 * i, "/180");
		}
		Count++;
	}
	return;
}
//��ӡ����
void PrintBG(int IDcount)
{
	cleardevice();
	setbkcolor(RGB(255, 255, 253));
	settextcolor(BLACK);
	IMAGE BG;
	loadimage(&BG, _T(".\\IMAGES\\BackGround.png"), 1280, 720);
	putimage(0, 0, &BG);						// ���±���
	settextstyle(25, 0, FONT);
	char count[8];
	_stprintf(count, _T("%d"), IDcount);
	outtextxy(110, 200, "��ǰ���ݿ�����");
	outtextxy(110, 230, count);
	outtextxy(162, 230, "����������");
	//��ʾ����
	settextstyle(20, 0, FONT);
	time_t NOW;
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	_stprintf(count, _T("%d"), Local->tm_year + 1900);
	outtextxy(1073, 55, count);
	outtextxy(1113, 55, "��");
	_stprintf(count, _T("%2d"), Local->tm_mon + 1);
	outtextxy(1133, 55, count);
	outtextxy(1153, 55, "��");
	_stprintf(count, _T("%2d"), Local->tm_mday);
	outtextxy(1173, 55, count);
	outtextxy(1193, 55, "��");
}
//��ӡ��ҳ����
void PrintHomeBG(int IDcount)
{
	cleardevice();
	setbkcolor(RGB(255, 255, 253));
	settextcolor(BLACK);
	IMAGE BG;
	loadimage(&BG, _T(".\\IMAGES\\Home.png"), 1280, 720);
	putimage(0, 0, &BG);						// ���±���
	settextstyle(25, 0, FONT);
	char count[8];
	_stprintf(count, _T("%d"), IDcount);
	outtextxy(110, 200, "��ǰ���ݿ�����");
	outtextxy(110, 230, count);
	outtextxy(162, 230, "����������");
	//��ʾ����
	settextstyle(20, 0, FONT);
	time_t NOW;
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	_stprintf(count, _T("%d"), Local->tm_year + 1900);
	outtextxy(1073, 55, count);
	outtextxy(1113, 55, "��");
	_stprintf(count, _T("%2d"), Local->tm_mon + 1);
	outtextxy(1133, 55, count);
	outtextxy(1153, 55, "��");
	_stprintf(count, _T("%2d"), Local->tm_mday);
	outtextxy(1173, 55, count);
	outtextxy(1193, 55, "��");
}
//��ӡ����ҳ����
void PrintSearchBG(int IDcount)
{
	cleardevice();
	setbkcolor(RGB(255, 255, 253));
	settextcolor(BLACK);
	IMAGE BG;
	loadimage(&BG, _T(".\\IMAGES\\Search.png"), 1280, 720);
	putimage(0, 0, &BG);						// ���±���
	settextstyle(25, 0, FONT);
	char count[8];
	_stprintf(count, _T("%d"), IDcount);
	outtextxy(110, 200, "��ǰ���ݿ�����");
	outtextxy(110, 230, count);
	outtextxy(162, 230, "����������");
	//��ʾ����
	settextstyle(20, 0, FONT);
	time_t NOW;
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	_stprintf(count, _T("%d"), Local->tm_year + 1900);
	outtextxy(1073, 55, count);
	outtextxy(1113, 55, "��");
	_stprintf(count, _T("%2d"), Local->tm_mon + 1);
	outtextxy(1133, 55, count);
	outtextxy(1153, 55, "��");
	_stprintf(count, _T("%2d"), Local->tm_mday);
	outtextxy(1173, 55, count);
	outtextxy(1193, 55, "��");
}
//��ӡɾ��ҳ����
void PrintDeleteBG(int IDcount)
{
	cleardevice();
	setbkcolor(RGB(255, 255, 253));
	settextcolor(BLACK);
	IMAGE BG;
	loadimage(&BG, _T(".\\IMAGES\\Delete.png"), 1280, 720);
	putimage(0, 0, &BG);						// ���±���
	char count[8];
	//��ʾ����
	settextstyle(20, 0, FONT);
	time_t NOW;
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	_stprintf(count, _T("%d"), Local->tm_year + 1900);
	outtextxy(1073, 55, count);
	outtextxy(1113, 55, "��");
	_stprintf(count, _T("%2d"), Local->tm_mon + 1);
	outtextxy(1133, 55, count);
	outtextxy(1153, 55, "��");
	_stprintf(count, _T("%2d"), Local->tm_mday);
	outtextxy(1173, 55, count);
	outtextxy(1193, 55, "��");
}

//�˿Ͳ���
//����ϸ�ں�����Ϣ
void c_PrintFlightDetail(FlightID* ID, FlyhistoryAndOrder* FO, int IDcount, int i, int n, Passenger* p)
{
	clearrectangle(300, 200, 1280, 720);//��ʼǰ����ʾ�������
	IMAGE plane;
	IMAGE FlightDetail;
	LOGFONT format;
	loadimage(&FlightDetail, _T(".\\IMAGES\\FlightDetail.png"), 840, 55);
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T("����"));	// ��������Ϊ�����塱
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	char carrier[20];
	char AircraftType[50];
	char DepartureAirport[50];
	char ArrivalAirport[50];
	char  date[20];
	char Class[20];
	int year = year_get();
	MatchCarrier(ID[i].Carrier, carrier);
	MatchPlaneImage(plane, ID[i].AircraftType);
	MatchPlaneType(ID[i].AircraftType, AircraftType);
	MatchAirport(ID[i].DepartureAirport, DepartureAirport);
	MatchAirport(ID[i].ArrivalAirport, ArrivalAirport);
	putimage(1280 - 60 - 240, 200, &plane);						//�ɻ�ͼƬ
	putimage(380, 400, &FlightDetail);							//����ʾ��ͼ
	outtextxy(1280 - 60 - 240, 200 + 160 + 5, AircraftType);	//�ɻ��ͺ�
	char IntChange[8];
	//��Ϣ�����30pxΪ�о�
	outtextxy(380, 200, "����ţ�");
	outtextxy(550, 200, ID[i].Carrier);
	outtextxy(570, 200, ID[i].ID);
	outtextxy(380, 230, "ִ�ɺ��չ�˾��");
	outtextxy(550, 230, carrier);
	outtextxy(380, 260, "�������ڣ�");
	MatchDate(year, FO->flyday[n], date);
	outtextxy(550, 260, date);
	outtextxy(380, 290, "����Ʊ�ۣ�");
	outtextxy(550, 290, _itoa(FO->price[n], IntChange, 10));
	outtextxy(380, 320, "��λ��");
	MatchClass(FO->Class[n], Class);
	outtextxy(550, 320, Class);
	outtextxy(380, 350, "��λ");
	char seat_y = ' ';
	MatchSeatY(FO->seat_y[n], &seat_y);
	outtextxy(553, 350, _itoa(FO->seat_x[n]+1, IntChange, 10));
	outtextxy(570, 350, "��");
	outtextxy(593, 350,  seat_y );
	outtextxy(610, 350,"��");
	outtextxy(380, 380, "�˻���:");
	char pssenger[20];
	strcpy(pssenger, p[FO->id[n]].name);
	outtextxy(550, 380, pssenger);
	outtextxy(450, 460, DepartureAirport);
	outtextxy(450, 490, ID[i].DepartureAirport);
	_stprintf(IntChange, _T("%04d"), ID[i].DepartureTime);
	outtextxy(450, 520, IntChange);
	//���߷ɻ�����С����
	setlinecolor(RGB(255, 255, 253));
	setfillcolor(RGB(255, 255, 253));
	for (int i = 480; i < 1000; i += 2)
	{
		putimage(380, 400, &FlightDetail);							//����ʾ��ͼ
		fillrectangle(i, 400, 1280, 440);
		Sleep(1);
	}
	putimage(380, 400, &FlightDetail);								//����ʾ��ͼ
	//С�������˽���
	outtextxy(980, 460, ArrivalAirport);
	outtextxy(980, 490, ID[i].ArrivalAirport);
	_stprintf(IntChange, _T("%04d"), ID[i].ArrivalTime);
	outtextxy(980, 520, IntChange);
	Sleep(50);
	outtextxy(680, 480, "����ʱ��");
	outtextxy(660, 500, _itoa(ID[i].TravelTimeHour, IntChange, 10));
	outtextxy(680, 500, "Сʱ");
	outtextxy(730, 500, _itoa(ID[i].TravelTimeMinute, IntChange, 10));
	outtextxy(750, 500, "����");
	return;
}
void b_PrintFlightDetail(FlightID* ID, FlightTicket DATA[366][999], int IDcount, int i, int m)
{
	clearrectangle(300, 200, 1280, 720);//��ʼǰ����ʾ�������
	IMAGE plane;
	IMAGE FlightDetail;
	LOGFONT format;
	loadimage(&FlightDetail, _T(".\\IMAGES\\FlightDetail.png"), 840, 55);
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T("����"));	// ��������Ϊ�����塱
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	char carrier[20];
	char AircraftType[50];
	char DepartureAirport[50];
	char ArrivalAirport[50];
	MatchCarrier(ID[i].Carrier, carrier);
	MatchPlaneImage(plane, ID[i].AircraftType);
	MatchPlaneType(ID[i].AircraftType, AircraftType);
	MatchAirport(ID[i].DepartureAirport, DepartureAirport);
	MatchAirport(ID[i].ArrivalAirport, ArrivalAirport);
	putimage(1280 - 60 - 240, 200, &plane);						//�ɻ�ͼƬ
	putimage(380, 400, &FlightDetail);							//����ʾ��ͼ
	outtextxy(1280 - 60 - 240, 200 + 160 + 5, AircraftType);	//�ɻ��ͺ�
	char IntChange[8];
	//��Ϣ�����30pxΪ�о�
	outtextxy(380, 200, "����ţ�");
	outtextxy(550, 200, ID[i].Carrier);
	outtextxy(570, 200, ID[i].ID);
	outtextxy(380, 230, "ִ�ɺ��չ�˾��");
	outtextxy(550, 230, carrier);
	outtextxy(380, 260, "�������ڣ�");
	int year = year_get();
	char date[100];
	MatchDate(year, m, date);
	outtextxy(550, 260, date);
	outtextxy(380, 290, "���òն���Ʊ�ۣ�");
	outtextxy(550, 290, _itoa(ID[i].Price, IntChange, 10));
	outtextxy(380, 320, "ʣ����λ����");
	int x = DATA[m - 1][i].BusinessClassTicketRemain + DATA[m - 1][i].EconomyClassTicketRemain + DATA[m - 1][i].FirstClassTicketRemain;//ʣ����λ��
	_stprintf(IntChange, _T("%03d"), x);
	outtextxy(550, 320, IntChange);
	outtextxy(450, 460, DepartureAirport);
	outtextxy(450, 490, ID[i].DepartureAirport);
	_stprintf(IntChange, _T("%04d"), ID[i].DepartureTime);
	outtextxy(450, 520, IntChange);
	//���߷ɻ�����С����
	setlinecolor(RGB(255, 255, 253));
	setfillcolor(RGB(255, 255, 253));
	for (int i = 480; i < 1000; i += 2)
	{
		putimage(380, 400, &FlightDetail);							//����ʾ��ͼ
		fillrectangle(i, 400, 1280, 440);
		Sleep(1);
	}
	putimage(380, 400, &FlightDetail);								//����ʾ��ͼ
	//С�������˽���
	outtextxy(980, 460, ArrivalAirport);
	outtextxy(980, 490, ID[i].ArrivalAirport);
	_stprintf(IntChange, _T("%04d"), ID[i].ArrivalTime);
	outtextxy(980, 520, IntChange);
	Sleep(50);
	outtextxy(680, 480, "����ʱ��");
	outtextxy(660, 500, _itoa(ID[i].TravelTimeHour, IntChange, 10));
	outtextxy(680, 500, "Сʱ");
	outtextxy(730, 500, _itoa(ID[i].TravelTimeMinute, IntChange, 10));
	outtextxy(750, 500, "����");
	return;
}
//���ط�Ӧҳ
void PrintRES()
{
	clearrectangle(300, 140, 1280, 720);//��ʼǰ����ʾ�������
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T("����"));	// ��������Ϊ�����塱
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	outtextxy(400, 320, "���ã����ѳɹ���Ʊ����ӭ�ٴ�ʹ�ö�Ʊϵͳ������");
}
void PrintORS()
{
	clearrectangle(300, 140, 1280, 720);//��ʼǰ����ʾ�������
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T("����"));	// ��������Ϊ�����塱
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	outtextxy(400, 320, "���ã����ѳɹ���Ʊ������");
	outtextxy(400, 350, "���Ķ�Ʊ��¼����������ѯ������ӭ�ٴ�ʹ�ö�Ʊϵͳ������");
}
void PrintRBS()
{
	clearrectangle(300, 140, 1280, 720);//��ʼǰ����ʾ�������
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T("����"));	// ��������Ϊ�����塱
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	outtextxy(400, 320, "���ã����ѳɹ���ǩ������");
	outtextxy(400, 350, "���Ķ�Ʊ��¼����������ѯ������ӭ�ٴ�ʹ�ö�Ʊϵͳ������");
}
void PrintORF()
{
	clearrectangle(300, 140, 1280, 720);//��ʼǰ����ʾ�������
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T("����"));	// ��������Ϊ�����塱
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	outtextxy(400, 320, "���ã�������ѡ�ĺ����λ�������㣬�ǳ���Ǹ�ظ�֪����Ʊʧ���ˡ�");
	outtextxy(400, 350, "��������ѡ�񺽰���λ�ٴζ�Ʊ��ף����;��졣");
	IMAGE sorry;
	loadimage(&sorry, ".\\IMAGES\\sorry.png", 0, 0);
	putimage(420, 400, &sorry);
}
void PrintDORF()
{
	clearrectangle(300, 140, 1280, 720);//��ʼǰ����ʾ�������
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T("����"));	// ��������Ϊ�����塱
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	outtextxy(400, 320, "���ã�������ѡ�������ڳ���Ԥ�����ڷ�Χ���ǳ���Ǹ�ظ�֪���޷���Ʊ��");
	outtextxy(400, 350, "��������ѡ�������ٴζ�Ʊ��ף����;��졣");
	IMAGE sorry;
	loadimage(&sorry, ".\\IMAGES\\sorry.png", 0, 0);
	putimage(420, 400, &sorry);
}
void PrintCORF()
{
	clearrectangle(300, 140, 1280, 720);//��ʼǰ����ʾ�������
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	_tcscpy_s(format.lfFaceName, _T("����"));	// ��������Ϊ�����塱
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	settextstyle(&format);						// ����������ʽ
	outtextxy(400, 320, "���ã������������㣬�ǳ���Ǹ�ظ�֪����Ʊʧ���ˡ�");
	IMAGE sorry;
	loadimage(&sorry, ".\\IMAGES\\sorry.png", 0, 0);
	putimage(420, 400, &sorry);
}
//���ز˵�ѡ�񣨿������ã���p_idΪ�û������±�
int C_PrintMultiFlight(FlightID* ID, FlyhistoryAndOrder* FO, int IDcount, int* SearchReasult, int SearchCount, int* flyday, Passenger* p)
{
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	format.lfPitchAndFamily = FIXED_PITCH;
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	settextstyle(&format);						// ����������ʽ
	clearrectangle(300, 230, 1280, 720);//��ʼǰ����ʾ�������
	IMAGE PageChoiceImage;
	loadimage(&PageChoiceImage, _T(".\\IMAGES\\PageChoice.png"), 150, 30);
	putimage(1280 - 60 - 150, 165, &PageChoiceImage);						//����ҳͼƬ
	char IntChange[100];
	int Page = (SearchCount - 1) / 15 + 1;
	int CurrentPage = 1;
	outtextxy(380, 170, "���ҵ�");
	_stprintf(IntChange, _T("%d"), SearchCount);
	outtextxy(450, 170, IntChange);
	outtextxy(485, 170, "������");
	c_PrintFlightTitle();
	C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
	int MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
	while (true)
	{
		switch (MENUchoice)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return MENUchoice;
		case 15:					//��һҳ
			if (CurrentPage == 1)
				C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			else
			{
				CurrentPage--;
				C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			}
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		case 16:					//��һҳ
			if (CurrentPage == Page)
				C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			else
			{
				CurrentPage++;
				C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			}
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		case 18:					//�����˷��ؼ���Ҳ���ǻ���ʾ��һ�εĽ���
			clearrectangle(1070, 165, 1220, 200);//��ʼǰ�ѷ����������
			clearrectangle(380, 200, 1220, 720);//��ʼǰ����ʾ�������
			PrintFlightTitle();
			C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:									//��ת������ҳ��
			//�����жϸ�ҳ�ĺ�������
			int Count = (CurrentPage - 1) * 15;//count��ʾ֮ǰҳ���ܼƵĺ�����������ҳ����Ӧ�ô�count+1���±꿪ʼ
			if ((MENUchoice % 100 + Count) <= SearchCount)
			{
				clearrectangle(1070, 165, 1220, 200);//��ʼǰ�ѷ����������
				IMAGE PageChoiceImage;
				loadimage(&PageChoiceImage, _T(".\\IMAGES\\Back.png"), 30, 30);
				putimage(1280 - 60 - 30, 165, &PageChoiceImage);						//���ؼ�ͼƬ
				c_PrintFlightDetail(ID, FO, IDcount, SearchReasult[MENUchoice % 100 + Count - 1], (MENUchoice % 100 + Count - 1), p);
				MENUchoice = AdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose();
			}
			else
				MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		}
	}
}
//���ز˵�ѡ��(�˸�ǩ�ã���p_idΪ�û������±�
int re_printmultiflight(FlightID* ID, FlightTicket DATA[366][999], FlyhistoryAndOrder* FO, Passenger* P, The_users* User, int IDcount, int* SearchReasult, int SearchCount, int* flyday, int p_id, bookiinginformation* custom)
{
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	format.lfPitchAndFamily = FIXED_PITCH;
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	settextstyle(&format);						// ����������ʽ
	clearrectangle(300, 230, 1280, 720);//��ʼǰ����ʾ�������
	IMAGE PageChoiceImage;
	loadimage(&PageChoiceImage, _T(".\\IMAGES\\PageChoice.png"), 150, 30);
	putimage(1280 - 60 - 150, 165, &PageChoiceImage);						//����ҳͼƬ
	char IntChange[100];
	int Page = (SearchCount - 1) / 15 + 1;
	int CurrentPage = 1;
	outtextxy(380, 170, "���ҵ�");
	_stprintf(IntChange, _T("%d"), SearchCount);
	outtextxy(450, 170, IntChange);
	outtextxy(485, 170, "������");
	c_PrintFlightTitle();
	C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
	int MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
	while (true)
	{
		switch (MENUchoice)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return MENUchoice;
		case 15:					//��һҳ
			if (CurrentPage == 1)
				C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			else
			{
				CurrentPage--;
				C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			}
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		case 16:					//��һҳ
			if (CurrentPage == Page)
				C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			else
			{
				CurrentPage++;
				C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			}
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		case 18:					//�����˷��ؼ���Ҳ���ǻ���ʾ��һ�εĽ���
			clearrectangle(1070, 165, 1220, 200);//��ʼǰ�ѷ����������
			clearrectangle(380, 200, 1220, 720);//��ʼǰ����ʾ�������
			PrintFlightTitle();
			C_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:									//��ת������ҳ��
			//�����жϸ�ҳ�ĺ�������
			int Count = (CurrentPage - 1) * 15;//count��ʾ֮ǰҳ���ܼƵĺ�����������ҳ����Ӧ�ô�count+1���±꿪ʼ
			if ((MENUchoice % 100 + Count) <= SearchCount)
			{
				clearrectangle(1070, 165, 1220, 200);//��ʼǰ�ѷ����������
				IMAGE PageChoiceImage, choice1, choice2;
				loadimage(&PageChoiceImage, _T(".\\IMAGES\\Back.png"), 30, 30);
				putimage(1280 - 60 - 30, 165, &PageChoiceImage);						//���ؼ�ͼƬ
				c_PrintFlightDetail(ID, FO, IDcount, SearchReasult[MENUchoice % 100 + Count - 1], (MENUchoice % 100 + Count - 1), P);
				loadimage(&choice1, _T(".\\IMAGES\\��Ʊ.png"), 0, 0);
				loadimage(&choice2, _T(".\\IMAGES\\��ǩ.png"), 0, 0);
				putimage(400, 600, &choice1);
				putimage(800, 600, &choice2);
				int tem = MENUchoice % 100 + Count - 1;
				MENUchoice = CAdminMENU_ReMENU_MultiFlight_FlightDetail_MENUChoose();
				while (true)
				{
				  switch (MENUchoice)
				  {
					case 0:
					case 1:
					case 2:
					case 3:
					case 4:
						return MENUchoice;
						break;
					case 28://��Ʊ
					{
						SYSTEMTIME sys;
						GetLocalTime(&sys);
						custom->year = sys.wYear;
						int t_hour = sys.wHour;
						int today = DateTransfer(sys.wYear, sys.wMonth, sys.wDay);
						int fl = FO->flight[tem];
						int day = FO->flyday[tem]+1;
						Refunding(DATA, FO, tem);
						if (today ==day)
						{
							int fh = ID[fl].DepartureTime / 100;
							if (fh < t_hour)
								User[p_id].Credi -= 1;
						}
						PrintRES();
						MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
						break;
					}
					 case 29://��ǩ
					 {
						SYSTEMTIME sys;
						GetLocalTime(&sys);
						custom->year = sys.wYear;
						int t_hour = sys.wHour;
						int today = DateTransfer(sys.wYear, sys.wMonth, sys.wDay);
						int fl = FO->flight[tem];
						int day = FO->flyday[tem] + 1;
						int SearchCount = 0;
						LOGFONT format;
						gettextstyle(&format);						// ��ȡ��ǰ��������
						format.lfHeight = 25;						// ��������߶�Ϊ 25
						format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
						format.lfPitchAndFamily = FIXED_PITCH;
						_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
						settextstyle(&format);						// ����������ʽ
						SearchCount = Searching(ID, DATA, custom, IDcount);
						int flyday = DateTransfer(custom->year, custom->month, custom->day);
						if (flyday - today <= 45 && flyday - today >= -1)
						{
							int x= rb_printmultiflight(ID, DATA, P, User, IDcount, custom->flynumber, SearchCount, flyday, p_id);
							if (x == 1)
							{
								Refunding(DATA, FO, tem);
								if (today == day)
								{
									int fh = ID[fl].DepartureTime / 100;
									if (fh < t_hour)
										User[p_id].Credi -= 1;
								}
								MENUchoice = 0;
								break;
							}
						}
						else
						{
							PrintDORF();
							Sleep(3000);
							return 0;
						}
					 }
				  }
				}
			}
			else
				MENUchoice = CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
			break;

		}
	}
}
//���ز˵�ѡ��(��Ʊ�ã���p_idΪ�û������±�
int b_printmultiflight(FlightID* ID, FlightTicket DATA[366][999], Passenger* P, The_users* User, int IDcount, int* SearchReasult, int SearchCount, int flyday, int p_id)
{
	CPrintProcess2();
	PrintCustomer(User, p_id);
	clearrectangle(300, 170, 1280, 720);//��ʼǰ����ʾ�������
	settextstyle(20, 0, "����");
	IMAGE pagechoiceimage;
	loadimage(&pagechoiceimage, _T(".\\images\\pagechoice.png"), 150, 30);
	putimage(1280 - 60 - 150, 165, &pagechoiceimage);						//����ҳͼƬ
	char intchange[8];
	int Page = (SearchCount - 1) / 15 + 1;
	int CurrentPage = 1;
	outtextxy(380, 170, "���ҵ�");
	_stprintf(intchange, _T("%d"), SearchCount);
	outtextxy(460, 170, intchange);
	outtextxy(485, 170, "�����Ϻ���");
	c_PrintFlightTitle();
	c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
	int MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
	IMAGE PageChoiceImage;
	while (true)
	{
		switch (MENUchoice)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return MENUchoice;
		case 15:					//��һҳ
			if (CurrentPage == 1)
				c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			else
			{
				CurrentPage--;
				c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			}
			MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
			break;
		case 16:					//��һҳ
			if (CurrentPage == Page)
				c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			else
			{
				CurrentPage++;
				c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			}
			MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
			break;
		case 18:					//�����˷��ؼ���Ҳ���ǻ���ʾ��һ�εĽ���
			clearrectangle(1070, 165, 1220, 200);//��ʼǰ�ѷ����������
			clearrectangle(300, 200, 1280, 720);//��ʼǰ����ʾ�������
			settextstyle(20, 0, FONT);
			c_PrintFlightTitle();
			c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
			break;
		case 19:					//�����ʱ������
			int SortReasult[999];//���ڴ洢������˳�������Ͳ������ԭ�еĽṹ������˳�򣬲�Ӱ���±���ʡ�
			SortByDepartureTime(ID, SearchReasult, SearchCount, SortReasult);//ð�����򷨰���ʱ������������������ע��˺���������
			return b_printmultiflight(ID, DATA, P, User, IDcount, SortReasult, SearchCount, flyday, p_id);
			break;
		case 30://��Ʊ�ɹ�
			PrintORS();
			loadimage(&PageChoiceImage, _T(".\\IMAGES\\Back.png"), 30, 30);
			putimage(1280 - 60 - 30, 165, &PageChoiceImage);						//���ؼ�ͼƬ
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose();
			break;
		case 31://��Ʊʧ��
			PrintORF();
			loadimage(&PageChoiceImage, _T(".\\IMAGES\\Back.png"), 30, 30);
			putimage(1280 - 60 - 30, 165, &PageChoiceImage);						//���ؼ�ͼƬ
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose();
			break;
		case 32://������Ʊʧ��
			PrintCORF();
			loadimage(&PageChoiceImage, _T(".\\IMAGES\\Back.png"), 30, 30);
			putimage(1280 - 60 - 30, 165, &PageChoiceImage);						//���ؼ�ͼƬ
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose();
			break;
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:									//��ת������ҳ��
			//�����жϸ�ҳ�ĺ�������
			int Count = (CurrentPage - 1) * 15;//count��ʾ֮ǰҳ���ܼƵĺ�����������ҳ����Ӧ�ô�count+1���±꿪ʼ
			if ((MENUchoice % 100 + Count) <= SearchCount)
			{
				clearrectangle(1070, 165, 1220, 200);//��ʼǰ�ѷ����������
				IMAGE pagechoiceimage;
				IMAGE Chioce;
				loadimage(&pagechoiceimage, _T(".\\images\\back.png"), 30, 30);
				putimage(1280 - 60 - 30, 165, &pagechoiceimage);						//���ؼ�ͼƬ
				int tmp = MENUchoice % 100 + Count - 1;
				b_PrintFlightDetail(ID, DATA, IDcount, SearchReasult[MENUchoice % 100 + Count - 1], flyday);
				loadimage(&Chioce, _T(".\\IMAGES\\��Ʊ.png"), 0, 0);
				putimage(500, 600, &Chioce);
				MENUchoice = CAdminMENU_BookingMENU_MultiFlight_FlightDetail_MENUChoose();
				if (MENUchoice == 28)//ѡ�ж�Ʊ
				{
					if (User[p_id].Credi >=0)
						MENUchoice = p_Booking(ID, DATA, P, User, p_id, flyday, SearchReasult[tmp]);
					else
						MENUchoice = 32;
				}
			}
			else
				MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
			break;
		}
	}
}
//��ǩ�ú���
int rb_printmultiflight(FlightID* ID, FlightTicket DATA[366][999], Passenger* P, The_users* User, int IDcount, int* SearchReasult, int SearchCount, int flyday, int p_id)
{
	CPrintProcess2();
	PrintCustomer(User, p_id);
	clearrectangle(300, 170, 1280, 720);//��ʼǰ����ʾ�������
	settextstyle(20, 0, "����");
	IMAGE pagechoiceimage;
	loadimage(&pagechoiceimage, _T(".\\images\\pagechoice.png"), 150, 30);
	putimage(1280 - 60 - 150, 165, &pagechoiceimage);						//����ҳͼƬ
	char intchange[8];
	int Page = (SearchCount - 1) / 15 + 1;
	int CurrentPage = 1;
	outtextxy(380, 170, "���ҵ�");
	_stprintf(intchange, _T("%d"), SearchCount);
	outtextxy(460, 170, intchange);
	outtextxy(485, 170, "�����Ϻ���");
	c_PrintFlightTitle();
	c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
	int MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
	IMAGE PageChoiceImage;
	while (true)
	{
		switch (MENUchoice)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return MENUchoice;
		case 15:					//��һҳ
			if (CurrentPage == 1)
				c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			else
			{
				CurrentPage--;
				c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			}
			MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
			break;
		case 16:					//��һҳ
			if (CurrentPage == Page)
				c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			else
			{
				CurrentPage++;
				c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			}
			MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
			break;
		case 18:					//�����˷��ؼ���Ҳ���ǻ���ʾ��һ�εĽ���
			clearrectangle(1070, 165, 1220, 200);//��ʼǰ�ѷ����������
			clearrectangle(300, 200, 1280, 720);//��ʼǰ����ʾ�������
			settextstyle(20, 0, FONT);
			c_PrintFlightTitle();
			c_PrintMultiFlightPage(ID, IDcount, SearchReasult, SearchCount, CurrentPage, Page, flyday);
			MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
			break;
		case 19:					//�����ʱ������
			int SortReasult[999];//���ڴ洢������˳�������Ͳ������ԭ�еĽṹ������˳�򣬲�Ӱ���±���ʡ�
			SortByDepartureTime(ID, SearchReasult, SearchCount, SortReasult);//ð�����򷨰���ʱ������������������ע��˺���������
			return b_printmultiflight(ID, DATA, P, User, IDcount, SortReasult, SearchCount, flyday, p_id);
			break;
		case 30://��Ʊ�ɹ�
			PrintRBS();
			Sleep(3000);
			return 1;
			break;
		case 31://��Ʊʧ��
			PrintORF();
			loadimage(&PageChoiceImage, _T(".\\IMAGES\\Back.png"), 30, 30);
			putimage(1280 - 60 - 30, 165, &PageChoiceImage);						//���ؼ�ͼƬ
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose();
			break;
		case 32://������Ʊʧ��
			PrintCORF();
			loadimage(&PageChoiceImage, _T(".\\IMAGES\\Back.png"), 30, 30);
			putimage(1280 - 60 - 30, 165, &PageChoiceImage);						//���ؼ�ͼƬ
			MENUchoice = CAdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose();
			break;
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:									//��ת������ҳ��
			//�����жϸ�ҳ�ĺ�������
			int Count = (CurrentPage - 1) * 15;//count��ʾ֮ǰҳ���ܼƵĺ�����������ҳ����Ӧ�ô�count+1���±꿪ʼ
			if ((MENUchoice % 100 + Count) <= SearchCount)
			{
				clearrectangle(1070, 165, 1220, 200);//��ʼǰ�ѷ����������
				IMAGE pagechoiceimage;
				IMAGE Chioce;
				loadimage(&pagechoiceimage, _T(".\\images\\back.png"), 30, 30);
				putimage(1280 - 60 - 30, 165, &pagechoiceimage);						//���ؼ�ͼƬ
				int tmp = MENUchoice % 100 + Count - 1;
				b_PrintFlightDetail(ID, DATA, IDcount, SearchReasult[MENUchoice % 100 + Count - 1], flyday);
				loadimage(&Chioce, _T(".\\IMAGES\\��Ʊ.png"), 0, 0);
				putimage(500, 600, &Chioce);
				MENUchoice = CAdminMENU_BookingMENU_MultiFlight_FlightDetail_MENUChoose();
				if (MENUchoice == 28)//ѡ�ж�Ʊ
				{
					if (User[p_id].Credi >= 0)
						MENUchoice = p_Booking(ID, DATA, P, User, p_id, flyday, SearchReasult[tmp]);
					else
						MENUchoice = 32;
				}
			}
			else
				MENUchoice = CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
			break;
		}
	}
}
//�ɻ���ͷ
void c_PrintFlightTitle()
{
	outtextxy(380, 200, "�����");
	outtextxy(460, 200, "���ʱ��");
	outtextxy(620, 200, "��ɻ���");
	outtextxy(820, 200, "�������");
	outtextxy(980, 200, "����");
	outtextxy(1080, 200, "����");
	outtextxy(1140, 200, "����ʱ��");
}
//Currentpage��ʾ��ǰ��ʾ�ڼ�ҳ
void c_PrintMultiFlightPage(FlightID* ID, int IDcount, int* SearchReasult, int SearchCount, int CurrentPage, int Page, int flyday)
{
	char IntChange[8];
	clearrectangle(300, 230, 1280, 720);//��ʼǰ����ʾ�������
	IMAGE PageChoiceImage;
	loadimage(&PageChoiceImage, _T(".\\IMAGES\\PageChoice.png"), 150, 30);
	putimage(1280 - 60 - 150, 165, &PageChoiceImage);						//����ҳͼƬ
	_stprintf(IntChange, _T("%d"), CurrentPage);
	outtextxy(1280 - 60 - 120, 170, IntChange);
	outtextxy(1280 - 60 - 95, 170, "/");
	_stprintf(IntChange, _T("%d"), Page);
	outtextxy(1280 - 60 - 80, 170, IntChange);
	outtextxy(1280 - 60 - 55, 170, "ҳ");
	int Count = (CurrentPage - 1) * 15;//count��ʾ֮ǰҳ���ܼƵĺ�����������ҳ����Ӧ�ô�count+1���±꿪ʼ
	for (int i = 0; i < 15; i++)//i������������
	{
		if ((i + Count) >= SearchCount)
			break;
		c_PrintSingleLineFlight(ID, IDcount, SearchReasult[Count + i], 230 + 30 * i, flyday);
	}
	return;
}
//Currentpage��ʾ��ǰ��ʾ�ڼ�ҳ
void C_PrintMultiFlightPage(FlightID* ID, int IDcount, int* SearchReasult, int SearchCount, int CurrentPage, int Page, int* flyday)
{
	char IntChange[8];
	clearrectangle(300, 230, 1280, 720);//��ʼǰ����ʾ�������
	IMAGE PageChoiceImage;
	loadimage(&PageChoiceImage, _T(".\\IMAGES\\PageChoice.png"), 150, 30);
	putimage(1280 - 60 - 150, 165, &PageChoiceImage);						//����ҳͼƬ
	_stprintf(IntChange, _T("%d"), CurrentPage);
	outtextxy(1280 - 60 - 120, 170, IntChange);
	outtextxy(1280 - 60 - 95, 170, "/");
	_stprintf(IntChange, _T("%d"), Page);
	outtextxy(1280 - 60 - 80, 170, IntChange);
	outtextxy(1280 - 60 - 55, 170, "ҳ");
	int Count = (CurrentPage - 1) * 15;//count��ʾ֮ǰҳ���ܼƵĺ�����������ҳ����Ӧ�ô�count+1���±꿪ʼ
	for (int i = 0; i < 15; i++)//i������������
	{
		if ((i + Count) >= SearchCount)
			break;
		C_PrintSingleLineFlight(ID, IDcount, SearchReasult[Count + i], 230 + 30 * i, flyday, Count + i);
	}
	return;
}
//��Ʊ�б���
void c_PrintSingleLineFlight(FlightID* ID, int IDcount, int i, int roll, int flyday)
{
	char DepartureAirport[50];
	char ArrivalAirport[50];
	char IntChange[5];
	int year = year_get();
	char date[100];
	MatchDate(year, flyday, date);
	MatchAirport(ID[i].DepartureAirport, DepartureAirport);
	MatchAirport(ID[i].ArrivalAirport, ArrivalAirport);
	outtextxy(390, roll, ID[i].Carrier);
	outtextxy(415, roll, ID[i].ID);
	_stprintf(IntChange, _T("%04d"), ID[i].DepartureTime);
	outtextxy(480, roll, IntChange);
	outtextxy(570, roll, DepartureAirport);
	outtextxy(790, roll, ArrivalAirport);
	outtextxy(950, roll, date);
	outtextxy(1090, roll, ID[i].AircraftType);
	_stprintf(IntChange, _T("%2d"), ID[i].TravelTimeHour);
	outtextxy(1145, roll, IntChange);
	outtextxy(1170, roll, "h");
	_stprintf(IntChange, _T("%02d"), ID[i].TravelTimeMinute);
	outtextxy(1185, roll, IntChange);
	outtextxy(1210, roll, "m");
	return;
}
//�����б���
void C_PrintSingleLineFlight(FlightID* ID, int IDcount, int i, int roll, int* flyday, int m)
{
	char DepartureAirport[50];
	char ArrivalAirport[50];
	char IntChange[5];
	int year = year_get();
	char date[100];
	MatchDate(year, flyday[m], date);
	MatchAirport(ID[i].DepartureAirport, DepartureAirport);
	MatchAirport(ID[i].ArrivalAirport, ArrivalAirport);
	outtextxy(390, roll, ID[i].Carrier);
	outtextxy(415, roll, ID[i].ID);
	_stprintf(IntChange, _T("%04d"), ID[i].DepartureTime);
	outtextxy(480, roll, IntChange);
	outtextxy(570, roll, DepartureAirport);
	outtextxy(790, roll, ArrivalAirport);
	outtextxy(950, roll, date);
	outtextxy(1090, roll, ID[i].AircraftType);
	_stprintf(IntChange, _T("%2d"), ID[i].TravelTimeHour);
	outtextxy(1145, roll, IntChange);
	outtextxy(1170, roll, "h");
	_stprintf(IntChange, _T("%02d"), ID[i].TravelTimeMinute);
	outtextxy(1185, roll, IntChange);
	outtextxy(1210, roll, "m");
	return;
}
//ת������
void CPrintProcess()
{
	IMAGE BG;
	IMAGE Process;
	char Location[100];
	char IntChange[8];
	setbkcolor(RGB(255, 255, 255));
	strcpy(Location, ".\\IMAGES\\Cprocess\\mh.png");
	loadimage(&BG, Location, 1280, 720);
	putimage(0, 0, &BG);
	for (int i = 0; i < 48; i++)
	{
		strcpy(Location, ".\\IMAGES\\Cprocess\\cprocess");
		_stprintf(IntChange, _T("%02d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".bmp");
		loadimage(&Process, Location, 0, 0);
		putimage(500, 260, &Process);
		Sleep(70);
	}
	cleardevice();
	loadimage(&BG,".\\IMAGES\\Bacgr.png", 1280, 720);
	putimage(0, 0, &BG);
	return;
}
void CPrintProcess2()
{
	IMAGE BG;
	IMAGE Process;
	char Location[100];
	char IntChange[8];
	setbkcolor(RGB(255, 255, 255));
	strcpy(Location, ".\\IMAGES\\Cprocess\\mh.png");
	loadimage(&BG, Location, 1280, 720);
	putimage(0, 0, &BG);
	for (int i = 0; i < 75; i++)
	{
		strcpy(Location, ".\\IMAGES\\Cprocess\\plane");
		_stprintf(IntChange, _T("%02d"), i);
		strcat(Location, IntChange);
		strcat(Location, ".jpg");
		loadimage(&Process, Location, 600, 600);
		putimage(400, 170, &Process);
		Sleep(30);
	}
	cleardevice();
	loadimage(&BG, ".\\IMAGES\\Bacgr.png", 1280, 720);
	putimage(0, 0, &BG);
	return;
}
void PrintCustomer(The_users* User,int id)
{
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 25;						// ��������߶�Ϊ 25
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	format.lfPitchAndFamily = FIXED_PITCH;
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	settextstyle(&format);						// ����������ʽ
	//clearrectangle(300, 230, 1280, 720);//��ʼǰ����ʾ�������
	outtextxy(1160,36,User[id].id);
	outtextxy(100, 500, User[id].id);
	char IntChange[2];
	_stprintf(IntChange, _T("%d"), User[id].Credi);
	outtextxy(160, 538, IntChange);
	char count[12];
	time_t NOW;
	tm* Local;
	NOW = time(NULL);
	Local = localtime(&NOW);
	_stprintf(count, _T("%04d"), Local->tm_year + 1900);
	outtextxy(1024-40,65, count);
	outtextxy(1080-40, 65, "��");
	_stprintf(count, _T("%02d"), Local->tm_mon + 1);
	outtextxy(1110-40, 65, count);
	outtextxy(1140-40, 65, "��");
	_stprintf(count, _T("%02d"), Local->tm_mday);
	outtextxy(1170 - 40, 65, count);
	outtextxy(1200 - 40, 65, "��");
	MatchWeekDay(Local->tm_wday, count);
	outtextxy(1190, 65, count);
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	IMAGE Pic;
	MatchPic(User[id].pic, Pic,180);
	putimage(60,200,&Pic);
}