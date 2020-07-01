#include"StartMENU.h"
int StartMENU(users u[999], Passenger p[999])
{
	initgraph(1280, 720);	// ������ͼ���ڣ���СΪ 1280x720 ����
	cleardevice();
	setbkcolor(RGB(255, 255, 253));
	// ���ñ���ɫΪ����ɫ
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 30;						// ��������߶�Ϊ30
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	format.lfPitchAndFamily = FIXED_PITCH;
	_tcscpy_s(format.lfFaceName, _T(FONT2_EN));	// ��������ΪFONT2_EN
	settextstyle(&format);						// ����������ʽ
	IMAGE BG;
	IMAGE UserNameBox;
	IMAGE PassWordBox;
	IMAGE UserNameWrong;
	IMAGE PassWordWrong;
	loadimage(&BG, _T(".\\IMAGES\\StartMenu.png"), 1280, 720);
	loadimage(&UserNameBox, _T(".\\IMAGES\\UserNameBox.png"), 340, 60);
	loadimage(&PassWordBox, _T(".\\IMAGES\\PasswordBox.png"), 340, 60);
	loadimage(&UserNameWrong, _T(".\\IMAGES\\UserNameWrong.png"), 340, 60);
	loadimage(&PassWordWrong, _T(".\\IMAGES\\PasswordWrong.png"), 340, 60);
	putimage(0, 0, &BG);
	//���϶��ǳ������
	char UserName[50];
	char UserNameCheck = 0;
	char PassWord[50];
	int MENUchoice;
	MENUchoice = StartMENU_MENUChoose();
	while (true)
	{
		switch (MENUchoice)
		{
		case 1:
		{
			putimage(0, 0, &BG);
			putimage(470, 280, &UserNameBox);
			CR_InputBox(UserName, 40, 530, 290, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 330, 800, 330);
			UserNameCheck = 1;
			MENUchoice = StartMENU_MENUChoose();
			break;
		}
		case 2:
		{
			putimage(470, 380, &PassWordBox);
			CHR_InputBox(PassWord, 40, 530, 390, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 430, 800, 430);
			if (UserNameCheck == 0)
			{
				MENUchoice = StartMENU_MENUChoose();
			}
			else
			{
				int temp;
				temp = CheckID(UserName, PassWord, u);
				if (temp >= 0)
					return temp;
				else
				{
					putimage(470, 280, &UserNameWrong);
					putimage(470, 380, &PassWordWrong);
					UserNameCheck = 0;
					MENUchoice = StartMENU_MENUChoose();
				}
			}
			break;
		}
		case 3:
		{
			int tmp = StartMENU_RegisterMENU(u, p);
			ImportUserDatabase(u, p);
			putimage(0, 0, &BG);
			MENUchoice = StartMENU_MENUChoose();
			break;
		}
		case 4:
		{
			int tmp = StartMenu_AdminRegisterMENU(u, p);
			ImportUserDatabase(u, p);
			putimage(0, 0, &BG);
			MENUchoice = StartMENU_MENUChoose();
			break;
		}
		}
	}
}
int CheckID(char* n, char* m, users u[999])
{
	users temp;
	int count = 0;
	while (count < 999)
	{
		temp = u[count];
		if (strcmp(temp.id, n) == 0)
		{
			if (strcmp(temp.pwd, m) == 0)
			{
				if (temp.Identity == '1')
					return 0;
				if (temp.Identity == '0')
					return count;
			}
			else
				return -1;
		}
		else
			count++;
	}
	return -1;
}
int StartMENU_RegisterMENU(users u[999], Passenger p[999])
{
	users temp;
	int count = 0;
	IMAGE UserNameBox;
	IMAGE PassWordBox;
	IMAGE TELBox;
	IMAGE UserNameWrong;
	IMAGE PassWordWrong;
	IMAGE TELWrong;
	IMAGE BG_Register;
	loadimage(&UserNameBox, _T(".\\IMAGES\\UserNameBox.png"), 340, 60);
	loadimage(&PassWordBox, _T(".\\IMAGES\\PasswordBox.png"), 340, 60);
	loadimage(&TELBox, _T(".\\IMAGES\\TELBox.png"), 340, 60);
	loadimage(&BG_Register, _T(".\\IMAGES\\Register.png"), 1280, 720);
	loadimage(&UserNameWrong, _T(".\\IMAGES\\UserNameWrong.png"), 340, 60);
	loadimage(&PassWordWrong, _T(".\\IMAGES\\PasswordWrong.png"), 340, 60);
	loadimage(&TELWrong, _T(".\\IMAGES\\TELWrong.png"), 340, 60);
	char UserName[50] = "\0";
	char PassWord[50] = "\0";
	char PassWord0[50] = "\0";
	char Telephone[50] = "\0";
	putimage(0, 0, &BG_Register);
	int MENUchoice_Register = StartMENU_Register_MENUChoose();
	while (true)
	{
		switch (MENUchoice_Register)
		{
		case 1:
			putimage(470, 230, &UserNameBox);
			CR_InputBox(UserName, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 280, 800, 280);
			MENUchoice_Register = StartMENU_Register_MENUChoose();
			break;
		case 2:
			putimage(470, 300, &PassWordBox);
			CHR_InputBox(PassWord, 40, 530, 310, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 350, 800, 350);
			MENUchoice_Register = StartMENU_Register_MENUChoose();
			break;
		case 3:
			putimage(470, 370, &PassWordBox);
			CHR_InputBox(PassWord0, 40, 530, 380, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 420, 800, 420);
			if (strcmp(PassWord, PassWord0) != 0)
			{
				putimage(470, 370, &PassWordWrong);
			}
			MENUchoice_Register = StartMENU_Register_MENUChoose();
			break;
		case 4:
			putimage(470, 440, &TELBox);
			CR_InputBox(Telephone, 40, 530, 450, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 490, 800, 490);
			if (strlen(Telephone) != 11)
			{
				putimage(470, 440, &TELWrong);
			}
			MENUchoice_Register = StartMENU_Register_MENUChoose();
			break;
		case 5:
		{
			if (strlen(UserName) == 0)
			{
				putimage(470, 230, &UserNameWrong);
				MENUchoice_Register = StartMENU_Register_MENUChoose();
				break;
			}
			if (strlen(PassWord) == 0)
			{
				putimage(470, 300, &PassWordWrong);
				MENUchoice_Register = StartMENU_Register_MENUChoose();
				break;
			}
			if (strlen(PassWord0) == 0)
			{
				putimage(470, 370, &PassWordWrong);
				MENUchoice_Register = StartMENU_Register_MENUChoose();
				break;
			}
			if (strlen(Telephone) == 0)
			{
				putimage(470, 440, &TELWrong);
				MENUchoice_Register = StartMENU_Register_MENUChoose();
				break;
			}
			strcpy(temp.id, UserName);
			strcpy(temp.pwd, PassWord);
			strcpy(temp.phone, Telephone);
			temp.Identity = '0';
			FILE* fp;
			fp = fopen(".\\Data\\users.dat", "ab");
			fwrite(&temp, sizeof(users), 1, fp);
			fclose(fp);
			settextcolor(RGB(30, 144, 255));
			settextstyle(30, 0, "����");
			outtextxy(690, 170, "ע��ɹ���");
			Sleep(1000);
			return 1;
		}
		case 6:
			return -1;
		}
	}
}
int StartMenu_AdminRegisterMENU(users u[999], Passenger p[999])
{
	users temp;
	int count = 0;
	IMAGE UserNameBox;
	IMAGE PassWordBox;
	IMAGE InvitationBox;
	IMAGE UserNameWrong;
	IMAGE PassWordWrong;
	IMAGE InvationWrong;
	IMAGE BG_AdminRegister;
	loadimage(&UserNameBox, _T(".\\IMAGES\\UserNameBox.png"), 340, 60);
	loadimage(&PassWordBox, _T(".\\IMAGES\\PasswordBox.png"), 340, 60);
	loadimage(&InvitationBox, _T(".\\IMAGES\\InvitationBox.png"), 340, 60);
	loadimage(&BG_AdminRegister, _T(".\\IMAGES\\AdminRegister.png"), 1280, 720);
	loadimage(&UserNameWrong, _T(".\\IMAGES\\UserNameWrong.png"), 340, 60);
	loadimage(&PassWordWrong, _T(".\\IMAGES\\PasswordWrong.png"), 340, 60);
	loadimage(&InvationWrong, _T(".\\IMAGES\\InvitationWrong.png"), 340, 60);
	char UserName[50] = "\0";
	char PassWord[50] = "\0";
	char PassWord0[50] = "\0";
	char Invitation[50] = "\0";
	putimage(0, 0, &BG_AdminRegister);
	int MENUchoice_Register = StartMENU_AdminRegister_MENUChoose();
	while (1)
	{
		switch (MENUchoice_Register)
		{
		case 1:
			putimage(470, 230, &UserNameBox);
			CR_InputBox(UserName, 40, 530, 240, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 280, 800, 280);
			MENUchoice_Register = StartMENU_Register_MENUChoose();
			break;
		case 2:
			putimage(470, 300, &PassWordBox);
			CHR_InputBox(PassWord, 40, 530, 310, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 350, 800, 350);
			MENUchoice_Register = StartMENU_Register_MENUChoose();
			break;
		case 3:
			putimage(470, 370, &PassWordBox);
			CHR_InputBox(PassWord0, 40, 530, 380, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 420, 800, 420);
			if (strcmp(PassWord, PassWord0) != 0)
			{
				putimage(470, 370, &PassWordWrong);
			}
			MENUchoice_Register = StartMENU_Register_MENUChoose();
			break;
		case 4:
			putimage(470, 440, &InvitationBox);
			CHR_InputBox(Invitation, 40, 530, 450, 270, 40, "");
			setlinecolor(BLACK);
			line(530, 490, 800, 490);
			if (strcmp(Invitation, "B190303") != 0)
			{
				putimage(470, 440, &InvationWrong);
			}
			MENUchoice_Register = StartMENU_Register_MENUChoose();
			break;
		case 5:
		{
			if (strlen(UserName) == 0)
			{
				putimage(470, 230, &UserNameWrong);
				MENUchoice_Register = StartMENU_Register_MENUChoose();
				break;
			}
			if (strlen(PassWord) == 0)
			{
				putimage(470, 300, &PassWordWrong);
				MENUchoice_Register = StartMENU_Register_MENUChoose();
				break;
			}
			if (strlen(PassWord0) == 0)
			{
				putimage(470, 370, &PassWordWrong);
				MENUchoice_Register = StartMENU_Register_MENUChoose();
				break;
			}
			if (strlen(Invitation) == 0)
			{
				putimage(470, 440, &InvationWrong);
				MENUchoice_Register = StartMENU_Register_MENUChoose();
				break;
			}
			strcpy(temp.id, UserName);
			strcpy(temp.pwd, PassWord);
			temp.Identity = '1';
			FILE* fp;
			fp = fopen(".\\Data\\users.dat", "ab");
			fwrite(&temp, sizeof(users), 1, fp);
			fclose(fp);
			settextcolor(RGB(30, 144, 255));
			settextstyle(30, 0, "����");
			outtextxy(690, 170, "ע��ɹ���");
			Sleep(500);
			return 1;
		}
		case 6:
		{
			return -1;
		}
		}
	}
}