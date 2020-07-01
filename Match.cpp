#include"Match.h"
//�����ݿ�ƥ��ɻ�ͼƬ
void MatchPlaneImage(IMAGE& plane, char* AircraftType)
{
	int type;
	sscanf(AircraftType, "%d", &type);
	switch (type)
	{
	case 737:
	case 738:
		loadimage(&plane, _T(".\\IMAGES\\plane\\737.jpg"), 219, 146);
		return;
	case 74:
	case 744:
	case 747:
		loadimage(&plane, _T(".\\IMAGES\\plane\\747.jpg"), 219, 146);
		return;
	case 76:
		loadimage(&plane, _T(".\\IMAGES\\plane\\767.jpg"), 219, 146);
		return;
	case 77:
	case 772:
	case 773:
	case 777:
		loadimage(&plane, _T(".\\IMAGES\\plane\\777.jpg"), 219, 146);
		return;
	case 788:
	case 789:
		loadimage(&plane, _T(".\\IMAGES\\plane\\787.jpg"), 219, 146);
		return;
	case 319:
	case 320:
	case 321:
		loadimage(&plane, _T(".\\IMAGES\\plane\\320.jpg"), 219, 146);
		return;
	case 330:
	case 333:
		loadimage(&plane, _T(".\\IMAGES\\plane\\330.jpg"), 219, 146);
		return;
	case 343:
		loadimage(&plane, _T(".\\IMAGES\\plane\\340.jpg"), 219, 146);
		return;
	default:
		loadimage(&plane, _T(".\\IMAGES\\plane\\default.png"), 219, 146);
		return;
	}
}
//�����ݿ�ƥ���������ȫ�ƣ������ַ���������ַ�����
void MatchPlaneType(char* AircraftType, char* AIRCRAFTTYPE)
{
	int type;
	sscanf(AircraftType, "%d", &type);
	switch (type)
	{
	case 737:
	case 738:
		strcpy(AIRCRAFTTYPE, "����B737ϵ�зɻ�");
		return;
	case 74:
	case 744:
	case 747:
		strcpy(AIRCRAFTTYPE, "����B747ϵ�зɻ�");
		return;
	case 76:
		strcpy(AIRCRAFTTYPE, "����B767ϵ�зɻ�");
		return;
	case 77:
	case 772:
	case 773:
	case 777:
		strcpy(AIRCRAFTTYPE, "����B777ϵ�зɻ�");
		return;
	case 788:
	case 789:
		strcpy(AIRCRAFTTYPE, "����B787ϵ�зɻ�");
		return;
	case 319:
	case 320:
	case 321:
		strcpy(AIRCRAFTTYPE, "���пͳ�A320ϵ�зɻ�");
		return;
	case 330:
	case 333:
		strcpy(AIRCRAFTTYPE, "���пͳ�A330ϵ�зɻ�");
		return;
	case 343:
		strcpy(AIRCRAFTTYPE, "���пͳ�A340ϵ�зɻ�");
		return;
	case 350:
		strcpy(AIRCRAFTTYPE, "���пͳ�A350ϵ�зɻ�");
		return;
	case 380:
		strcpy(AIRCRAFTTYPE, "���пͳ�A380ϵ�зɻ�");
		return;
	default:
		strcpy(AIRCRAFTTYPE, "û���ҵ���������");
		return;
	}
}
//�����ݿ�ƥ�亽�չ�˾����ȫ�ƣ������ַ���������ַ�����
void MatchCarrier(char* carrier, char* CARRIER)
{
	if (!strcmp(carrier, "CA")) { strcpy(CARRIER, "�й����ʺ��չ�˾"); return; }
	if (!strcmp(carrier, "CZ")) { strcpy(CARRIER, "�й��Ϸ����չ�˾"); return; }
	if (!strcmp(carrier, "PN")) { strcpy(CARRIER, "���������������ι�˾"); return; }
	if (!strcmp(carrier, "MU")) { strcpy(CARRIER, "�й��������չ�˾"); return; }
	if (!strcmp(carrier, "MF")) { strcpy(CARRIER, "���ź��չ�˾"); return; }
	if (!strcmp(carrier, "SC")) { strcpy(CARRIER, "ɽ�����չ�˾"); return; }
	if (!strcmp(carrier, "EU")) { strcpy(CARRIER, "�ɶ����չ�˾"); return; }
	if (!strcmp(carrier, "FM")) { strcpy(CARRIER, "�Ϻ����չ�˾"); return; }
	if (!strcmp(carrier, "ZH")) { strcpy(CARRIER, "���ں��չ�˾"); return; }
	if (!strcmp(carrier, "X2")) { strcpy(CARRIER, "�й��»����չ�˾"); return; }
	if (!strcmp(carrier, "JR")) { strcpy(CARRIER, "�Ҹ������������޹�˾"); return; }
	if (!strcmp(carrier, "3Q")) { strcpy(CARRIER, "���Ϻ��չ�˾"); return; }
	if (!strcmp(carrier, "UQ")) { strcpy(CARRIER, "�½����չ�˾"); return; }
	if (!strcmp(carrier, "3U")) { strcpy(CARRIER, "�Ĵ����չ�˾"); return; }
	if (!strcmp(carrier, "Z2")) { strcpy(CARRIER, "��ԭ���չ�˾"); return; }
	if (!strcmp(carrier, "WU")) { strcpy(CARRIER, "�人���չ�˾"); return; }
	if (!strcmp(carrier, "G4")) { strcpy(CARRIER, "���ݺ��չ�˾"); return; }
	if (!strcmp(carrier, "HU")) { strcpy(CARRIER, "���Ϻ��չ�˾"); return; }
	if (!strcmp(carrier, "GP")) { strcpy(CARRIER, "�й�ͨ�ú��չ�˾"); return; }
	if (!strcmp(carrier, "3W")) { strcpy(CARRIER, "�Ͼ����չ�˾"); return; }
	if (!strcmp(carrier, "ZJ")) { strcpy(CARRIER, "�㽭���չ�˾"); return; }
	if (!strcmp(carrier, "G8")) { strcpy(CARRIER, "���Ǻ��չ�˾"); return; }
	if (!strcmp(carrier, "FJ")) { strcpy(CARRIER, "�������չ�˾"); return; }
	if (!strcmp(carrier, "9H")) { strcpy(CARRIER, "�������չ�˾"); return; }
	if (!strcmp(carrier, "GJ")) { strcpy(CARRIER, "�㽭�������չ�˾"); return; }
	if (!strcmp(carrier, "JD")) { strcpy(CARRIER, "�׶����չ�˾"); return; }
	if (!strcmp(carrier, "HO")) { strcpy(CARRIER, "�Ϻ����麽�չ�˾"); return; }
	if (!strcmp(carrier, "9C")) { strcpy(CARRIER, "�Ϻ����ﺽ�չ�˾"); return; }
	if (!strcmp(carrier, "GS")) { strcpy(CARRIER, "��򺽿չ�˾"); return; }
	if (!strcmp(carrier, "G5")) { strcpy(CARRIER, "���ĺ������޹�˾"); return; }
	if (!strcmp(carrier, "KA")) { strcpy(CARRIER, "�������չ�˾"); return; }
	if (!strcmp(carrier, "KE")) { strcpy(CARRIER, "�󺫺��չ�˾"); return; }
	if (!strcmp(carrier, "OZ")) { strcpy(CARRIER, "���Ǻ��չ�˾"); return; }
	if (!strcmp(carrier, "JL")) { strcpy(CARRIER, "�ձ����չ�˾"); return; }
	if (!strcmp(carrier, "NH")) { strcpy(CARRIER, "ȫ�տչ�˾"); return; }
	if (!strcmp(carrier, "SQ")) { strcpy(CARRIER, "�¼��º��չ�˾"); return; }
	if (!strcmp(carrier, "TG")) { strcpy(CARRIER, "̩�����ʺ��չ�˾"); return; }
	if (!strcmp(carrier, "NW")) { strcpy(CARRIER, "�����������չ�˾"); return; }
	if (!strcmp(carrier, "AC")) { strcpy(CARRIER, "���ô���ʺ��չ�˾"); return; }
	if (!strcmp(carrier, "UA")) { strcpy(CARRIER, "�������Ϻ��չ�˾"); return; }
	if (!strcmp(carrier, "BA")) { strcpy(CARRIER, "Ӣ�����չ�˾"); return; }
	if (!strcmp(carrier, "KL")) { strcpy(CARRIER, "�����ʼҺ��չ�˾"); return; }
	if (!strcmp(carrier, "LH")) { strcpy(CARRIER, "�¹���ɯ���չ�˾"); return; }
	if (!strcmp(carrier, "AF")) { strcpy(CARRIER, "�������չ�˾"); return; }
	if (!strcmp(carrier, "LX")) { strcpy(CARRIER, "��ʿ���չ�˾"); return; }
	if (!strcmp(carrier, "OS")) { strcpy(CARRIER, "�µ������չ�˾"); return; }
	if (!strcmp(carrier, "SU")) { strcpy(CARRIER, "����˹���ʺ��չ�˾"); return; }
	if (!strcmp(carrier, "QF")) { strcpy(CARRIER, "���޺��չ�˾"); return; }
	if (!strcmp(carrier, "AY")) { strcpy(CARRIER, "�������չ�˾"); return; }
	if (!strcmp(carrier, "AZ")) { strcpy(CARRIER, "��������չ�˾"); return; }
	if (!strcmp(carrier, "SK")) { strcpy(CARRIER, "˹������ά�Ǻ��չ�˾"); return; }
	if (!strcmp(carrier, "BI")) { strcpy(CARRIER, "�����ʼҺ��չ�˾"); return; }
	if (!strcmp(carrier, "GA")) { strcpy(CARRIER, "ӡ��������ӥ���չ�˾"); return; }
	if (!strcmp(carrier, "MI")) { strcpy(CARRIER, "�¼���ʤ�����չ�˾"); return; }
	if (!strcmp(carrier, "MH")) { strcpy(CARRIER, "�������Ǻ��չ�˾"); return; }
	if (!strcmp(carrier, "ET")) { strcpy(CARRIER, "��������Ǻ��չ�˾"); return; }
	if (!strcmp(carrier, "EZ")) { strcpy(CARRIER, "����������ʺ��չ�˾"); return; }
	if (!strcmp(carrier, "LO")) { strcpy(CARRIER, "�������չ�˾"); return; }
	if (!strcmp(carrier, "RO")) { strcpy(CARRIER, "�������Ǻ��չ�˾"); return; }
	if (!strcmp(carrier, "HY")) { strcpy(CARRIER, "���ȱ��˹̹���չ�˾"); return; }
	if (!strcmp(carrier, "VI")) { strcpy(CARRIER, "�����ӵ��������չ�˾"); return; }
	if (!strcmp(carrier, "K4")) { strcpy(CARRIER, "������˹̹���չ�˾"); return; }
	if (!strcmp(carrier, "OM")) { strcpy(CARRIER, "�ɹź��չ�˾"); return; }
	if (!strcmp(carrier, "PK")) { strcpy(CARRIER, "�ͻ�˹̹���ʺ��չ�˾"); return; }
	if (!strcmp(carrier, "PR")) { strcpy(CARRIER, "���������չ�˾"); return; }
	if (!strcmp(carrier, "RA")) { strcpy(CARRIER, "�����Ჴ�����չ�˾"); return; }
	if (!strcmp(carrier, "IR")) { strcpy(CARRIER, "���ʺ��չ�˾"); return; }
	if (!strcmp(carrier, "JD")) { strcpy(CARRIER, "�ձ�����ϵͳ���ϻẽ�չ�˾"); return; }
	if (!strcmp(carrier, "JS")) { strcpy(CARRIER, "�������չ�˾"); return; }
	if (!strcmp(carrier, "LY")) { strcpy(CARRIER, "��ɫ�к��չ�˾"); return; }
	if (!strcmp(carrier, "NX")) { strcpy(CARRIER, "���ź��չ�˾"); return; }
	if (!strcmp(carrier, "UB")) { strcpy(CARRIER, "�����ʺ��չ�˾"); return; }
	if (!strcmp(carrier, "VN")) { strcpy(CARRIER, "Խ�Ϻ��չ�˾"); return; }
	if (!strcmp(carrier, "CX")) { strcpy(CARRIER, "��̩���չ�˾"); return; }
	if (!strcmp(carrier, "EK")) { strcpy(CARRIER, "�������������������չ�˾"); return; }
	if (!strcmp(carrier, "KN")) { strcpy(CARRIER, "�й����Ϻ��չ�˾"); return; }
	strcpy(CARRIER, "û���ҵ�ƥ��ĺ��չ�˾");
	return;
}
//�����ݿ�ƥ���������ȫ�ƣ������ַ���������ַ�����
void MatchAirport(char* airport, char* AIRPORT)
{
	strncpy(airport, airport, 3);
	airport[3] = '\0';
	if (!strcmp(airport, "PEK")) { strcpy(AIRPORT, "�����׶����ʻ���"); return; }
	if (!strcmp(airport, "CAN")) { strcpy(AIRPORT, "���ݰ��ƹ��ʻ���"); return; }
	if (!strcmp(airport, "SHA")) { strcpy(AIRPORT, "�Ϻ����Ź��ʻ���"); return; }
	if (!strcmp(airport, "PVG")) { strcpy(AIRPORT, "�Ϻ��ֶ����ʻ���"); return; }
	if (!strcmp(airport, "CTU")) { strcpy(AIRPORT, "�ɶ�˫�����ʻ���"); return; }
	if (!strcmp(airport, "SZX")) { strcpy(AIRPORT, "���ڱ������ʻ���"); return; }
	if (!strcmp(airport, "KMG")) { strcpy(AIRPORT, "������ˮ���ʻ���"); return; }
	if (!strcmp(airport, "XIY")) { strcpy(AIRPORT, "�����������ʻ���"); return; }
	if (!strcmp(airport, "CKG")) { strcpy(AIRPORT, "���콭�����ʻ���"); return; }
	if (!strcmp(airport, "HGH")) { strcpy(AIRPORT, "������ɽ���ʻ���"); return; }
	if (!strcmp(airport, "XMN")) { strcpy(AIRPORT, "���Ÿ�����ʻ���"); return; }
	if (!strcmp(airport, "CSX")) { strcpy(AIRPORT, "��ɳ�ƻ����ʻ���"); return; }
	if (!strcmp(airport, "NKG")) { strcpy(AIRPORT, "�Ͼ�»�ڹ��ʻ���"); return; }
	if (!strcmp(airport, "WUH")) { strcpy(AIRPORT, "�人��ӹ��ʻ���"); return; }
	if (!strcmp(airport, "DLC")) { strcpy(AIRPORT, "�������ʻ���"); return; }
	if (!strcmp(airport, "TAO")) { strcpy(AIRPORT, "�ൺ��ͤ���ʻ���"); return; }
	if (!strcmp(airport, "SYX")) { strcpy(AIRPORT, "���Ƿ�˹��ʻ���"); return; }
	if (!strcmp(airport, "HAK")) { strcpy(AIRPORT, "�����������ʻ���"); return; }
	if (!strcmp(airport, "TSN")) { strcpy(AIRPORT, "���������ʻ���"); return; }
	if (!strcmp(airport, "HKG")) { strcpy(AIRPORT, "��۹��ʻ���"); return; }
	if (!strcmp(airport, "MFM")) { strcpy(AIRPORT, "���Ź��ʻ���"); return; }
	if (!strcmp(airport, "URC")) { strcpy(AIRPORT, "��³ľ�����"); return; }
	if (!strcmp(airport, "TPE")) { strcpy(AIRPORT, "̨����԰���ʻ���"); return; }
	if (!strcmp(airport, "NRT")) { strcpy(AIRPORT, "����������ʻ���"); return; }
	if (!strcmp(airport, "HND")) { strcpy(AIRPORT, "����������ʻ���"); return; }
	if (!strcmp(airport, "KIX")) { strcpy(AIRPORT, "����������ʻ���"); return; }
	if (!strcmp(airport, "FUK")) { strcpy(AIRPORT, "���Թ��ʻ���"); return; }
	if (!strcmp(airport, "OKA")) { strcpy(AIRPORT, "�����ǰԹ��ʻ���"); return; }
	if (!strcmp(airport, "ITM")) { strcpy(AIRPORT, "������ʻ���"); return; }
	if (!strcmp(airport, "NGO")) { strcpy(AIRPORT, "�����ݹ��ʻ���"); return; }
	if (!strcmp(airport, "ICN")) { strcpy(AIRPORT, "�׶��ʴ����ʻ���"); return; }
	if (!strcmp(airport, "GMP")) { strcpy(AIRPORT, "�׶����ֹ��ʻ���"); return; }
	if (!strcmp(airport, "PUS")) { strcpy(AIRPORT, "��ɽ�𺣹��ʻ���"); return; }
	if (!strcmp(airport, "CJU")) { strcpy(AIRPORT, "���ݵ����ʻ���"); return; }
	if (!strcmp(airport, "BKK")) { strcpy(AIRPORT, "�����������չ��ʻ���"); return; }
	if (!strcmp(airport, "DMK")) { strcpy(AIRPORT, "�����������ʻ���"); return; }
	if (!strcmp(airport, "CNX")) { strcpy(AIRPORT, "�������ʻ���"); return; }
	if (!strcmp(airport, "HKT")) { strcpy(AIRPORT, "�ռ����ʻ���"); return; }
	if (!strcmp(airport, "KUL")) { strcpy(AIRPORT, "��¡�¹��ʻ���"); return; }
	if (!strcmp(airport, "PEN")) { strcpy(AIRPORT, "�ĳǹ��ʻ���"); return; }
	if (!strcmp(airport, "BKI")) { strcpy(AIRPORT, "�Ǳӹ��ʻ���"); return; }
	if (!strcmp(airport, "MNL")) { strcpy(AIRPORT, "���������ʻ���"); return; }
	if (!strcmp(airport, "CRK")) { strcpy(AIRPORT, "�����˹��ʻ���"); return; }
	if (!strcmp(airport, "CGK")) { strcpy(AIRPORT, "�żӴ���ʻ���"); return; }
	if (!strcmp(airport, "BDO")) { strcpy(AIRPORT, "��¡���ʻ���"); return; }
	if (!strcmp(airport, "DPS")) { strcpy(AIRPORT, "���嵺�ǰ�������"); return; }
	if (!strcmp(airport, "DEL")) { strcpy(AIRPORT, "�µ�����ʻ���"); return; }
	if (!strcmp(airport, "BLR")) { strcpy(AIRPORT, "����޶����ʻ���"); return; }
	if (!strcmp(airport, "CMB")) { strcpy(AIRPORT, "�����¹��ʻ���"); return; }
	if (!strcmp(airport, "SIN")) { strcpy(AIRPORT, "�¼������˻���"); return; }
	if (!strcmp(airport, "SGN")) { strcpy(AIRPORT, "��־�����ʻ���"); return; }
	if (!strcmp(airport, "HAN")) { strcpy(AIRPORT, "���ڹ��ʻ���"); return; }
	if (!strcmp(airport, "DEL")) { strcpy(AIRPORT, "ӡ���µ���ʵػ���"); return; }
	if (!strcmp(airport, "KHI")) { strcpy(AIRPORT, "��������ʻ���"); return; }
	if (!strcmp(airport, "BOM")) { strcpy(AIRPORT, "ӡ���������"); return; }
	if (!strcmp(airport, "BLR")) { strcpy(AIRPORT, "ӡ�Ȱ���޶�����"); return; }
	if (!strcmp(airport, "KTM")) { strcpy(AIRPORT, "������ӵ���������"); return; }
	if (!strcmp(airport, "DXB")) { strcpy(AIRPORT, "�������ϰݹ��ʻ���"); return; }
	if (!strcmp(airport, "DOH")) { strcpy(AIRPORT, "������������ʻ���"); return; }
	if (!strcmp(airport, "AUH")) { strcpy(AIRPORT, "�������������Ȼ���"); return; }
	if (!strcmp(airport, "DAC")) { strcpy(AIRPORT, "�ϼ����￨����"); return; }
	if (!strcmp(airport, "JED")) { strcpy(AIRPORT, "ɳ�ذ����������������"); return; }
	if (!strcmp(airport, "CCU")) { strcpy(AIRPORT, "ӡ�ȼӶ��������"); return; }
	if (!strcmp(airport, "THR")) { strcpy(AIRPORT, "���ʵº�������"); return; }
	if (!strcmp(airport, "BAK")) { strcpy(AIRPORT, "�����ݽ��Ϳ����"); return; }
	if (!strcmp(airport, "ISB")) { strcpy(AIRPORT, "�ͻ�˹̹��˹��������"); return; }
	if (!strcmp(airport, "ASB")) { strcpy(AIRPORT, "��������ʲ���͵»���"); return; }
	if (!strcmp(airport, "DYU")) { strcpy(AIRPORT, "������˹̹���б����"); return; }
	if (!strcmp(airport, "LBD")) { strcpy(AIRPORT, "������˹̹��¼ֵ»���"); return; }
	if (!strcmp(airport, "OSS")) { strcpy(AIRPORT, "������˹˹̹��ʲ����"); return; }
	if (!strcmp(airport, "TBS")) { strcpy(AIRPORT, "��³���ǵڱ���˹����"); return; }
	if (!strcmp(airport, "MDL")) { strcpy(AIRPORT, "��������ջ���"); return; }
	if (!strcmp(airport, "MEL")) { strcpy(AIRPORT, "ī�������ʻ���"); return; }
	if (!strcmp(airport, "SYD")) { strcpy(AIRPORT, "Ϥ��ʷ��˹���ʻ���"); return; }
	if (!strcmp(airport, "BNE")) { strcpy(AIRPORT, "����˹����ʻ���"); return; }
	if (!strcmp(airport, "PER")) { strcpy(AIRPORT, "��˹���ʻ���"); return; }
	if (!strcmp(airport, "AKL")) { strcpy(AIRPORT, "�¿������ʻ���"); return; }
	if (!strcmp(airport, "LHR")) { strcpy(AIRPORT, "�׶�ϣ��˹���ʻ���"); return; }
	if (!strcmp(airport, "LGW")) { strcpy(AIRPORT, "�׶ظ����˹��ʻ���"); return; }
	if (!strcmp(airport, "STN")) { strcpy(AIRPORT, "�׶�˹̹˹�ص»���"); return; }
	if (!strcmp(airport, "LTN")) { strcpy(AIRPORT, "�׶�¬�ٻ���"); return; }
	if (!strcmp(airport, "LCY")) { strcpy(AIRPORT, "�׶س��л���"); return; }
	if (!strcmp(airport, "LPL")) { strcpy(AIRPORT, "�����ֹ��ʻ���"); return; }
	if (!strcmp(airport, "MAN")) { strcpy(AIRPORT, "����˹�ع��ʻ���"); return; }
	if (!strcmp(airport, "CDG")) { strcpy(AIRPORT, "��������ֻ���"); return; }
	if (!strcmp(airport, "ORY")) { strcpy(AIRPORT, "�����������"); return; }
	if (!strcmp(airport, "MRS")) { strcpy(AIRPORT, "�������ʻ���"); return; }
	if (!strcmp(airport, "LYS")) { strcpy(AIRPORT, "�ﰺ���ʻ���"); return; }
	if (!strcmp(airport, "TXL")) { strcpy(AIRPORT, "����̩�������"); return; }
	if (!strcmp(airport, "BER")) { strcpy(AIRPORT, "���ֲ����Ǳ�����"); return; }
	if (!strcmp(airport, "MUC")) { strcpy(AIRPORT, "Ľ��ڹ��ʻ���"); return; }
	if (!strcmp(airport, "BRE")) { strcpy(AIRPORT, "����÷����BRE"); return; }
	if (!strcmp(airport, "FRA")) { strcpy(AIRPORT, "�����˸�����"); return; }
	if (!strcmp(airport, "STR")) { strcpy(AIRPORT, "˹ͼ���ػ���"); return; }
	if (!strcmp(airport, "HAM")) { strcpy(AIRPORT, "�������ʻ���"); return; }
	if (!strcmp(airport, "NUE")) { strcpy(AIRPORT, "Ŧ�ױ�����"); return; }
	if (!strcmp(airport, "ZRH")) { strcpy(AIRPORT, "���������ʻ���"); return; }
	if (!strcmp(airport, "BRN")) { strcpy(AIRPORT, "�����ᱴ���ջ���"); return; }
	if (!strcmp(airport, "GVA")) { strcpy(AIRPORT, "�����߹��ʻ���"); return; }
	if (!strcmp(airport, "BSL")) { strcpy(AIRPORT, "���������ʻ���"); return; }
	if (!strcmp(airport, "MAD")) { strcpy(AIRPORT, "����������˹����"); return; }
	if (!strcmp(airport, "BCN")) { strcpy(AIRPORT, "�������ǰ������ػ���"); return; }
	if (!strcmp(airport, "VLC")) { strcpy(AIRPORT, "�������ǻ���"); return; }
	if (!strcmp(airport, "SVQ")) { strcpy(AIRPORT, "��ά���ǻ���"); return; }
	if (!strcmp(airport, "AMS")) { strcpy(AIRPORT, "��ķ˹�ص�ʷ���ֻ���"); return; }
	if (!strcmp(airport, "RTM")) { strcpy(AIRPORT, "¹�ص�����"); return; }
	if (!strcmp(airport, "FCO")) { strcpy(AIRPORT, "�����������ŵ��"); return; }
	if (!strcmp(airport, "MXP")) { strcpy(AIRPORT, "���������������"); return; }
	if (!strcmp(airport, "VCE")) { strcpy(AIRPORT, "����˹����"); return; }
	if (!strcmp(airport, "FLR")) { strcpy(AIRPORT, "������������"); return; }
	if (!strcmp(airport, "TRN")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "LIS")) { strcpy(AIRPORT, "��˹�����ʻ���"); return; }
	if (!strcmp(airport, "OPO")) { strcpy(AIRPORT, "�²�����ʻ���"); return; }
	if (!strcmp(airport, "CPH")) { strcpy(AIRPORT, "�籾������˹���ջ���"); return; }
	if (!strcmp(airport, "PRG")) { strcpy(AIRPORT, "������³��������"); return; }
	if (!strcmp(airport, "HEL")) { strcpy(AIRPORT, "�ն�������������"); return; }
	if (!strcmp(airport, "ATH")) { strcpy(AIRPORT, "�ŵ���ʻ���"); return; }
	if (!strcmp(airport, "ARN")) { strcpy(AIRPORT, "˹�¸��Ħ���������"); return; }
	if (!strcmp(airport, "OSL")) { strcpy(AIRPORT, "��˹½�����¶�����"); return; }
	if (!strcmp(airport, "WAW")) { strcpy(AIRPORT, "��ɳ�¿��л���"); return; }
	if (!strcmp(airport, "BUD")) { strcpy(AIRPORT, "������˹���ﺣ������"); return; }
	if (!strcmp(airport, "VIE")) { strcpy(AIRPORT, "άҲ��ʩΤ���ػ���"); return; }
	if (!strcmp(airport, "BRU")) { strcpy(AIRPORT, "��³�������ʻ���"); return; }
	if (!strcmp(airport, "LUX")) { strcpy(AIRPORT, "¬ɭ�����ʻ���"); return; }
	if (!strcmp(airport, "SVO")) { strcpy(AIRPORT, "Ī˹��л��÷���ֻ���"); return; }
	if (!strcmp(airport, "DME")) { strcpy(AIRPORT, "Ī˹�ƶ�Ī�ܶ��ֻ���"); return; }
	if (!strcmp(airport, "KBP")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "IEV")) { strcpy(AIRPORT, "�������������"); return; }
	if (!strcmp(airport, "BEG")) { strcpy(AIRPORT, "���������»���"); return; }
	if (!strcmp(airport, "BUH")) { strcpy(AIRPORT, "������˹�ػ���"); return; }
	if (!strcmp(airport, "ZAG")) { strcpy(AIRPORT, "�����ղ�����"); return; }
	if (!strcmp(airport, "LAX")) { strcpy(AIRPORT, "��ɼ���ʻ���"); return; }
	if (!strcmp(airport, "SAN")) { strcpy(AIRPORT, "ʥ���Ǹ����"); return; }
	if (!strcmp(airport, "SNA")) { strcpy(AIRPORT, "���ӿ�����"); return; }
	if (!strcmp(airport, "SFO")) { strcpy(AIRPORT, "�ɽ�ɽ���ʻ���"); return; }
	if (!strcmp(airport, "SJC")) { strcpy(AIRPORT, "ʥ��������"); return; }
	if (!strcmp(airport, "SEA")) { strcpy(AIRPORT, "����ͼ���ʻ���"); return; }
	if (!strcmp(airport, "PDX")) { strcpy(AIRPORT, "����������"); return; }
	if (!strcmp(airport, "PHX")) { strcpy(AIRPORT, "�����˹����"); return; }
	if (!strcmp(airport, "LAS")) { strcpy(AIRPORT, "��˹ά��˹����"); return; }
	if (!strcmp(airport, "SLC")) { strcpy(AIRPORT, "�κ��ǻ���"); return; }
	if (!strcmp(airport, "DEN")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "AUS")) { strcpy(AIRPORT, "��˹͡����"); return; }
	if (!strcmp(airport, "IAH")) { strcpy(AIRPORT, "��˹�ٹ��ʻ���"); return; }
	if (!strcmp(airport, "HOU")) { strcpy(AIRPORT, "��˹�ٹ��Ȼ���"); return; }
	if (!strcmp(airport, "DFW")) { strcpy(AIRPORT, "����˹����"); return; }
	if (!strcmp(airport, "MCI")) { strcpy(AIRPORT, "����˹�ǻ���"); return; }
	if (!strcmp(airport, "STL")) { strcpy(AIRPORT, "ʥ��·��˹����"); return; }
	if (!strcmp(airport, "MSY")) { strcpy(AIRPORT, "�°¶�������"); return; }
	if (!strcmp(airport, "BHM")) { strcpy(AIRPORT, "����������"); return; }
	if (!strcmp(airport, "MEM")) { strcpy(AIRPORT, "�Ϸ�˹����"); return; }
	if (!strcmp(airport, "BNA")) { strcpy(AIRPORT, "��ʲά������"); return; }
	if (!strcmp(airport, "ORD")) { strcpy(AIRPORT, "֥�Ӹ����"); return; }
	if (!strcmp(airport, "DTW")) { strcpy(AIRPORT, "�����ɻ���"); return; }
	if (!strcmp(airport, "IND")) { strcpy(AIRPORT, "ӡ�ڰ��ǲ���˹"); return; }
	if (!strcmp(airport, "CVG")) { strcpy(AIRPORT, "�����������"); return; }
	if (!strcmp(airport, "CMH")) { strcpy(AIRPORT, "���ײ�����"); return; }
	if (!strcmp(airport, "CLE")) { strcpy(AIRPORT, "������������"); return; }
	if (!strcmp(airport, "PWM")) { strcpy(AIRPORT, "����������"); return; }
	if (!strcmp(airport, "BOS")) { strcpy(AIRPORT, "��ʿ�ٻ���"); return; }
	if (!strcmp(airport, "LGA")) { strcpy(AIRPORT, "ŦԼ���ϵػ���"); return; }
	if (!strcmp(airport, "JFK")) { strcpy(AIRPORT, "ŦԼ����ϻ���"); return; }
	if (!strcmp(airport, "EWR")) { strcpy(AIRPORT, "ŦԼŦ���˻���"); return; }
	if (!strcmp(airport, "PIT")) { strcpy(AIRPORT, "ƥ�ȱ�����"); return; }
	if (!strcmp(airport, "PHL")) { strcpy(AIRPORT, "�ѳǻ���"); return; }
	if (!strcmp(airport, "DCA")) { strcpy(AIRPORT, "��ʢ�ٹ��ʻ���"); return; }
	if (!strcmp(airport, "BWI")) { strcpy(AIRPORT, "�Ͷ���ĥ����"); return; }
	if (!strcmp(airport, "IAD")) { strcpy(AIRPORT, "��ʢ�ٴ���˹����"); return; }
	if (!strcmp(airport, "CLT")) { strcpy(AIRPORT, "�����ػ���"); return; }
	if (!strcmp(airport, "ILM")) { strcpy(AIRPORT, "�������ٻ���"); return; }
	if (!strcmp(airport, "CAE")) { strcpy(AIRPORT, "���ױ��ǻ���"); return; }
	if (!strcmp(airport, "CHS")) { strcpy(AIRPORT, "���˹�ٻ���"); return; }
	if (!strcmp(airport, "ATL")) { strcpy(AIRPORT, "�����������"); return; }
	if (!strcmp(airport, "MCO")) { strcpy(AIRPORT, "���������"); return; }
	if (!strcmp(airport, "TPA")) { strcpy(AIRPORT, "̹������"); return; }
	if (!strcmp(airport, "MIA")) { strcpy(AIRPORT, "�����ܻ���"); return; }
	if (!strcmp(airport, "HNL")) { strcpy(AIRPORT, "��ū³³����"); return; }
	if (!strcmp(airport, "YVR")) { strcpy(AIRPORT, "�¸绪����"); return; }
	if (!strcmp(airport, "YYZ")) { strcpy(AIRPORT, "���׶���ʻ���"); return; }
	if (!strcmp(airport, "YUL")) { strcpy(AIRPORT, "����������³�����"); return; }
	if (!strcmp(airport, "YOW")) { strcpy(AIRPORT, "��̫�����ʻ���"); return; }
	if (!strcmp(airport, "YHZ")) { strcpy(AIRPORT, "��������˹���ʻ���"); return; }
	if (!strcmp(airport, "YYC")) { strcpy(AIRPORT, "����������ʻ���"); return; }
	if (!strcmp(airport, "YEG")) { strcpy(AIRPORT, "�����ɶٹ��ʻ���"); return; }
	if (!strcmp(airport, "TIJ")) { strcpy(AIRPORT, "�ٻ��ɹ��ʻ���"); return; }
	if (!strcmp(airport, "MEX")) { strcpy(AIRPORT, "ī������ʻ���"); return; }
	if (!strcmp(airport, "CUN")) { strcpy(AIRPORT, "�������ʻ���"); return; }
	if (!strcmp(airport, "HLD")) { strcpy(AIRPORT, "���ױ�����ɽ���ʻ���"); return; }

	if (!strcmp(airport, "ATH")) { strcpy(AIRPORT, "�ŵ����"); return; }
	if (!strcmp(airport, "BAV")) { strcpy(AIRPORT, "��ͷ����"); return; }
	if (!strcmp(airport, "BHY")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "BJS")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "BKK")) { strcpy(AIRPORT, "���Ȼ���"); return; }
	if (!strcmp(airport, "BLR")) { strcpy(AIRPORT, "����޶�����"); return; }
	if (!strcmp(airport, "BOM")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "BPX")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "CAN")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "CGO")) { strcpy(AIRPORT, "֣�ݻ���"); return; }
	if (!strcmp(airport, "CGQ")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "CHG")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "CIF")) { strcpy(AIRPORT, "������"); return; }
	if (!strcmp(airport, "CIH")) { strcpy(AIRPORT, "���λ���"); return; }
	if (!strcmp(airport, "CKG")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "CSX")) { strcpy(AIRPORT, "��ɳ����"); return; }
	if (!strcmp(airport, "CTU")) { strcpy(AIRPORT, "�ɶ�����"); return; }
	if (!strcmp(airport, "CZX")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "DAT")) { strcpy(AIRPORT, "��ͬ����"); return; }
	if (!strcmp(airport, "DAX")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "DDG")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "DEL")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "DLC")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "DNH")) { strcpy(AIRPORT, "�ػͻ���"); return; }
	if (!strcmp(airport, "DQA")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "DSN")) { strcpy(AIRPORT, "������˹����"); return; }
	if (!strcmp(airport, "DUS")) { strcpy(AIRPORT, "������������"); return; }
	if (!strcmp(airport, "DXB")) { strcpy(AIRPORT, "�ϰݻ���"); return; }
	if (!strcmp(airport, "DYG")) { strcpy(AIRPORT, "�żҽ����"); return; }
	if (!strcmp(airport, "FNJ")) { strcpy(AIRPORT, "ƽ������"); return; }
	if (!strcmp(airport, "FOC")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "FRA")) { strcpy(AIRPORT, "�����˸�����"); return; }
	if (!strcmp(airport, "FUG")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "FUK")) { strcpy(AIRPORT, "���Ի���"); return; }
	if (!strcmp(airport, "GYS")) { strcpy(AIRPORT, "��Ԫ����"); return; }
	if (!strcmp(airport, "HAK")) { strcpy(AIRPORT, "���ڻ���"); return; }
	if (!strcmp(airport, "HET")) { strcpy(AIRPORT, "���ͺ��ػ���"); return; }
	if (!strcmp(airport, "HFE")) { strcpy(AIRPORT, "�Ϸʻ���"); return; }
	if (!strcmp(airport, "HGH")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "HIJ")) { strcpy(AIRPORT, "�㵺����"); return; }
	if (!strcmp(airport, "HKG")) { strcpy(AIRPORT, "��ۻ���"); return; }
	if (!strcmp(airport, "HKT")) { strcpy(AIRPORT, "�ռ�����"); return; }
	if (!strcmp(airport, "HLD")) { strcpy(AIRPORT, "����������"); return; }
	if (!strcmp(airport, "HLH")) { strcpy(AIRPORT, "�������ػ���"); return; }
	if (!strcmp(airport, "HRB")) { strcpy(AIRPORT, "����������"); return; }
	if (!strcmp(airport, "HTA")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "HTN")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "HYN")) { strcpy(AIRPORT, "���һ���"); return; }
	if (!strcmp(airport, "INC")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "JDZ")) { strcpy(AIRPORT, "���������"); return; }
	if (!strcmp(airport, "JGS")) { strcpy(AIRPORT, "����ɽ����"); return; }
	if (!strcmp(airport, "JJN")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "JKT")) { strcpy(AIRPORT, "�żӴ����"); return; }
	if (!strcmp(airport, "JMU")) { strcpy(AIRPORT, "��ľ˹����"); return; }
	if (!strcmp(airport, "JZH")) { strcpy(AIRPORT, "��կ������"); return; }
	if (!strcmp(airport, "KHG")) { strcpy(AIRPORT, "��ʲ����"); return; }
	if (!strcmp(airport, "KHI")) { strcpy(AIRPORT, "���������"); return; }
	if (!strcmp(airport, "KHN")) { strcpy(AIRPORT, "�ϲ�����"); return; }
	if (!strcmp(airport, "KMG")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "KOW")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "KRL")) { strcpy(AIRPORT, "����ջ���"); return; }
	if (!strcmp(airport, "KTM")) { strcpy(AIRPORT, "�ӵ���������"); return; }
	if (!strcmp(airport, "KUL")) { strcpy(AIRPORT, "��¡�»���"); return; }
	if (!strcmp(airport, "KWE")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "KWL")) { strcpy(AIRPORT, "���ֻ���"); return; }
	if (!strcmp(airport, "LHW")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "LJG")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "LON")) { strcpy(AIRPORT, "�׶ػ���"); return; }
	if (!strcmp(airport, "LXA")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "LYG")) { strcpy(AIRPORT, "���Ƹۻ���"); return; }
	if (!strcmp(airport, "LZH")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "LZO")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "LZY")) { strcpy(AIRPORT, "��֥����"); return; }
	if (!strcmp(airport, "MAD")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "MEL")) { strcpy(AIRPORT, "ī��������"); return; }
	if (!strcmp(airport, "MFM")) { strcpy(AIRPORT, "���Ż���"); return; }
	if (!strcmp(airport, "MIG")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "MIL")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "MNL")) { strcpy(AIRPORT, "����������"); return; }
	if (!strcmp(airport, "MOW")) { strcpy(AIRPORT, "Ī˹�ƻ���"); return; }
	if (!strcmp(airport, "MUC")) { strcpy(AIRPORT, "Ļ��ڻ���"); return; }
	if (!strcmp(airport, "NDG")) { strcpy(AIRPORT, "�����������"); return; }
	if (!strcmp(airport, "NGB")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "NGO")) { strcpy(AIRPORT, "�����ݻ���"); return; }
	if (!strcmp(airport, "NNG")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "NTG")) { strcpy(AIRPORT, "��ͨ����"); return; }
	if (!strcmp(airport, "NYC")) { strcpy(AIRPORT, "ŦԼ����"); return; }
	if (!strcmp(airport, "NZH")) { strcpy(AIRPORT, "���������"); return; }
	if (!strcmp(airport, "OKA")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "OSA")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "PAR")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "PUS")) { strcpy(AIRPORT, "��ɽ����"); return; }
	if (!strcmp(airport, "PVG")) { strcpy(AIRPORT, "�Ϻ��ֶ�����"); return; }
	if (!strcmp(airport, "RGN")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "RKZ")) { strcpy(AIRPORT, "�տ������"); return; }
	if (!strcmp(airport, "RLK")) { strcpy(AIRPORT, "�����׶�����"); return; }
	if (!strcmp(airport, "RMQ")) { strcpy(AIRPORT, "̨�л���"); return; }
	if (!strcmp(airport, "ROM")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "SAO")) { strcpy(AIRPORT, "ʥ���޻���"); return; }
	if (!strcmp(airport, "SDJ")) { strcpy(AIRPORT, "��̨����"); return; }
	if (!strcmp(airport, "SEL")) { strcpy(AIRPORT, "�׶�����"); return; }
	if (!strcmp(airport, "SGN")) { strcpy(AIRPORT, "��־���л���"); return; }
	if (!strcmp(airport, "SHE")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "SIA")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "SIN")) { strcpy(AIRPORT, "�¼��»���"); return; }
	if (!strcmp(airport, "SPK")) { strcpy(AIRPORT, "���ϻ���"); return; }
	if (!strcmp(airport, "STO")) { strcpy(AIRPORT, "˹�¸��Ħ����"); return; }
	if (!strcmp(airport, "SWA")) { strcpy(AIRPORT, "��ͷ����"); return; }
	if (!strcmp(airport, "SYD")) { strcpy(AIRPORT, "Ϥ�����"); return; }
	if (!strcmp(airport, "SYX")) { strcpy(AIRPORT, "���ǻ���"); return; }
	if (!strcmp(airport, "SZX")) { strcpy(AIRPORT, "���ڻ���"); return; }
	if (!strcmp(airport, "TAE")) { strcpy(AIRPORT, "�������"); return; }
	if (!strcmp(airport, "TAO")) { strcpy(AIRPORT, "�ൺ����"); return; }
	if (!strcmp(airport, "TGO")) { strcpy(AIRPORT, "ͨ�ɻ���"); return; }
	if (!strcmp(airport, "TNA")) { strcpy(AIRPORT, "���ϻ���"); return; }
	if (!strcmp(airport, "TPE")) { strcpy(AIRPORT, "̨������"); return; }
	if (!strcmp(airport, "TSA")) { strcpy(AIRPORT, "̨����ɽ����"); return; }
	if (!strcmp(airport, "TSN")) { strcpy(AIRPORT, "������"); return; }
	if (!strcmp(airport, "TXN")) { strcpy(AIRPORT, "��ɽ����"); return; }
	if (!strcmp(airport, "TYN")) { strcpy(AIRPORT, "̫ԭ����"); return; }
	if (!strcmp(airport, "TYO")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "ULN")) { strcpy(AIRPORT, "�������л���"); return; }
	if (!strcmp(airport, "URC")) { strcpy(AIRPORT, "��³ľ�����"); return; }
	if (!strcmp(airport, "WEH")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "WNZ")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "WUH")) { strcpy(AIRPORT, "�人����"); return; }
	if (!strcmp(airport, "WUX")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "WXN")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "XFN")) { strcpy(AIRPORT, "�差����"); return; }
	if (!strcmp(airport, "XIC")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "XIL")) { strcpy(AIRPORT, "���ֺ��ػ���"); return; }
	if (!strcmp(airport, "XIY")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "XMN")) { strcpy(AIRPORT, "���Ż���"); return; }
	if (!strcmp(airport, "XNN")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "XUZ")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "YBP")) { strcpy(AIRPORT, "�˱�����"); return; }
	if (!strcmp(airport, "YCU")) { strcpy(AIRPORT, "�˳ǻ���"); return; }
	if (!strcmp(airport, "YIH")) { strcpy(AIRPORT, "�˲�����"); return; }
	if (!strcmp(airport, "YIW")) { strcpy(AIRPORT, "���ڻ���"); return; }
	if (!strcmp(airport, "YNJ")) { strcpy(AIRPORT, "�Ӽ�����"); return; }
	if (!strcmp(airport, "YNT")) { strcpy(AIRPORT, "��̨����"); return; }
	if (!strcmp(airport, "YNZ")) { strcpy(AIRPORT, "�γǻ���"); return; }
	if (!strcmp(airport, "YTY")) { strcpy(AIRPORT, "���ݻ���"); return; }
	if (!strcmp(airport, "YVR")) { strcpy(AIRPORT, "�¸绪����"); return; }
	if (!strcmp(airport, "ZHA")) { strcpy(AIRPORT, "տ������"); return; }
	if (!strcmp(airport, "ZUH")) { strcpy(AIRPORT, "�麣����"); return; }
	if (!strcmp(airport, "YIN")) { strcpy(AIRPORT, "��������"); return; }
	if (!strcmp(airport, "HMI")) { strcpy(AIRPORT, "���ܻ���"); return; }
	strcpy(AIRPORT, "û��ƥ�䵽������Ϣ");
	strcat(AIRPORT, airport);
	return;
}
//�����������Ϊ�����ַ����������ַ���������ַ�����
void MatchFlyDay(char* flyday, char* FLYDAY)
{
	strcpy(FLYDAY, "\0");
	if (flyday[1] == '1')strcat(FLYDAY, "һ"); else strcat(FLYDAY, "  ");
	strcat(FLYDAY, "  ");
	if (flyday[2] == '2')strcat(FLYDAY, "��"); else strcat(FLYDAY, "  ");
	strcat(FLYDAY, "  ");
	if (flyday[3] == '3')strcat(FLYDAY, "��"); else strcat(FLYDAY, "  ");
	strcat(FLYDAY, "  ");
	if (flyday[4] == '4')strcat(FLYDAY, "��"); else strcat(FLYDAY, "  ");
	strcat(FLYDAY, "  ");
	if (flyday[5] == '5')strcat(FLYDAY, "��"); else strcat(FLYDAY, "  ");
	strcat(FLYDAY, "  ");
	if (flyday[6] == '6')strcat(FLYDAY, "��"); else strcat(FLYDAY, "  ");
	strcat(FLYDAY, "  ");
	if (flyday[7] == '7')strcat(FLYDAY, "��"); else strcat(FLYDAY, "  ");
	return;
}
//���������Ϊ�����ַ����������ַ���������ַ�����
void MatchDate(int year, int  date, char* Date)//����һ�꿪ʼ�������������ַ�����ʽ������
{
	int mday[12] = { 0,31,59,90,120,151,181,212,243,273,304,334 };
	int month = 1;
	char IntChange[8];
	//_stprintf(IntChange, _T("%04d"), ID[i].DepartureTime);

	if (year % 4 == 0 && year % 100 != 0)
	{
		for (int i = 2; i < 12; i++)
			mday[i]++;
	}
	for (int i = 11; i >= 0; i--)
	{
		if ((date - mday[i]) >= 0)
		{
			month = i;
			date = date - mday[i];
			break;
		}
	}
	_stprintf(IntChange, _T("%4d"), year);
	strcpy(Date, IntChange);
	strcat(Date, "/");
	_stprintf(IntChange, _T("%2d"), month + 1);
	strcat(Date, IntChange);
	strcat(Date, "/");
	_stprintf(IntChange, _T("%2d"), date + 1);
	strcat(Date, IntChange);
	return;
}
//�������������������ַ������������ݿ⣬�������ݿ⣬���������±꣬��ѯ���ڣ������ַ�����
void MatchTimeAccuracy(FlightID* ID, FlightTicket DATA[][999], int n, int day, char* ACCURACY, COLORREF& TextColor)
{
	time_t NOW;
	tm* Local;
	int Arrival;
	int NowTime;//�������ʾ������ʱ��
	NOW = time(NULL);
	Local = localtime(&NOW);
	NowTime = Local->tm_hour * 100 + Local->tm_min;
	if (DATA[day][n].ActuralDepartureTime == 2600)
	{
		strcpy(ACCURACY, " ������");
		TextColor = BLACK;//������ɫΪ��ɫ
		return;
	}
	if (day > Local->tm_yday)//δ��������
	{
		strcpy(ACCURACY, "  �ƻ�");
		TextColor = RGB(112, 128, 144);//������ɫΪʯ���
		return;
	}
	if (day == Local->tm_yday)//����ǽ���
	{
		if (NowTime < DATA[day][n].ActuralArrivalTime)//�ɻ���δ���
		//��Ȼ����ʵ�������ǲ�������������ģ�û����ķɻ��ǲ�������ʵ�ʵ���ʱ��ġ�
		//���Ǳ���������ݿ���ֱ�ӵ����˼ƻ�ʱ����Ϊʵ��ʱ�䣬����Ҫ���ų�һ�¡�
		{
			strcpy(ACCURACY, "  �ƻ�");
			TextColor = RGB(112, 128, 144);//������ɫΪʯ���
			return;
		}
	}
	if (DATA[day][n].ActuralDepartureTime == 2500)
	{
		strcpy(ACCURACY, "����ȡ��");
		TextColor = RGB(220, 20, 60);//������ɫΪ�ɺ�
		return;
	}
	if ((ID[n].ArrivalTime % 100) >= 45)
		Arrival = ID[n].ArrivalTime + 65;
	else
		Arrival = ID[n].ArrivalTime + 15;
	if (DATA[day][n].ActuralArrivalTime > Arrival)
	{
		strcpy(ACCURACY, "��������");
		TextColor = RGB(255, 165, 0);//������ɫΪ��ɫ
		return;
	}
	strcpy(ACCURACY, "���㵽��");
	TextColor = RGB(0, 128, 0);//������ɫΪ��ɫ
	return;
}
//���������Ϊ�����ַ����������ַ���������ַ�����
void MatchWeekDay(int wday, char* WEEKDAY)
{
	switch (wday)
	{
	case 1:
		strcpy(WEEKDAY, "����һ");
		return;
	case 2:
		strcpy(WEEKDAY, "���ڶ�");
		return;
	case 3:
		strcpy(WEEKDAY, "������");
		return;
	case 4:
		strcpy(WEEKDAY, "������");
		return;
	case 5:
		strcpy(WEEKDAY, "������");
		return;
	case 6:
		strcpy(WEEKDAY, "������");
		return;
	case 0:
		strcpy(WEEKDAY, "������");
		return;
	}
}
//����λ���Ϊ�����ַ����������ַ���������ַ�����
void MatchClass(char x, char* Class)
{
	if (x == 'f')
	{
		strcpy(Class, "ͷ�Ȳ�");
		return;
	}
	if (x == 'e')
	{
		strcpy(Class, "���ò�");
		return;
	}
	if (x == 'b')
	{
		strcpy(Class, "�����");
		return;
	}
}
//����λ���Ϊ�����ַ������������֣�����ַ���
void MatchSeatY(int x, char* sy)
{
	if (x == 0)
		*sy = 'A';
	if (x == 1)
		*sy = 'B';
	if (x == 2)
		*sy = 'C';
	if (x == 3)
		*sy = 'D';
	if (x == 4)
		*sy = 'E';
	if (x == 5)
		*sy = 'G';
	if (x == 6)
		*sy = 'H';
	if (x == 7)
		*sy = 'J';
	if (x == 8)
		*sy = 'K';
	if (x == 9)
		*sy = 'L';
}
//��Ӧͷ��
void MatchPic(int x, IMAGE& pic, int big)
{
	switch (x)
	{
	case 1:
		loadimage(&pic, ".\\IMAGES\\picture\\P1.jpg", big, big);
		return;
	case 2:
		loadimage(&pic, ".\\IMAGES\\picture\\P2.jpg", big, big);
		return;
	case 3:
		loadimage(&pic, ".\\IMAGES\\picture\\P3.jpg", big, big);
		return;
	case 4:
		loadimage(&pic, ".\\IMAGES\\picture\\P4.jpg", big, big);
		return;
	case 5:
		loadimage(&pic,".\\IMAGES\\picture\\P5.jpg", big, big);
		return;
	case 6:
		loadimage(&pic,".\\IMAGES\\picture\\P6.jpg", big, big);
		return;
	case 7:
		loadimage(&pic,".\\IMAGES\\picture\\P7.jpg", big, big);
		return;
	case 8:
		loadimage(&pic,".\\IMAGES\\picture\\P8.jpg", big, big);
		return;
	case 9:
		loadimage(&pic,".\\IMAGES\\picture\\P9.jpg", big, big);
		return;
	case 10:
		loadimage(&pic, ".\\IMAGES\\picture\\P10.jpg", big, big);
		return;
	case 11:
		loadimage(&pic, ".\\IMAGES\\picture\\P11.jpg", big, big);
		return;
	case 12:
		loadimage(&pic, ".\\IMAGES\\picture\\P12.jpg", big, big);
		return;
	case 13:
		loadimage(&pic, ".\\IMAGES\\picture\\P13.jpg", big, big);
		return;
	case 14:
		loadimage(&pic, ".\\IMAGES\\picture\\P14.jpg", big, big);
		return;
	case 15:
		loadimage(&pic, ".\\IMAGES\\picture\\P15.jpg", big, big);
		return;
	}
}