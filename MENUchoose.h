#pragma once
//���ļ��洢��ȡ���λ�ý���ѡ��ĺ���
#include"Struct.h"
#include<iostream>
#include<graphics.h>
#include<easyx.h>
using namespace std;
int AdminMENU_MENUChoose();
int AdminMENU_MainMENU_MENUChoose();
int AdminMENU_MainMENU_Import_MENUChoose();

int AdminMENU_SearchMENU_MENUChoose();
int AdminMENU_SearchMENU_SingleFlight_MENUChoose();
int AdminMENU_SearchMENU_MultiFlight_MENUChoose();
int AdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose();

int AdminMENU_DeleteMENU_MENUChoose();

int AdminMENU_AddMENU_MENUChoose();

int AdminMENU_ChangeMENU_MENUChoose();

int AdminMENU_Ticket_MENUChoose();

int StartMENU_MENUChoose();

int StartMENU_Register_MENUChoose();

int StartMENU_AdminRegister_MENUChoose();

//�˿Ͳ���
int CustomMENU_MENUChoose();
int CAdminMENU_SearchMENU_MultiFlight_MENUChoose();
int CAdminMENU_SearchMENU_MultiFlight_FlightDetail_MENUChoose();
int CAdminMENU_ReMENU_MultiFlight_MENUChoose();
int CAdminMENU_ReMENU_MultiFlight_FlightDetail_MENUChoose();
int CAdminMENU_BOOKINGMENU_MultiFlight_MENUChoose();
int CAdminMENU_BookingMENU_MultiFlight_FlightDetail_MENUChoose();
int CAdminMENU_BOOKINGMENU_MultiFlight_Passenger_MENUChoose();
int CustomMENU_HOMEMENUChoose();
int CustomMENU_PlusChoose();
int SignOutMenuChioce();
