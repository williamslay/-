#pragma once
//���ļ��洢�����Ժ���
#include"Struct.h"
#include"AdminMENU.h"
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
#include<graphics.h>
#include<easyx.h>
#include<stdlib.h>
#include<conio.h>
#pragma comment(lib,"Imm32.lib")
using namespace std;
//ʹ�ò��չ�ʽת������������
int WeekDayTransfer(int, int, int);
//�������ڶ�Ӧ����
int DateTransfer(int, int, int);
//�жϷɻ���С�ɻ����Ǵ�ɻ���С�ɻ�����1����ɻ�����2
int JudgeAircraftSize(FlightID*, int);
//���뵼�����ݿ�
int ImportFlightDatabase(FlightID* ID, char* Location);
int SaveFlightDatabase(FlightID* ID, int IDcount, char* Location);
int ImportTicketDatabase(FlightTicket DATA[][999], int IDcount, char* Location);
int SaveTicketDatabase(FlightTicket DATA[][999], int IDcount, char* Location);
int ImportUserDatabase(users p[], Passenger m[]);
int SaveUserDatabase(users p[], char* Location);
int SavePassengerDatabase(Passenger m[], char* Location);
//���Һ���ţ����ز��ҵ��������
int SearchFlightID(FlightID*, char*, int, int*, int&);
//���Һ���ɵأ����ز��ҵ��������
int SearchFlightDepartureAirport(FlightID*, char*, int, int*, int&);
//���Һ�����أ����ز��ҵ��������
int SearchFlightArrivalAirport(FlightID*, char*, int, int*, int&);
//���Һ���ɽ���أ����ز��ҵ��������
int SearchFlightDepartureAndArrivalAirport(FlightID* ID, char* Departure, char* Arrival, int IDcount, int* SearchReasult, int& SearchCount);
//�������ʱ������
//���أ�ȫ���ݿ�����/����������ݿ�����
int SortByDepartureTime(FlightID*, int, int*);
int SortByDepartureTime(FlightID* ID, int* SearchReasult, int SearchCount, int* SortReasult);
//ɾ��
//���أ�����Ӻ���ȡ��ʱʹ�õڶ���
int DeleteFlight(FlightID* ID, FlightTicket DATA[][999], int& IDcount, int Delete);
int DeleteFlight(FlightID* ID, int& IDcount, int Delete);
//������������ݣ��������ƣ���������λ�ã����������λ�ã�Ĭ����ʾ�����ݣ�
int C_InputBox(char* Input, int Limit, int x, int y, const char* Default);
//������������ݣ��������ƣ���������λ�ã����������λ�ã�������ܳ��ȣ�����߶ȣ�Ĭ����ʾ�����ݣ�
int C_InputBox(char* Input, int Limit, int x, int y, int Lsize, int Hsize, const char* Default);
//�����_��¼���棨�������ݣ��������ƣ���������λ�ã����������λ�ã�������ܳ��ȣ�����߶ȣ�Ĭ����ʾ�����ݣ�
int CR_InputBox(char* Input, int Limit, int x, int y, int Lsize, int Hsize, const char* Default);
//�����_����ʾ�ַ�_��¼���棨�������ݣ��������ƣ���������λ�ã����������λ�ã�������ܳ��ȣ�����߶ȣ�Ĭ����ʾ�����ݣ�
int CHR_InputBox(char* Input, int Limit, int x, int y, int Lsize, int Hsize, const char* Default);
//�����������
int CountFlyingDetail(FlightID* ID, FlightTicket DATA[][999], int IDcount, int wday, int yday, int* FlyingID, int& FlyCount, int& OnTimeCount, int& DelayCount, int& CancelCount);

//�˿Ͳ���
int JudgeAircraftSizeSeat(int n);
int Passengercount(The_users* users, int i);
int FirstClassTicketRemain(FlightTicket DATA[366][999], int daycount, int i, int judge);//ͷ�Ȳն�Ʊ����
int BusinessClassTicketRemain(FlightTicket DATA[366][999], int daycount, int i);//���������
int EconomyClassTicketRemain(FlightTicket DATA[366][999], int daycount, int i, int judge);
int FindTheHistoryAndOrder(FlightTicket DATA[366][999], FlightID* ID, Passenger* P, The_users* User, int i, FlyhistoryAndOrder* FO);
int REFindTheHistoryAndOrder(FlightTicket DATA[366][999], FlightID* ID, Passenger* P, The_users* User, int i, FlyhistoryAndOrder* FO);
int year_get();
char Class_get(int seat[100], int size, int i);
int price_get(FlightID* ID, int i, char Class);
int Searching(FlightID* ID, FlightTicket DATA[366][999], bookiinginformation* custom, int IDcount);
int p_Booking(FlightID* ID, FlightTicket DATA[366][999], Passenger* P, The_users* users, int i, int flyday, int flynumber);
int Refunding(FlightTicket DATA[366][999], FlyhistoryAndOrder* FO, int n);
void GetIMEString(HWND hWnd, string& str);
void C_inputCbox(char* Input, int x, int y, int Lsize, int Hsize);
int hour_get(int x);
void PicChoose(The_users* users, int id);
void flushMouseMsgBuffer();
