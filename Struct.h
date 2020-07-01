#pragma once
//�ڱ��ļ��д洢�ṹ�嶨��ͺ궨��
//���ļ������е������ļ�����
#include<iostream>
#define PI 3.1415926536
//ȫ�������ʽ
#define FONT "����"
#define FONT2_ZH "����"
#define FONT2_EN "Consolas"

//��ӽ����ʽ
#define A_LEFT_MARGIN 60
#define A_LEFT_LINE_START 150
#define A_LEFT_LINE_END 240
#define A_RIGHT_TEXT_START 260

using namespace std;

typedef struct FlightID //���ڱ�ʾ����ţ������ֻ�����������Ϣ��
{
	char Carrier[4] = { 'X','X','X','\0' };									//���չ�˾����������д��ĸ��ʾ
	char ID[8] = { 'X','X','X','X','X','X','X','\0' };						//�����
	char FlyDay[9] = { 'X','X','X','X','X','X','X','X','\0' };				//�������ڣ�������Ϊ���ڣ����ڼ��������±��Ӧ������Ϊ���֣�������Ϊ0
	char DepartureAirport[4] = { 'X','X','X','\0' };						//���������������룬Ϊ������վ¥�ȣ����ַ�����ʽ�洢��ע���β��\0
	char ArrivalAirport[4] = { 'X','X','X','\0' };							//�ִ�����������룬Ϊ������վ¥�ȣ����ַ�����ʽ�洢��ע���β��\0
	int DepartureTime = 2500;												//����ʱ�̣�������
	int ArrivalTime = 2500;													//����ʱ�̣������롣eg 1230��12ʱ30�֣�
	int TravelTimeHour = 0;													//����ʱ��(ʱ)
	int TravelTimeMinute = 0;												//����ʱ��(��)
	int Price = 0;															//��׼Ʊ�ۣ��ɷ���ʱ���Զ��������
	char AircraftType[4] = { 'X','X','X','\0' };							//�ɻ��ͺţ������롣eg 787��350
	char Class[4] = { 'X','X','X','\0' };									//��λ�����ջ����գ�ע���β��\0��
}FlightID;

typedef struct FlightTicket //ÿ�ջ�Ʊ���
{
	short Seat[50][10] = { 0 };
	short FirstClassTicketRemain = 0;
	short BusinessClassTicketRemain = 0;
	short EconomyClassTicketRemain = 0;
	short ActuralDepartureTime = 2600;		//2400�����µ�������ʱ�䣬2500������ȡ����2600����û�������Ϣ
	short ActuralArrivalTime = 2600;		//2400�����µ�������ʱ�䣬2500������ȡ����2600����û�������Ϣ
}FlightTicket;

typedef struct Passenger
{
	char id[21];				//�˺�
	char name[11];				//����
	char IdCard[19];			//���֤����
	char TelNum[12];			//�绰����
	int i = 0;                  //�жϴ�������

}Passenger;

typedef struct The_users//�û�
{
	char id[21]="\0";			//�˺� 
	char pwd[21];				//���� 
	char Identity;				//���Ϊ�����ַ���0Ϊ�û���1Ϊ����Ա��
	char phone[12];				//�绰����
	int p[5] = { 0 };           //�洢�˻��������±�
	int Credi = 2;				//�û�����
	int pic = 1;
}users;

typedef struct FlyhistoryAndOrder// ����
{
	int flyday[100];//ÿ�����������
	int flight[100];//ÿ���ĺ����
	int seat_x[100];//ÿ������λ����
	int seat_y[100];//ÿ������λ����
	int price[100];//ÿ����Ʊ��
	char Class[100];//ÿ���Ļ���
	int id[100];//ÿ���ĳ˿�Id
}FlyhistoryAndOrder;

typedef struct bookiinginformation
{
	int year, month, day;
	int primary;
	char departure[12];
	char destination[12];
	int flyday;
	int flynumber[999];
}bookiinginformation;