#pragma once
//���ļ��洢��ʾ���ݵĺ���
#include"MENUchoose.h"
#include"Struct.h"
#include"Match.h"
#include"Function.h"
#include<time.h>
#include<iostream>
#include<graphics.h>
#include<easyx.h>			// ����ͼ�ο�ͷ�ļ�
#include<conio.h>
#include<string>
#include <synchapi.h> 
#include<stdlib.h>
#include<Windows.h>
using namespace std;
//���ض���1280*720
void PrintLoading();
void C_PrintLoading();
//�˳������Ҳ��Զ�����1280*720����
void PrintExit();
//�˳��������Զ�����1280*720����
void PrintExit_AutoSAVE(FlightID* ID, FlightTicket DATA[][999], int IDcount);
//�����ж���
void PrintProcess();
//��ӡ�������ߵ���ϸ��Ϣ:��ҳ�������������飬��Ҫ��ӡ����������±꣩
void PrintFlightDetail(FlightID* ID, FlightTicket DATA[][999], int IDcount, int i);
//��ӡ�������ߣ������������飬��Ҫ��ӡ����������±꣩
int PrintSingleFlight(FlightID* ID, FlightTicket DATA[][999], int IDcount, int i);
//��ҳ��ӡ������ߣ������������飬�������ݼ���������������飬�������������
int PrintMultiFlight(FlightID* ID, FlightTicket DATA[][999], int IDcount, int* SearchReasult, int SearchCount);
//��ҳ��ӡʱ�ı���ͷ����
void PrintFlightTitle();
//��ҳ��ӡʱ�Ĵ�ӡһҳ�������ݣ������������飬�������ݼ���������������飬���������������ǰҳ������ҳ����
void PrintMultiFlightPage(FlightID* ID, FlightTicket DATA[][999], int IDcount, int* SearchReasult, int SearchCount, int CurrentPage, int Page);
//��ӡ�������ߵ���ϸ��Ϣ:һ�У������������飬�������ݼ�������Ҫ��ӡ����������±꣬����:xλ�ã�
void PrintSingleLineFlight(FlightID* ID, FlightTicket DATA[][999], int IDcount, int i, int roll);
//������ҳ�·���ӡ������������
void PrintTimeAccuracyBar(FlightID* ID, FlightTicket DATA[][999], int i);
//��ӡÿ�ջ�Ʊҳ������
void PrintTicketTitle();
//��ӡÿ�ջ�Ʊ��ϸ��Ϣ
int PrintTicket(FlightID* ID, FlightTicket DATA[][999], int n);
//��ӡÿ�ջ�Ʊ��ϸ��Ϣ:��ҳ
void PrintTicketPage(FlightID* ID, FlightTicket DATA[][999], int* Fly, int n, int Page, int CurrentPage, int FlyDayCountAll);
//��ӡ����
void PrintBG(int IDcount);
//��ӡ��ҳ����
void PrintHomeBG(int IDcount);
//��ӡ����ҳ����
void PrintSearchBG(int IDcount);
//��ӡɾ��ҳ����
void PrintDeleteBG(int IDcount);

//�˿Ͳ���
void c_PrintFlightDetail(FlightID* ID, FlyhistoryAndOrder* FO, int IDcount, int i, int n, Passenger* p);
void b_PrintFlightDetail(FlightID* ID, FlightTicket DATA[366][999], int IDcount, int i, int m);
void PrintRES();
void PrintORS();
void PrintRBS();
void PrintORF();
void PrintDORF();
void PrintCORF();
int C_PrintMultiFlight(FlightID* ID, FlyhistoryAndOrder* FO, int IDcount, int* SearchReasult, int SearchCount, int* flyday, Passenger* p);
int re_printmultiflight(FlightID* ID, FlightTicket DATA[366][999], FlyhistoryAndOrder* FO, Passenger* P, The_users* User, int IDcount, int* SearchReasult, int SearchCount, int* flyday, int p_id, bookiinginformation* custom);
int b_printmultiflight(FlightID* ID, FlightTicket DATA[366][999], Passenger* P, The_users* User, int IDcount, int* SearchReasult, int SearchCount, int flyday, int p_id);
int rb_printmultiflight(FlightID* ID, FlightTicket DATA[366][999], Passenger* P, The_users* User, int IDcount, int* SearchReasult, int SearchCount, int flyday, int p_id);
void c_PrintFlightTitle();
void c_PrintMultiFlightPage(FlightID* ID, int IDcount, int* SearchReasult, int SearchCount, int CurrentPage, int Page, int flyday);
void C_PrintMultiFlightPage(FlightID* ID, int IDcount, int* SearchReasult, int SearchCount, int CurrentPage, int Page, int* flyday);
void c_PrintSingleLineFlight(FlightID* ID, int IDcount, int i, int roll, int flyday);
void C_PrintSingleLineFlight(FlightID* ID, int IDcount, int i, int roll, int* flyday, int m);
void CPrintProcess();
void CPrintProcess2();
void PrintCustomer(The_users* User, int id);
