#include"MENUchoose.h"
int AdminMENU_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
		}
	}
}
int AdminMENU_MainMENU_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
			if (m.x > 100 && m.y > 300 && m.x < 300 && m.y < 340)//��갴�ڵ��뺽�����ݿ�����
				return 51;
			if (m.x > 100 && m.y > 350 && m.x < 300 && m.y < 390)//��갴�ڵ����Ʊ���ݿ�����
				return 52;
			if (m.x > 100 && m.y > 400 && m.x < 300 && m.y < 440)//��갴�ڵ����������ݿ�����
				return 53;
			if (m.x > 100 && m.y > 450 && m.x < 300 && m.y < 490)//��갴�ڵ�����Ʊ���ݿ�����
				return 54;
			if (m.x > 100 && m.y > 550 && m.x < 300 && m.y < 590)//��갴���˳�����������
				return 61;
			if (m.x > 100 && m.y > 600 && m.x < 300 && m.y < 640)//��갴��ֱ���˳�����
				return 62;
		}
	}
}
int AdminMENU_MainMENU_Import_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
			if (m.x > 100 && m.y > 300 && m.x < 300 && m.y < 340)//��갴�ڵ��뺽�����ݿ�����
				return 51;
			if (m.x > 100 && m.y > 350 && m.x < 300 && m.y < 390)//��갴�ڵ����Ʊ���ݿ�����
				return 52;
			if (m.x > 100 && m.y > 400 && m.x < 300 && m.y < 440)//��갴�ڵ����������ݿ�����
				return 53;
			if (m.x > 100 && m.y > 450 && m.x < 300 && m.y < 490)//��갴�ڵ�����Ʊ���ݿ�����
				return 54;
			if (m.x > 400 && m.y > 300 && m.x < 550 && m.y < 390)//��갴��ȷ�ϵ�������
				return 57;
			if (m.x > 550 && m.y > 300 && m.x < 700 && m.y < 390)//��갴��ȡ����������
				return 58;
			if (m.x > 700 && m.y > 300 && m.x < 850 && m.y < 390)//��갴���޸�·������
				return 59;
		}
	}
}

int AdminMENU_SearchMENU_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
			if (m.x > 100 && m.y > 300 && m.x < 300 && m.y < 340)//��갴�ڰ��������������
				return 11;
			if (m.x > 100 && m.y > 350 && m.x < 300 && m.y < 390)//��갴�ڰ���ɵ���������
				return 12;
			if (m.x > 100 && m.y > 400 && m.x < 300 && m.y < 440)//��갴�ڰ��������������
				return 13;
			if (m.x > 100 && m.y > 450 && m.x < 300 && m.y < 490)//��갴�ڰ��𽵵���������
				return 14;
		}
	}
}
int AdminMENU_SearchMENU_SingleFlight_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
			if (m.x > 100 && m.y > 300 && m.x < 300 && m.y < 340)//��갴�ڰ��������������
				return 11;
			if (m.x > 100 && m.y > 350 && m.x < 300 && m.y < 390)//��갴�ڰ���ɵ���������
				return 12;
			if (m.x > 100 && m.y > 400 && m.x < 300 && m.y < 440)//��갴�ڰ��������������
				return 13;
			if (m.x > 100 && m.y > 450 && m.x < 300 && m.y < 490)//��갴�ڰ��𽵵���������
				return 14;
			if (m.x > 100 && m.y > 550 && m.x < 300 && m.y < 590)//��갴��������ѯ����
				return 17;
		}
	}
}
int AdminMENU_SearchMENU_MultiFlight_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
			if (m.x > 100 && m.y > 300 && m.x < 300 && m.y < 340)//��갴�ڰ��������������
				return 11;
			if (m.x > 100 && m.y > 350 && m.x < 300 && m.y < 390)//��갴�ڰ���ɵ���������
				return 12;
			if (m.x > 100 && m.y > 400 && m.x < 300 && m.y < 440)//��갴�ڰ��������������
				return 13;
			if (m.x > 100 && m.y > 450 && m.x < 300 && m.y < 490)//��갴�ڰ��𽵵���������
				return 14;
			if (m.x > 1070 && m.y > 165 && m.x < 1100 && m.y < 195)//��갴����һҳ����
				return 15;
			if (m.x > 1190 && m.y > 165 && m.x < 1220 && m.y < 195)//��갴����һҳ����
				return 16;
			if (m.x > 460 && m.y > 200 && m.x < 540 && m.y < 230)//��갴�����ʱ����������
				return 19;
			for (int i = 0; i < 15; i++)//i������������
			{
				if (m.x > 380 && m.y > 230 + 30 * i && m.x < 1220 && m.y < 260 + 30 * i)//��갴�ھ��庽������
					return i + 101;
			}
		}
	}
}
int AdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
			if (m.x > 100 && m.y > 300 && m.x < 300 && m.y < 340)//��갴�ڰ��������������
				return 11;
			if (m.x > 100 && m.y > 350 && m.x < 300 && m.y < 390)//��갴�ڰ���ɵ���������
				return 12;
			if (m.x > 100 && m.y > 400 && m.x < 300 && m.y < 440)//��갴�ڰ��������������
				return 13;
			if (m.x > 100 && m.y > 450 && m.x < 300 && m.y < 490)//��갴�ڰ��𽵵���������
				return 14;
			if (m.x > 1190 && m.y > 165 && m.x < 1220 && m.y < 195)//��갴�ڷ�������
				return 18;
			if (m.x > 100 && m.y > 550 && m.x < 300 && m.y < 590)//��갴��������ѯ����
				return 17;
		}
	}
}

int AdminMENU_DeleteMENU_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
			if (m.x > 100 && m.y > 350 && m.x < 300 && m.y < 390)//��갴��ɾ������
				return 31;
			if (m.x > 100 && m.y > 450 && m.x < 300 && m.y < 490)//��갴��ȡ������
				return 32;
		}
	}
}

int AdminMENU_AddMENU_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.x > A_LEFT_LINE_START && m.y > 100 && m.x < A_LEFT_LINE_END && m.y < 125)//��갴�ڸ��ĺ��������
				return 201;
			if (m.x > A_LEFT_LINE_START + 20 && m.y > 125 && m.x < A_LEFT_LINE_START + 40 && m.y < 150)//��갴�ڿ���������һ����
				return 2031;
			if (m.x > A_LEFT_LINE_START + 60 && m.y > 125 && m.x < A_LEFT_LINE_START + 80 && m.y < 150)//��갴�ڿ��������ܶ�����
				return 2032;
			if (m.x > A_LEFT_LINE_START + 100 && m.y > 125 && m.x < A_LEFT_LINE_START + 120 && m.y < 150)//��갴�ڿ���������������
				return 2033;
			if (m.x > A_LEFT_LINE_START + 140 && m.y > 125 && m.x < A_LEFT_LINE_START + 160 && m.y < 150)//��갴�ڿ���������������
				return 2034;
			if (m.x > A_LEFT_LINE_START + 180 && m.y > 125 && m.x < A_LEFT_LINE_START + 200 && m.y < 150)//��갴�ڿ���������������
				return 2035;
			if (m.x > A_LEFT_LINE_START + 220 && m.y > 125 && m.x < A_LEFT_LINE_START + 240 && m.y < 150)//��갴�ڿ���������������
				return 2036;
			if (m.x > A_LEFT_LINE_START + 260 && m.y > 125 && m.x < A_LEFT_LINE_START + 280 && m.y < 150)//��갴�ڿ���������������
				return 2037;
			if (m.x > A_LEFT_LINE_START && m.y > 150 && m.x < A_LEFT_LINE_END && m.y < 175)//��갴�ڸ���ִ�ɻ�������
				return 204;
			if (m.x > A_LEFT_LINE_START && m.y > 175 && m.x < A_LEFT_LINE_END && m.y < 200)//��갴�ڸ�����ɻ�������
				return 205;
			if (m.x > A_LEFT_LINE_START && m.y > 200 && m.x < A_LEFT_LINE_END && m.y < 225)//��갴�ڸ������ʱ������
				return 206;
			if (m.x > A_LEFT_LINE_START && m.y > 225 && m.x < A_LEFT_LINE_END && m.y < 250)//��갴�ڸ��Ľ����������
				return 207;
			if (m.x > A_LEFT_LINE_START && m.y > 250 && m.x < A_LEFT_LINE_END && m.y < 275)//��갴�ڸ��Ľ���ʱ������
				return 208;
			if (m.x > A_LEFT_LINE_START && m.y > 275 && m.x < A_LEFT_LINE_START + 50 && m.y < 300)//��갴�ڸ��ķ���Сʱ����
				return 2091;
			if (m.x > A_RIGHT_TEXT_START && m.y > 275 && m.x < A_RIGHT_TEXT_START + 50 && m.y < 300)//��갴�ڸ��ķ��з�������
				return 2092;
			if (m.x > A_LEFT_LINE_START && m.y > 325 && m.x < A_LEFT_LINE_END && m.y < 350)//��갴�ڸ��Ļ�����λ����
				return 211;
			if (m.x > 140 && m.y > 400 && m.x < 240 && m.y < 440)//��갴��ȷ���������
				return 21;
			if (m.x > 240 && m.y > 400 && m.x < 340 && m.y < 440)//��갴��ȡ���������
				return 22;

		}
	}
}

int AdminMENU_ChangeMENU_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
		}
	}
}

int AdminMENU_Ticket_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 135 && m.x>190 && m.x < 290)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 135 && m.x>390 && m.x < 490)//��갴�ڲ�������
				return 1;
			if (m.y > 90 && m.y < 135 && m.x>590 && m.x < 690)//��갴���������
				return 2;
			if (m.y > 90 && m.y < 135 && m.x>790 && m.x < 890)//��갴��ɾ������
				return 3;
			if (m.y > 90 && m.y < 135 && m.x>990 && m.x < 1090)//��갴�ڸ�������
				return 4;
			if (m.x > 1070 && m.y > 165 && m.x < 1100 && m.y < 195)//��갴����һҳ����
				return 15;
			if (m.x > 1190 && m.y > 165 && m.x < 1220 && m.y < 195)//��갴����һҳ����
				return 16;
			if (m.x > 1020 && m.y > 165 && m.x < 1050 && m.y < 195)//��갴�ڷ�������
				return 18;
			for (int i = 0; i < 18; i++)//i����������������갴�ڵ�һ�е����ʱ��
			{
				if (m.x > 180 && m.y > 230 + 25 * i && m.x < 220 && m.y < 260 + 25 * i)//��갴�ھ�������
					return i + 101;
			}
			for (int i = 0; i < 18; i++)//i����������������갴�ڵ�һ�еĽ���ʱ��
			{
				if (m.x > 240 && m.y > 230 + 25 * i && m.x < 280 && m.y < 260 + 25 * i)//��갴�ھ�������
					return i + 201;
			}
			for (int i = 0; i < 18; i++)//i����������������갴�ڵڶ��е����ʱ��
			{
				if (m.x > 180 + 610 && m.y > 230 + 25 * i && m.x < 220 + 610 && m.y < 260 + 25 * i)//��갴�ھ�������
					return i + 301;
			}
			for (int i = 0; i < 18; i++)//i����������������갴�ڵڶ��еĽ���ʱ��
			{
				if (m.x > 240 + 610 && m.y > 230 + 25 * i && m.x < 280 + 610 && m.y < 260 + 25 * i)//��갴�ھ�������
					return i + 401;
			}
		}
	}
}

int StartMENU_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 280 && m.y < 340 && m.x>470 && m.x < 810)//��갴�������˺�����
				return 1;
			if (m.y > 380 && m.y < 440 && m.x>470 && m.x < 810)//��갴��������������
				return 2;
			if (m.y > 460 && m.y < 500 && m.x>470 && m.x < 620)//��갴����ͨ�û�ע������
				return 3;
			if (m.y > 460 && m.y < 500 && m.x>660 && m.x < 810)//��갴�ڹ���Ա�û�ע������
				return 4;
		}
	}
}

int StartMENU_Register_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 230 && m.y < 290 && m.x>470 && m.x < 810)//��갴�������˺�����
				return 1;
			if (m.y > 300 && m.y < 360 && m.x>470 && m.x < 810)//��갴��������������
				return 2;
			if (m.y > 370 && m.y < 430 && m.x>470 && m.x < 810)//��갴��ȷ����������
				return 3;
			if (m.y > 440 && m.y < 500 && m.x>470 && m.x < 810)//��갴�������ֻ�����
				return 4;
			if (m.y > 510 && m.y < 550 && m.x>470 && m.x < 620)//��갴��ע������
				return 5;
			if (m.y > 510 && m.y < 550 && m.x>660 && m.x < 810)//��갴��ȡ������
				return 6;
		}
	}
}

int StartMENU_AdminRegister_MENUChoose()
{
	FlushMouseMsgBuffer();
	while (true)
	{
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 230 && m.y < 290 && m.x>470 && m.x < 810)//��갴�������˺�����
				return 1;
			if (m.y > 300 && m.y < 360 && m.x>470 && m.x < 810)//��갴��������������
				return 2;
			if (m.y > 370 && m.y < 430 && m.x>470 && m.x < 810)//��갴��ȷ����������
				return 3;
			if (m.y > 440 && m.y < 500 && m.x>470 && m.x < 810)//��갴����������������
				return 4;
			if (m.y > 510 && m.y < 550 && m.x>470 && m.x < 620)//��갴��ע������
				return 5;
			if (m.y > 510 && m.y < 550 && m.x>660 && m.x < 810)//��갴��ȡ������
				return 6;
		}
	}
}

//�˿Ͳ���
int CustomMENU_MENUChoose()
{
	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 136 && m.x>220 && m.x < 325)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 136 && m.x>410 && m.x < 515)//��갴�ڶ�������
				return 1;
			if (m.y > 90 && m.y < 136 && m.x>600 && m.x < 705)//��갴�ڶ�Ʊ����
				return 2;
			if (m.y > 90 && m.y < 136 && m.x>790 && m.x < 895)//��갴����Ʊ����ǩ����
				return 3;
			if (m.y > 90 && m.y < 136 && m.x>980 && m.x < 1085)//��갴���˳���¼����
				return 4;
		}
	}
}
int CAdminMENU_SearchMENU_MultiFlight_MENUChoose()
{
	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 136 && m.x>220 && m.x < 325)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 136 && m.x>410 && m.x < 515)//��갴�ڶ�������
				return 1;
			if (m.y > 90 && m.y < 136 && m.x>600 && m.x < 705)//��갴�ڶ�Ʊ����
				return 2;
			if (m.y > 90 && m.y < 136 && m.x>790 && m.x < 895)//��갴�ڸ���ǩ����
				return 3;
			if (m.y > 90 && m.y < 136 && m.x>980 && m.x < 1085)//��갴���˳���¼����
				return 4;
			if (m.x > 1070 && m.y > 165 && m.x < 1100 && m.y < 195)//��갴����һҳ����
				return 15;
			if (m.x > 1190 && m.y > 165 && m.x < 1220 && m.y < 195)//��갴����һҳ����
				return 16;
			if (m.x > 460 && m.y > 200 && m.x < 540 && m.y < 230)//��갴�����ʱ����������
				return 19;
			for (int i = 0; i < 15; i++)//i������������
			{
				if (m.x > 380 && m.y > 230 + 30 * i && m.x < 1220 && m.y < 260 + 30 * i)//��갴�ھ��庽������
					return i + 101;
			}
		}
	}

}
int CAdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose()
{
	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 136 && m.x>220 && m.x < 325)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 136 && m.x>410 && m.x < 515)//��갴�ڶ�������
				return 1;
			if (m.y > 90 && m.y < 136 && m.x>600 && m.x < 705)//��갴�ڶ�Ʊ����
				return 2;
			if (m.y > 90 && m.y < 136 && m.x>790 && m.x < 895)//��갴����Ʊ����ǩ����
				return 3;
			if (m.y > 90 && m.y < 136 && m.x>980 && m.x < 1085)//��갴���˳���¼����
				return 4;
			if (m.x > 1190 && m.y > 165 && m.x < 1220 && m.y < 195)//��갴�ڷ�������
				return 18;
		}
	}
}
int CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose()
{
	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 136 && m.x>220 && m.x < 325)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 136 && m.x>410 && m.x < 515)//��갴�ڶ�������
				return 1;
			if (m.y > 90 && m.y < 136 && m.x>600 && m.x < 705)//��갴�ڶ�Ʊ����
				return 2;
			if (m.y > 90 && m.y < 136 && m.x>790 && m.x < 895)//��갴�ڸ���ǩ����
				return 3;
			if (m.y > 90 && m.y < 136 && m.x>980 && m.x < 1085)//��갴���˳���¼����
				return 4;
			if (m.x > 1070 && m.y > 165 && m.x < 1100 && m.y < 195)//��갴����һҳ����
				return 15;
			if (m.x > 1190 && m.y > 165 && m.x < 1220 && m.y < 195)//��갴����һҳ����
				return 16;
			if (m.x > 460 && m.y > 200 && m.x < 540 && m.y < 230)//��갴�����ʱ����������
				return 19;
			for (int i = 0; i < 15; i++)//i������������
			{
				if (m.x > 380 && m.y > 230 + 30 * i && m.x < 1160 && m.y < 260 + 30 * i)//��갴�ھ��庽������
					return i + 101;
			}
		}
	}
}
int CAdminMENU_ReMENU_MultiFlight_FlightDetail_MENUChoose()
{
	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 136 && m.x>220 && m.x < 325)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 136 && m.x>410 && m.x < 515)//��갴�ڶ�������
				return 1;
			if (m.y > 90 && m.y < 136 && m.x>600 && m.x < 705)//��갴�ڶ�Ʊ����
				return 2;
			if (m.y > 90 && m.y < 136 && m.x>790 && m.x < 895)//��갴�ڸ���ǩ����
				return 3;
			if (m.y > 90 && m.y < 136 && m.x>980 && m.x < 1085)//��갴���˳���¼����
				return 4;
			if (m.x > 1190 && m.y > 165 && m.x < 1220 && m.y < 195)//��갴�ڷ�������
				return 18;
			if (m.x > 400 && m.y > 600 && m.x < 500 && m.y < 650)//��갴����Ʊ����
				return 28;
			if (m.x > 800 && m.y > 600 && m.x < 900 && m.y < 650)//��갴�ڸ�ǩ����
				return 29;
		}
	}
}
int CAdminMENU_BookingMENU_MultiFlight_FlightDetail_MENUChoose()
{

	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 136 && m.x>220 && m.x < 325)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 136 && m.x>410 && m.x < 515)//��갴�ڶ�������
				return 1;
			if (m.y > 90 && m.y < 136 && m.x>600 && m.x < 705)//��갴�ڶ�Ʊ����
				return 2;
			if (m.y > 90 && m.y < 136 && m.x>790 && m.x < 895)//��갴�ڸ���ǩ����
				return 3;
			if (m.y > 90 && m.y < 136 && m.x>980 && m.x < 1085)//��갴���˳���¼����
				return 4;
			if (m.x > 1190 && m.y > 165 && m.x < 1220 && m.y < 195)//��갴�ڷ�������
				return 18;
			if (m.x > 500 && m.y > 600 && m.x < 600 && m.y < 655)//��갴�ڶ�Ʊ����
				return 28;
		}
	}
}
int CAdminMENU_BOOKINGMENU_MultiFlight_Passenger_MENUChoose()
{

	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 90 && m.y < 136 && m.x>220 && m.x < 325)//��갴����ҳ����
				return 0;
			if (m.y > 90 && m.y < 136 && m.x>410 && m.x < 515)//��갴�ڶ�������
				return 1;
			if (m.y > 90 && m.y < 136 && m.x>600 && m.x < 705)//��갴�ڶ�Ʊ����
				return 2;
			if (m.y > 90 && m.y < 136 && m.x>790 && m.x < 895)//��갴�ڸ���ǩ����
				return 3;
			if (m.y > 90 && m.y < 136 && m.x>980 && m.x < 1085)//��갴���˳���¼����
				return 4;
			if (m.x > 500 && m.y > 600 && m.x < 600 && m.y < 655)//��갴�ڶ�Ʊȷ������
				return 28;
			if (m.x > 700 && m.y > 600 && m.x < 800 && m.y < 655)//��갴��ȡ������
				return 29;

		}
	}
}
int CustomMENU_HOMEMENUChoose()
{
	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 500 && m.y < 550 && m.x>400 && m.x < 450)//��갴�ڼӺ���
				return 1;
			if (m.y > 90 && m.y < 136 && m.x>410 && m.x < 515)//��갴�ڶ�������
				return 6;
			if (m.y > 90 && m.y < 136 && m.x>600 && m.x < 705)//��갴�ڶ�Ʊ����
				return 7;
			if (m.y > 90 && m.y < 136 && m.x>790 && m.x < 895)//��갴����Ʊ����ǩ����
				return 8;
			if (m.y > 90 && m.y < 136 && m.x>980 && m.x < 1085)//��갴���˳���¼����
				return 9;
			if (m.y > 200 && m.y < 380 && m.x>60 && m.x < 240)//�����޸�ͷ����
				return 12;
			if (m.y > 500 && m.y < 550 && m.x>520 && m.x < 570)//��갴�ڼ�����
				return 10;
			if (m.y > 90 && m.y < 136 && m.x>220 && m.x < 325)//��갴����ҳ����
				return 11;
		}
	}
}
int CustomMENU_PlusChoose()
{
	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 250 && m.y < 290 && m.x>530 && m.x < 800)//���������
				return 2;
			if (m.y > 320 && m.y < 360 && m.x>530 && m.x < 800)//��갴�����֤����
				return 3;
			if (m.y > 390 && m.y < 430 && m.x>530 && m.x < 800)//��갴�ڵ绰������
				return 4;
			if (m.y > 600 && m.y < 640 && m.x>600 && m.x < 690)//��갴�������
				return 5;
			if (m.y > 90 && m.y < 136 && m.x>410 && m.x < 515)//��갴�ڶ�������
				return 6;
			if (m.y > 90 && m.y < 136 && m.x>600 && m.x < 705)//��갴�ڶ�Ʊ����
				return 7;
			if (m.y > 90 && m.y < 136 && m.x>790 && m.x < 895)//��갴����Ʊ����ǩ����
				return 8;
			if (m.y > 90 && m.y < 136 && m.x>980 && m.x < 1085)//��갴���˳���¼����
				return 9;
			if (m.y > 90 && m.y < 136 && m.x>220 && m.x < 325)//��갴����ҳ����
				return 11;
		}
	}
}
int SignOutMenuChioce()
{
	LOGFONT format;
	gettextstyle(&format);						// ��ȡ��ǰ��������
	format.lfHeight = 20;						// ��������߶�Ϊ 20
	format.lfQuality = PROOF_QUALITY;			// �������Ч��Ϊ�������  
	format.lfPitchAndFamily = FIXED_PITCH;
	_tcscpy_s(format.lfFaceName, _T(FONT));		// ��������ΪFONT
	settextstyle(&format);						// ����������ʽ
	clearrectangle(300, 230, 1280, 720);//��ʼǰ����ʾ�������
	outtextxy(400, 320, "��ȷ��Ҫ�˳�����Ʊϵͳ�𣿣�");
	IMAGE confirm, cancel;
	loadimage(&confirm, _T(".\\IMAGES\\choose.png"), 0, 0);
	loadimage(&cancel, _T(".\\IMAGES\\cancel.png"), 0, 0);
	putimage(500, 600, &confirm);
	putimage(700, 600, &cancel);
	while (true)
	{
		FlushMouseMsgBuffer();
		MOUSEMSG m;
		// ��ȡһ�������Ϣ
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)//������������
		{
			if (m.y > 600 && m.y < 650 && m.x>500 && m.x < 600)//ȷ��
				return 1;
			if (m.y > 600 && m.y < 650 && m.x>700 && m.x < 800)//ȡ��
				return 2;
		}
	}
}