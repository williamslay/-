#pragma once
//���ļ��洢����ƥ����д��ȫ�Ƶĺ���
#include"Struct.h"
#include<iostream>
#include<math.h>
#include<graphics.h>
#include<time.h>
#include<easyx.h>
using namespace std;
//�����ݿ�ƥ��ɻ�ͼƬ
void MatchPlaneImage(IMAGE& plane, char* AircraftType);
//�����ݿ�ƥ���������ȫ�ƣ������ַ���������ַ�����
void MatchPlaneType(char* AircraftType, char* AIRCRAFTTYPE);
//�����ݿ�ƥ�亽�չ�˾����ȫ�ƣ������ַ���������ַ�����
void MatchCarrier(char* carrier, char* CARRIER);
//�����ݿ�ƥ���������ȫ�ƣ������ַ���������ַ�����
void MatchAirport(char* airport, char* AIRPORT);
//�����������Ϊ�����ַ����������ַ���������ַ�����
void MatchFlyDay(char* flyday, char* FLYDAY);
//���������Ϊ�����ַ����������ַ���������ַ�����
void MatchDate(int year, int date, char* Date);
//�������������������ַ������������ݿ⣬�������ݿ⣬���������±꣬��ѯ���ڣ������ַ�����
void MatchTimeAccuracy(FlightID* ID, FlightTicket DATA[][999], int n, int day, char* ACCURACY, COLORREF& TextColor);
//���������Ϊ�����ַ����������ַ���������ַ�����
void MatchWeekDay(int wday, char* WEEKDAY);
//����λ���Ϊ�����ַ����������ַ�������ַ�����
void MatchClass(char x, char* Class);
//����λ���Ϊ�����ַ������������֣�����ַ���
void MatchSeatY(int x, char* sy);
//��Ӧͷ��
void MatchPic(int x, IMAGE& pic, int big);