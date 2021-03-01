#include <iostream>
#include <ctime>
#include <iomanip>
#include <conio.h>
#include <string>
#include <windows.h>
#define KOLVO_ENEMY_MAX 4
#define KOLVO_ENEMY_MIN 1
#define RANDOM_MAX 7
#define RANDOM_MIN 1
#define RANDOM_KOM_MAX 5
#define RANDOM_KOM_MIN 1
#define RANDOM_KOM_MAX_A_D 3
#define RANDOM_KOM_MIN_A_D 2
#define RANDOM_DOP_MAX 100
#define RANDOM_DOP_MIN 1
#define RANDOM_WHAT_THIS_MAX 100
#define RANDOM_WHAT_THIS_MIN 90
#define RANDOM_CHANCE_KAMNEY_MAX 100
#define RANDOM_CHANCE_KAMNEY_MIN 1
#define RANDOM_CHANCE_SYNDYK_MAX 100
#define RANDOM_CHANCE_SYNDYK_MIN 1
#define RANDOM_GOLD_MAX 20
#define RANDOM_GOLD_MIN 1
#define RANDOM_XP_MAX 5
#define RANDOM_XP_MIN 1
#define RANDOM_OPEN_SYNDYK_MAX 30
#define RANDOM_OPEN_SYNDYK_MIN 5
#define RANDOM_ARTEFACT_MAX 5
#define RANDOM_ARTEFACT_MIN 1
#define RANDOM_yvorot_MAX 100
#define RANDOM_yvorot_MIN 1
#define RANDOM_rolvo_magaz_MAX 3
#define RANDOM_rolvo_magaz_MIN 1
#define RANDOM_ZAD_MAX 15
#define RANDOM_ZAD_MIN 10
#define RANDOM_ZAD_NAG_MAX 30
#define RANDOM_ZAD_NAG_MIN 25

using namespace std;

void LVL_UP(int LVL, int XP, int GG, int& CHET_LVL, int CLASS, int& mrazota_1, int& mrazota_2, int& mrazota_3, string& mrazota_1_NAZ, string& mrazota_2_NAZ, string& mrazota_3_NAZ, int& XAR_LVL, int& SILA, int& LOVKOST, int& INTELEACT);
void BOSS(int ETAJI, int& SPOS_1, int& SPOS_2, int& CHET_REZ, int& SPOS_3, double& EFFECT_DEF, double& EFFECT_DEF_MAG, double& EFFECT_DEF_TIC, int& HEALS_MANEK, int& YGOROT, int& MAX_BEZBAGH_MANEK, int& GOLD_ENEMY, int& XP_ENEMY, string& IMA_MONS, int& STRONGS_MANEK_BOSS);
void BITVA_BOSS(int& HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int& BOMBS, int& STRELA, int& HP_POUCHEN, double BUFF_YR, double BUFF_DEF, int& SUKA_1, int& SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ, int& GOLD, int& XP, int& LVL, int& GG, int& CHET_LVL, int& XAR_LVL, int ETAJI);
void ENEMY(int ETAJI, int& SPOS_1, int& SPOS_2, int& CHET_REZ, int& SPOS_3, double& EFFECT_DEF, double& EFFECT_DEF_MAG, double& EFFECT_DEF_TIC, int& HEALS_MANEK, int& YGOROT, int& MAX_BEZBAGH_MANEK, int& GOLD_ENEMY, int& XP_ENEMY, string& IMA_MONS, int& STRONGS_MANEK_EN, int& monster);
void BITVA(int& HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int& BOMBS, int& STRELA, int& HP_POUCHEN, double BUFF_YR, double BUFF_DEF, int& SUKA_1, int& SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ, int& GOLD, int& XP, int& LVL, int& GG, int& CHET_LVL, int& XAR_LVL, int ETAJI);
void SYNDYK(int& KEYS, int& GOLD, int& pyrdyk, int& ZAPCHASTI);
void ARTEFACT(int& artefus, string& artef, string nomer_1, string nomer_2, int& nomer_artf);
void BITVA_FALSE(int HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int BOMBS, int STRELA, int HP_POUCHEN, double BUFF_YR, double BUFF_DEF, int SUKA_1, int SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ);
void BITVA_ARENA(int& HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int& BOMBS, int& STRELA, int& HP_POUCHEN, double BUFF_YR, double BUFF_DEF, int& SUKA_1, int& SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ, int& GOLD, int& XP, int& LVL, int& GG, int& CHET_LVL, int& XAR_LVL);
void ARENA_SELL(int& HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int& BOMBS, int& STRELA, double BUFF_YR, double BUFF_DEF, int& HP_POUCHEN, int& SUKA_1, int& SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int& GOLD, int& XP, int& LVL, int& GG, int& CHET_LVL, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ, int& XAR_LVL);
void BARDEL_SELL(int& GOLD, int& MAX_HEALS, int& HEALS, double& BUFF_DEF, double& BUFF_YR, int& ZADANIA, int& ZADANIA_GOT, int& SUKA_1, int& SUKA_2);
void KYZNECA_SELL(int& BRON_1, int& BRON_2, int& BRON_3, int& BRON_4, int& BRON_5, int& GOLD, int& STRELA, int& KEYS, int& BOMBS, int& ZAPCHASTI, int& SELL_BRON_1_ZAP, int& SELL_BRON_2_ZAP, int& SELL_BRON_3_ZAP, int& SELL_BRON_4_ZAP, int& SELL_BRON_5_ZAP, int& SELL_BOMBS_ZAP, int& SELL_KEYS_ZAP, int& SELL_STRELA_ZAP, double& BRON_1_1, double& BRON_2_1, double& BRON_3_1, double& BRON_4_1, double& BRON_5_1);
void MAGAZIN_SELL(int& GOLD, int& KEYS, int& BOMBS, int& HP_POUCHEN, int& ZAPCHASTI, int& STRELA, int& SELL_KEYS_KOL, int& SELL_BOMBS_KOL, int& SELL_HP_POUCHEN_KOL, int& SELL_ZAPCHASTI_KOL, int& SELL_STRELA_KOL);
void MENY(string& IMA);
void VIBOR_CLASSA(int& INTELEACT, int& SILA, int& LOVKOST, int& CLASS, int& mas_sposob_1, int& mas_sposob_2, int& mas_sposob_3, int& mas_sposob_4, int& mas_sposob_5, int& mas_sposob_6);
void PRAVILA();

void BOSS(int ETAJI, int& SPOS_1, int& SPOS_2, int& CHET_REZ, int& SPOS_3, double& EFFECT_DEF, double& EFFECT_DEF_MAG, double& EFFECT_DEF_TIC, int& HEALS_MANEK, int& YGOROT, int& MAX_BEZBAGH_MANEK, int& GOLD_ENEMY, int& XP_ENEMY, string& IMA_MONS, int& STRONGS_MANEK_BOSS)
{
	if (ETAJI == 0)
	{
		string IMA_MONS = "Забытый рыцарь";
		SPOS_1 = 20;
		SPOS_2 = 5;
		SPOS_3 = 30;
		EFFECT_DEF = 0.5;
		EFFECT_DEF_MAG = 0.5;
		EFFECT_DEF_TIC = 0.5;
		HEALS_MANEK = 75;
		STRONGS_MANEK_BOSS = 25;
		YGOROT = 30;
		MAX_BEZBAGH_MANEK = 10;
		GOLD_ENEMY = rand() % (50 - 1 + 1) + 1;
		XP_ENEMY = rand() % (50 - 1 + 1) + 1;
	}
	if (ETAJI == 0)
	{
		string IMA_MONS = "Безумный коллекционер";
		SPOS_1 = 25;
		SPOS_2 = 7;
		SPOS_3 = 35;
		EFFECT_DEF = 0.5;
		EFFECT_DEF_MAG = 0.5;
		EFFECT_DEF_TIC = 0.5;
		HEALS_MANEK = 90;
		STRONGS_MANEK_BOSS = 30;
		YGOROT = 40;
		MAX_BEZBAGH_MANEK = 10;
		GOLD_ENEMY = rand() % (70 - 1 + 1) + 1;
		XP_ENEMY = rand() % (70 - 1 + 1) + 1;
	}
	if (ETAJI == 0)
	{
		string IMA_MONS = "Король Забытого Королевства";
		SPOS_1 = 35;
		SPOS_2 = 9;
		SPOS_3 = 45;
		EFFECT_DEF = 0.5;
		EFFECT_DEF_MAG = 0.5;
		EFFECT_DEF_TIC = 0.5;
		HEALS_MANEK = 100;
		STRONGS_MANEK_BOSS = 35;
		YGOROT = 45;
		MAX_BEZBAGH_MANEK = 10;
		GOLD_ENEMY = rand() % (90 - 1 + 1) + 1;
		XP_ENEMY = rand() % (90 - 1 + 1) + 1;
	}
	if (ETAJI == 0)
	{
		string IMA_MONS = "Император Демонов";
		SPOS_1 = 40;
		SPOS_2 = 12;
		SPOS_3 = 50;
		EFFECT_DEF = 0.5;
		EFFECT_DEF_MAG = 0.5;
		EFFECT_DEF_TIC = 0.5;
		HEALS_MANEK = 125;
		STRONGS_MANEK_BOSS = 40;
		YGOROT = 50;
		MAX_BEZBAGH_MANEK = 10;
		GOLD_ENEMY = rand() % (100 - 1 + 1) + 1;
		XP_ENEMY = rand() % (100 - 1 + 1) + 1;
	}
	if (ETAJI == 0)
	{
		string IMA_MONS = "Леха";
		SPOS_1 = 50;
		SPOS_2 = 15;
		SPOS_3 = 60;
		EFFECT_DEF = 0.5;
		EFFECT_DEF_MAG = 0.5;
		EFFECT_DEF_TIC = 0.5;
		HEALS_MANEK = 150;
		STRONGS_MANEK_BOSS = 50;
		YGOROT = 75;
		MAX_BEZBAGH_MANEK = 6;
		GOLD_ENEMY = rand() % (150 - 1 + 1) + 1;
		XP_ENEMY = rand() % (150 - 1 + 1) + 1;
	}
}
void BITVA_BOSS(int& HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int& BOMBS, int& STRELA, int& HP_POUCHEN, double BUFF_YR, double BUFF_DEF, int& SUKA_1, int& SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ, int& GOLD, int& XP, int& LVL, int& GG, int& CHET_LVL, int& XAR_LVL, int ETAJI)
{
	cout << "Вы встретились с чертовски сильным противником! Кто выйдет победителем из этой битвы?!" << endl;
	cin.get();
	system("cls");
	int SPOS_1;
	int SPOS_2;
	int CHET_REZ;
	int SPOS_3;
	double EFFECT_DEF;
	double EFFECT_DEF_MAG;
	double EFFECT_DEF_TIC;
	int HEALS_MANEK;
	int STRONGS_MANEK;
	int YGOROT;
	int MAX_BEZBAGH_MANEK;
	int GOLD_ENEMY;
	int XP_ENEMY;
	string IMA_MONS;
	int STRONGS_MANEK_BOSS;
	BOSS(ETAJI, SPOS_1, SPOS_2, CHET_REZ, SPOS_3, EFFECT_DEF, EFFECT_DEF_MAG, EFFECT_DEF_TIC, HEALS_MANEK, YGOROT, MAX_BEZBAGH_MANEK, GOLD_ENEMY, XP_ENEMY, IMA_MONS, STRONGS_MANEK_BOSS);
	int BEZBAGH_MANEK = 0;
	int chet_bitva_1 = 0;
	int chet_bitva_2 = 0;
	int KAYK = 0;
	int SUMER = 0;
	int GTRH_1 = 0;
	int GTRH_2 = 0;
	int PROY_DAT = 0;
	int HEALS_MANEK_MAX = HEALS_MANEK;
	bool PRAV = false;
	int KOLIK = 0;
	do {
		if (HEALS <= 0)
		{
			system("cls");
			cout << "Вы мертвы. Это было неплохое приключение." << endl;
			cin.get();
			exit(0);
		}
		if (HEALS_MANEK <= 0)
		{
			system("cls");
			cout << "Вы победили!" << endl;
			cout << "Золото получено " << GOLD_ENEMY << endl;
			cout << "Опыта получено " << XP_ENEMY << endl;
			GOLD += GOLD_ENEMY;
			XP += XP_ENEMY;
			if (XP >= 25 * GG)
			{
				XP = XP - 25 * GG;
				GG++;
				LVL++;
				if (LVL <= 10)
				{
					CHET_LVL++;
				}
				XAR_LVL += 2;
			}
			cin.get();
			break;
		}
	SUKA:
		PROY_DAT = rand() % (4 - 1 + 1) + 1;
		int prot = 0;
		if (PROY_DAT == 4 && BEZBAGH_MANEK >= 2)
		{
			prot = 1;
		}
		if (PROY_DAT == 4 && BEZBAGH_MANEK < 2)
		{
			goto SUKA;
		}
	REV:
	AGAGAR:
	SHIT:
		system("cls");
		cout << "Жизни: " << MAX_HEALS << "/" << HEALS << endl;
		cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
		cout << IMA_MONS << endl;
		cout << "Жизни врага: " << HEALS_MANEK_MAX << "/" << HEALS_MANEK << endl;
		cout << "Очки Безбашенности врага: " << MAX_BEZBAGH_MANEK << "/" << BEZBAGH_MANEK << endl;
		cout << "A - удар, B - уворот, C - защита, D - использовать умения героя, E - использовать артефакт, F - использовать расходники" << endl;
		if (prot == 1)
		{
			cout << "Противник собирается использовать способность! Будте осторожны!" << endl;
		}
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'C':
			chto_eto = 3;
		case 'D':
			chto_eto = 4;
			break;
		case 'E':
			chto_eto = 5;
			break;
		case 'F':
			chto_eto = 6;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		case 'c':
			chto_eto = 3;
			break;
		case 'd':
			chto_eto = 4;
			break;
		case 'e':
			chto_eto = 5;
			break;
		case 'f':
			chto_eto = 6;
			break;
		}
		if (chto_eto == 0)
		{
			system("cls");
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
			goto AGAGAR;
		}
		if (chto_eto == 1)
		{
			int kyky = 0;
			int YRON_SEI_1;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			system("cls");
			if (GTRH_1 == 1)
			{
				system("cls");
				cout << "Противник смог увернуться и контратаковал вас!" << endl;
				cin.get();
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK_BOSS - (STRONGS_MANEK_BOSS * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK_BOSS - (STRONGS_MANEK_BOSS * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2;
				HEALS -= YRON_SEI_2;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона" << endl;
				cin.get();
				GTRH_1 = 0;
				PROY_DAT = rand() % (4 - 1 + 1) + 1;
				chet_bitva_1++;
				chet_bitva_2++;
				continue;
			}
			if (GTRH_2 == 1)
			{
				system("cls");
				cout << "Противник мог защититься и блокировал большую часть урона!" << endl;
				cin.get();
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				YRON_SEI_1 = YRON_SEI_1 / 2;
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				BEZBAGH++;
				GTRH_2 = 0;
				PROY_DAT = rand() % (4 - 1 + 1) + 1;
				chet_bitva_1++;
				chet_bitva_2++;
				continue;
			}
			if (GTRH_2 == 0 || GTRH_1 == 0)
			{
				system("cls");
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		if (chto_eto == 2)
		{
			system("cls");
			int kyky = 0;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			int Chance_yvorot = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvorot <= YVOROT)
			{
				system("cls");
				cout << "Вы смогли увернуться от атаки и даже контратакавали врага! Вот это ловкость!" << endl;
				cin.get();
				int YRON_SEI_1;
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				KAYK = 1;
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
			else
			{
				system("cls");
				cout << "Какая жалость! Вы постигли неудачу и по вам все равно попали!" << endl;
				cin.get();
				KAYK = 0;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		if (chto_eto == 3)
		{
			system("cls");
			int Chance_zashiti = rand() % (100 - 1 + 1) + 1;
			if (Chance_zashiti >= 5)
			{
				system("cls");
				cout << "Вы успешно защилитись от большей части урона!" << endl;
				cin.get();
				SUMER = 1;
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
			else
			{
				system("cls");
				cout << "Ух, сегодня явно не ваш день... вы не смогли защититься." << endl;
				cin.get();
				SUMER = 0;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		int KLIK = 0;
		if (chto_eto == 4)
		{
			system("cls");
			do {
				cout << "Какую способность хотите использовать?" << endl;
				cout << "Для использования первой необходимо две ОБ, второй четыре ОБ, третий шесть ОБ" << endl;
				cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
				cout << "У вас сейчас есть: " << mrazota_1_NAZ << ", " << mrazota_2_NAZ << ", " << mrazota_3_NAZ << endl;
				cout << "Нажмите 1, 2, 3 для использования соответственных способностей или A для возвращение в меню боя!" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case '3':
					chto_eto_2 = 3;
					break;
				case 'A':
					chto_eto_2 = 4;
					break;
				case 'a':
					chto_eto_2 = 4;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1 && BEZBAGH >= 2 && mrazota_1 != 0)
				{
					if (mrazota_1 == 1)
					{
						system("cls");
						cout << "Вы используете свою первую способность Чудовищный разрез! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						system("cls");
						cout << "Удар нанес двадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 20;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 2)
					{
						system("cls");
						cout << "Вы используете свою первую способность Двойной укол! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						int ykol_1 = rand() % (15 - 1 + 1) + 1;
						int ykol_2 = rand() % (15 - 1 + 1) + 1;
						system("cls");
						cout << "Первый удар наносит " << ykol_1 << ", а второй " << ykol_2 << endl;
						cin.get();
						HEALS_MANEK -= ykol_1;
						HEALS_MANEK -= ykol_2;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 7)
					{
						system("cls");
						cout << "Вы используете свою первую способность Огненый кулак <Ейс>! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						system("cls");
						cout << "Удар нанес двадцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 25;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 8)
					{
						system("cls");
						cout << "Вы используете свою первую способность Ледяные когти <Пет Шоп>! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						int ykol_1 = rand() % (8 - 1 + 1) + 1;
						int ykol_2 = rand() % (8 - 1 + 1) + 1;
						int ykol_3 = rand() % (8 - 1 + 1) + 1;
						int ykol_4 = rand() % (8 - 1 + 1) + 1;
						system("cls");
						cout << "Первый коготь наносит " << ykol_1 << ", второй " << ykol_2 << ", третий " << ykol_3 << ", четвертый " << ykol_4 << endl;
						cin.get();
						HEALS_MANEK -= ykol_1;
						HEALS_MANEK -= ykol_2;
						HEALS_MANEK -= ykol_3;
						HEALS_MANEK -= ykol_4;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 13)
					{
						system("cls");
						cout << "Вы используете свою первую способность Удар щитом! И тем самым наносите противнику серьезные увечья, а так же оглушаете противника, что позволяет сделать еще один ход!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли десять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 10;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						goto SHIT;
					}
					if (mrazota_1 == 14)
					{
						system("cls");
						cout << "Вы используете свою первую способность Рев загного зверя! И тем самым восстанавливаете себе немного жизней, а так же пугаете противника, что позволяет сделать еще один ход!" << endl;
						cin.get();
						system("cls");
						cout << "Вы восстановили пятнадцать жизней!" << endl;
						cin.get();
						HEALS += 15;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						goto REV;
					}
				}
				if (chto_eto_2 == 2 && BEZBAGH >= 4 && mrazota_2 != 0)
				{
					if (mrazota_2 == 3)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Клык змеи! И тем самым отравляете на пять ходов своего противника!" << endl;
						cin.get();
						KLIK = 5;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 4)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Блюр! И тем самым уворачиваетесь от любой атаке, кроме магических!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 9)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Догматы Истины! И тем самым восстанавливаете себе здоровье, а так же блокируете некоторую часть урона, если противник вас бьет!" << endl;
						cin.get();
						system("cls");
						cout << "Вы восстановили двадцать жизней!" << endl;
						cin.get();
						HEALS += 20;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						SUMER = 1;
						break;
					}
					if (mrazota_2 == 10)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Шторвомой Ураган <Райдзин>! И тем самым наносите противнику колоссальный урон!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли противнику тридцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 35;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 15)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Ярость берсерка! И тем самым наносите противнику колоссальный урон!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли противнику тридцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 35;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 16)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Каменная кожа! И тем самым избегаете любого немагического урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					chet_bitva_1++;
					chet_bitva_2++;
					cin.get();
				}
				if (chto_eto_2 == 3 && BEZBAGH >= 6 && mrazota_3 != 0)
				{
					if (mrazota_3 == 5)
					{
						system("cls");
						cout << "Вы используете свою третью способность Сущность вора! И тем самым крадете у противника золото и опыт!" << endl;
						cin.get();
						int craja1 = rand() % (25 - 10 + 1) + 10;
						int craja2 = rand() % (10 - 5 + 1) + 5;
						system("cls");
						cout << "Вы украли " << craja1 << " золота и " << craja2 << " опыта!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 6)
					{
						system("cls");
						cout << "Вы используете свою третью способность Песнь клинков! И тем самым наносите противнику смертельный урон, а так же отравляете его на три хода!" << endl;
						cin.get();
						HEALS_MANEK -= 50;
						KLIK = 3;
						system("cls");
						cout << "Вы нанесли противнику пятьдесят урона!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 11)
					{
						system("cls");
						cout << "Вы используете свою третью способность Ярость Титанов <Гуливера>! И тем самым наносите противнику смертельный урон, а так же блокируете любой немагический урон!" << endl;
						cin.get();
						HEALS_MANEK -= 50;
						KAYK = 1;
						system("cls");
						cout << "Вы нанесли противнику пятьдесят урона!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 12)
					{
						system("cls");
						cout << "Вы используете свою третью способность Щелчек Хаоса <Диса>! Вы и сами не знаете к чему это может привести... но в этом и суть Хаоса!" << endl;
						cin.get();
						int Xaoc = rand() % (3 - 1 + 1) + 1;
						if (Xaoc == 1)
						{
							system("cls");
							cout << "Вы нанесли противнику сто урона! Но и себе двадцать пять!" << endl;
							cin.get();
							HEALS_MANEK -= 100;
							HEALS -= 25;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						if (Xaoc == 2)
						{
							system("cls");
							cout << "Вы восстановили себе пятьдесят жизней! Но и противнику пятнадцать!" << endl;
							cin.get();
							HEALS_MANEK += 15;
							HEALS += 50;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						if (Xaoc == 3)
						{
							system("cls");
							cout << "Вы... ничего не сделали?.. Хм, хотя на грани сознания вы почувствовали, что где-то закибербулили одного Леху! Правда вы не знаете, что это все означает. Ну, да и ладно, заберите обратно половину ОБ и немного золота что ли." << endl;
							cin.get();
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 3;
							int craja1 = rand() % (10 - 5 + 1) + 5;
							system("cls");
							cout << "Вы получили " << craja1 << " золота!" << endl;
							cin.get();
							break;
						}
					}
					if (mrazota_3 == 17)
					{
						system("cls");
						cout << "Вы используете свою третью способность По Настояшему Серьезный Удар! Вы используете всю силу своих мышц и, возможно, наносите противнику фатальный урон!" << endl;
						cin.get();
						int ser_ydar = rand() % (100 - 1 + 1) + 1;
						if (ser_ydar >= 90)
						{
							system("cls");
							cout << "Вы просто лысое чудовище во плоти. Вы нанесли почти тысячу урона!" << endl;
							cin.get();
							HEALS_MANEK -= 999;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						else
						{
							system("cls");
							cout << "Оу! Вы промахнулись!" << endl;
							cin.get();
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}

					}
					if (mrazota_3 == 18)
					{
						system("cls");
						cout << "Вы используете свою третью способность Шипы розы! Покрывая все тело колючками, вы три хода подряд возврашаете любой урон, кроме магического и контратак!" << endl;
						cin.get();
						KOLIK = 3;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
				}
				if (chto_eto_2 == 4)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					cin.get();
					goto AGAGAR;
				}
				if (BEZBAGH <= 2 || mrazota_3 == 0 || mrazota_2 == 0 || mrazota_1 == 0)
				{
					system("cls");
					cout << "Вам не хватает ОБ или у вас не открыта еще способность!" << endl;
					cin.get();
				}
				system("cls");
			} while (true);
			system("cls");
		}
		if (chto_eto == 5)
		{
			system("cls");
			do {
				cout << "Какой артефакт использовать?" << endl;
				cout << "Сейчас артефакты заряжены на: первый - " << chet_bitva_1 << ", второй - " << chet_bitva_2 << endl;
				cout << "У вас есть в инвентаре: " << blat_1_NAZ << ", " << blat_1_NAZ << endl;
				cout << "Нажмите 1 или 2 для использования соответственных артефактов, или A для возвращения в меню боя" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case 'A':
					chto_eto_2 = 3;
					break;
				case 'a':
					chto_eto_2 = 3;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1 && chet_bitva_1 == 3 && blat_1 != 0)
				{
					if (blat_1 == 1)
					{
						system("cls");
						cout << "Вы решили использовать Каменый плащ! Прекрывшись им вы смогли избежать урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						break;
					}
					if (blat_1 == 2)
					{
						system("cls");
						cout << "Вы решили использовать Банка пива! Открывая банку пенного и выпивая ее залпом, вы ощущаете прилив сил! Ух, хорошо пошла!" << endl;
						cin.get();
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						HEALS += 15;
						break;
					}
					if (blat_1 == 5)
					{
						system("cls");
						cout << "Вы решили использовать Домашние тапки! Удивительная скорость! Вы смогли дважды ударить противника!" << endl;
						cin.get();
						int kyky = 0;
						int YRON_SEI_1;
						if (SUKA_2 != 0 && SUKA_1 != 0)
						{
							kyky = 1;
						}
						system("cls");
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						break;
					}
				}
				if (chto_eto_2 == 2 && chet_bitva_2 == 3 && blat_2 != 0)
				{
					if (blat_2 == 1)
					{
						system("cls");
						cout << "Вы решили использовать Каменый плащ! Прекрывшись им вы смогли избежать урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						break;
					}
					if (blat_2 == 2)
					{
						system("cls");
						cout << "Вы решили использовать Банка пива! Открывая банку пенного и выпивая ее залпом, вы ощущаете прилив сил! Ух, хорошо пошла!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						HEALS += 15;
						break;
					}
					if (blat_2 == 5)
					{
						system("cls");
						cout << "Вы решили использовать Домашние тапки! Удивительная скорость! Вы смогли дважды ударить противника!" << endl;
						cin.get();
						int kyky = 0;
						int YRON_SEI_1;
						if (SUKA_2 != 0 && SUKA_1 != 0)
						{
							kyky = 1;
						}
						system("cls");
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						break;
					}
				}
				if ((chto_eto_2 == 1 || chto_eto_2 == 2) && (chet_bitva_2 == 3 || chet_bitva_1 == 3) && (blat_1 == 3 || blat_1 == 4 || blat_2 == 3 || blat_2 == 4))
				{
					system("cls");
					cout << "У вас артефакт, который срабатават случайным образом! Его нельзя использовать!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 3)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					goto AGAGAR;
					cin.get();
				}
				else
				{
					system("cls");
					cout << "У вас нет артефактов или они еще не зарадялись!" << endl;
					cin.get();
				}
			} while (true);
		}
		if (chto_eto == 6)
		{
			system("cls");
			do {
				cout << "Что хотите использовать?" << endl;
				cout << "У вас есть в наличии: бомб - " << BOMBS << ", стрел - " << STRELA << ", зелий здоровья - " << HP_POUCHEN << endl;
				cout << "Нажмите 1, 2, 3 для использования соответственных расходников или A для возвращения в меню боя" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case '3':
					chto_eto_2 = 3;
					break;
				case 'A':
					chto_eto_2 = 4;
					break;
				case 'a':
					chto_eto_2 = 4;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1)
				{
					if (BOMBS != 0)
					{
						system("cls");
						cout << "Вы кидайте бомбу во врага! Ух, это было громко!" << endl;
						BOMBS--;
						cout << "Бомба нанесла пятнадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 15;
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (BOMBS == 0)
					{
						system("cls");
						cout << "У вас нет бомб! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 2)
				{
					if (STRELA != 0)
					{
						system("cls");
						cout << "Вы стреляете из лука и попадаете в противника! Прямо в яблочко!" << endl;
						STRELA--;
						cout << "Бомба нанесла двадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 20;
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (STRELA == 0)
					{
						system("cls");
						cout << "У вас нет стрел! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 3)
				{
					if (HP_POUCHEN != 0)
					{
						system("cls");
						cout << "Вы берете и выпиваете все содержимое бутылки! По вкусу не очень, конечно, но зато какой приход сил!" << endl;
						HP_POUCHEN--;
						cout << "Зелье здоровья восстановило тридцать процентов жизней!" << endl;
						cin.get();
						int xp_xp = HEALS / 3;
						HEALS += xp_xp;
						if (HEALS >= MAX_HEALS)
						{
							HEALS = MAX_HEALS;
						}
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (HP_POUCHEN == 0)
					{
						system("cls");
						cout << "У вас нет зелий здоровья! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 4)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					goto AGAGAR;
					cin.get();
				}
			} while (true);
		}
		if (blat_1 == 3 || blat_1 == 4)
		{
			if (blat_1 == 3)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник бьет Мистера Кибербулинг вместо вас! Не сказать, что тот хоть как-то пострадал." << endl;
				}
			}
			if (blat_1 == 4)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник падает так же как и Сервера МИРЭА и пропускает ход!" << endl;
				}
			}
		}
		if (blat_2 == 3 || blat_2 == 4)
		{
			if (blat_2 == 3)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник бьет Мистера Кибербулинг вместо вас! Не сказать, что тот хоть как-то пострадал." << endl;
				}
			}
			if (blat_2 == 4)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник падает так же как и Сервера МИРЭА и пропускает ход!" << endl;
				}
			}
		}
		if (CHET_REZ != 0)
		{
			system("cls");
			cout << "Кровотичение нанесло вам пять урона!" << endl;
			cin.get();
			HEALS -= 3;
			CHET_REZ--;
		}
		if (KLIK != 0)
		{
			system("cls");
			cout << "Яд нанес противнику десять урона!" << endl;
			cin.get();
			HEALS_MANEK -= 10;
			KLIK--;
		}
		if (chet_bitva_1 > 3 || chet_bitva_2 > 3)
		{
			chet_bitva_1 = 3;
			chet_bitva_2 = 3;
		}
		if (BEZBAGH >= 10)
		{
			BEZBAGH = 10;
		}
		if (BEZBAGH_MANEK >= 10)
		{
			BEZBAGH_MANEK = 10;
		}
		system("cls");
		if (PROY_DAT == 1)
		{
			int kyky = 0;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			if (KAYK == 1)
			{
				cout << "Противник не смог нанести вам урон!" << endl;
				KAYK = 0;
				continue;
			}
			if (SUMER == 1)
			{
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK_BOSS - (STRONGS_MANEK_BOSS * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK_BOSS - (STRONGS_MANEK_BOSS * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2 / 2;
				HEALS -= YRON_SEI_2;
				BEZBAGH_MANEK++;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона!" << endl;
				SUMER = 0;
				if (KOLIK != 0)
				{
					cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
					HEALS_MANEK -= YRON_SEI_2;
					KOLIK--;
				}
				cin.get();
				continue;
			}
			if (SUMER == 0 || KAYK == 0)
			{
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK_BOSS - (STRONGS_MANEK_BOSS * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK_BOSS - (STRONGS_MANEK_BOSS * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2;
				HEALS -= YRON_SEI_2;
				BEZBAGH_MANEK++;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона!" << endl;
				cin.get();
				if (KOLIK != 0)
				{
					cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
					HEALS_MANEK -= YRON_SEI_2;
					KOLIK--;
				}
				continue;
			}
		}
		if (PROY_DAT == 2)
		{
			int Chance_yvorot_en = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvorot_en <= YGOROT)
			{
				GTRH_1 = 1;
				BEZBAGH_MANEK++;
				continue;
			}
			else
			{
				GTRH_1 = 0;
				continue;
			}
		}
		if (PROY_DAT == 3)
		{
			int Chance_yvrrot_en = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvrrot_en <= 95)
			{
				GTRH_2 = 1;
				BEZBAGH_MANEK++;
				continue;
			}
			else
			{
				GTRH_2 = 0;
				continue;
			}
		}
		if (PROY_DAT == 4 && BEZBAGH_MANEK >= 2)
		{
		GHGFF:
			int Chance_yspos_en = rand() % (3 - 1 + 1) + 1;
			if (Chance_yspos_en == 1 && BEZBAGH_MANEK >= 2)
			{
				BEZBAGH_MANEK -= 2;
				int kyky = 0;
				if (SUKA_2 != 0 && SUKA_1 != 0)
				{
					kyky = 1;
				}
				if (KAYK == 1)
				{
					KAYK = 0;
					continue;
				}
				if (SUMER == 1)
				{
					double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
					int YRON_SEI_2;
					if (kyky == 1)
					{
						YRON_SEI_2 = ((SPOS_1 - (SPOS_1 * SUMA_ZAHS)) * BUFF_DEF);
					}
					if (kyky == 0)
					{
						YRON_SEI_2 = (SPOS_1 - (SPOS_1 * SUMA_ZAHS));
					}
					YRON_SEI_2 = YRON_SEI_2 / 2;
					HEALS -= YRON_SEI_2;
					system("cls");
					cout << "По вам ударил противник способностью и вы получили " << YRON_SEI_2 << " урона!" << endl;
					SUMER = 0;
					cin.get();
					if (KOLIK != 0)
					{
						cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
						HEALS_MANEK -= YRON_SEI_2;
						KOLIK--;
					}
					continue;
				}
				if (KAYK == 0 || SUMER == 0)
				{
					double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
					int YRON_SEI_2;
					if (kyky == 1)
					{
						YRON_SEI_2 = ((SPOS_1 - (SPOS_1 * SUMA_ZAHS)) * BUFF_DEF);
					}
					if (kyky == 0)
					{
						YRON_SEI_2 = SPOS_1 - (SPOS_1 * SUMA_ZAHS);
					}
					HEALS -= YRON_SEI_2;
					system("cls");
					cout << "По вам ударил противник способностью и вы получили " << YRON_SEI_2 << " урона!" << endl;
					cin.get();
					if (KOLIK != 0)
					{
						cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
						HEALS_MANEK -= YRON_SEI_2;
						KOLIK--;
					}
					continue;
				}
			}
			if (Chance_yspos_en == 2 && BEZBAGH_MANEK >= 4)
			{
				BEZBAGH_MANEK -= 4;
				CHET_REZ = 3;
			}
			if (Chance_yspos_en == 3 && BEZBAGH_MANEK >= 6)
			{
				BEZBAGH_MANEK -= 6;
				system("cls");
				cout << "По вам ударил противник способностью и вы получили тридцать пять магического урона!" << endl;
				cin.get();
				HEALS -= 15;
				continue;
			}
			else
			{
				goto GHGFF;
			}
		}
		system("cls");
	} while (PRAV != true);
	system("cls");
}
void ENEMY(int ETAJI, int& SPOS_1, int& SPOS_2, int& CHET_REZ, int& SPOS_3, double& EFFECT_DEF, double& EFFECT_DEF_MAG, double& EFFECT_DEF_TIC, int& HEALS_MANEK, int& YGOROT, int& MAX_BEZBAGH_MANEK, int& GOLD_ENEMY, int& XP_ENEMY, string& IMA_MONS, int& STRONGS_MANEK_EN, int& monster)
{
	monster = rand() % (3 - 1 + 1) + 1;
	if (ETAJI == 0)
	{
		if (monster == 1)
		{
			string IMA_MONS = "Жалкая Слизь";
			SPOS_1 = 10;
			EFFECT_DEF = 0.1;
			EFFECT_DEF_MAG = 0.1;
			EFFECT_DEF_TIC = 0.1;
			HEALS_MANEK = 25;
			STRONGS_MANEK_EN = 5;
			YGOROT = 10;
			MAX_BEZBAGH_MANEK = 2;
			GOLD_ENEMY = rand() % (15 - 1 + 1) + 1;
			XP_ENEMY = rand() % (15 - 1 + 1) + 1;
		}
		if (monster == 2)
		{
			string IMA_MONS = "Жалкий Паук";
			SPOS_1 = 10;
			SPOS_2 = 3;
			EFFECT_DEF = 0.2;
			EFFECT_DEF_MAG = 0.2;
			EFFECT_DEF_TIC = 0.2;
			HEALS_MANEK = 35;
			STRONGS_MANEK_EN = 10;
			YGOROT = 15;
			MAX_BEZBAGH_MANEK = 4;
			GOLD_ENEMY = rand() % (25 - 1 + 1) + 1;
			XP_ENEMY = rand() % (25 - 1 + 1) + 1;
		}
		if (monster == 3)
		{
			string IMA_MONS = "Жалкий Зомби";
			SPOS_1 = 10;
			SPOS_2 = 3;
			SPOS_3 = 25;
			EFFECT_DEF = 0.3;
			EFFECT_DEF_MAG = 0.3;
			EFFECT_DEF_TIC = 0.3;
			HEALS_MANEK = 45;
			STRONGS_MANEK_EN = 15;
			YGOROT = 20;
			MAX_BEZBAGH_MANEK = 6;
			GOLD_ENEMY = rand() % (35 - 1 + 1) + 1;
			XP_ENEMY = rand() % (35 - 1 + 1) + 1;
		}
	}
	if (ETAJI == 1)
	{
		if (monster == 1)
		{
			string IMA_MONS = "Обыкновенная Слизь";
			SPOS_1 = 15;
			EFFECT_DEF = 0.1;
			EFFECT_DEF_MAG = 0.1;
			EFFECT_DEF_TIC = 0.1;
			HEALS_MANEK = 30;
			STRONGS_MANEK_EN = 10;
			YGOROT = 15;
			MAX_BEZBAGH_MANEK = 2;
			GOLD_ENEMY = rand() % (20 - 1 + 1) + 1;
			XP_ENEMY = rand() % (20 - 1 + 1) + 1;
		}
		if (monster == 2)
		{
			string IMA_MONS = "Обыкновенный Паук";
			SPOS_1 = 15;
			SPOS_2 = 5;
			EFFECT_DEF = 0.2;
			EFFECT_DEF_MAG = 0.2;
			EFFECT_DEF_TIC = 0.2;
			HEALS_MANEK = 40;
			STRONGS_MANEK_EN = 15;
			YGOROT = 20;
			MAX_BEZBAGH_MANEK = 4;
			GOLD_ENEMY = rand() % (30 - 1 + 1) + 1;
			XP_ENEMY = rand() % (30 - 1 + 1) + 1;
		}
		if (monster == 3)
		{
			string IMA_MONS = "Обыкновенный Зомби";
			SPOS_1 = 15;
			SPOS_2 = 5;
			SPOS_3 = 30;
			EFFECT_DEF = 0.3;
			EFFECT_DEF_MAG = 0.3;
			EFFECT_DEF_TIC = 0.3;
			HEALS_MANEK = 50;
			STRONGS_MANEK_EN = 20;
			YGOROT = 25;
			MAX_BEZBAGH_MANEK = 6;
			GOLD_ENEMY = rand() % (40 - 1 + 1) + 1;
			XP_ENEMY = rand() % (40 - 1 + 1) + 1;
		}
	}
	if (ETAJI == 2)
	{
		if (monster == 1)
		{
			string IMA_MONS = "Сильная Слизь";
			SPOS_1 = 20;
			EFFECT_DEF = 0.1;
			EFFECT_DEF_MAG = 0.1;
			EFFECT_DEF_TIC = 0.1;
			HEALS_MANEK = 35;
			STRONGS_MANEK_EN = 15;
			YGOROT = 20;
			MAX_BEZBAGH_MANEK = 2;
			GOLD_ENEMY = rand() % (25 - 1 + 1) + 1;
			XP_ENEMY = rand() % (25 - 1 + 1) + 1;
		}
		if (monster == 2)
		{
			string IMA_MONS = "Сильный Паук";
			SPOS_1 = 20;
			SPOS_2 = 7;
			EFFECT_DEF = 0.2;
			EFFECT_DEF_MAG = 0.2;
			EFFECT_DEF_TIC = 0.2;
			HEALS_MANEK = 45;
			STRONGS_MANEK_EN = 20;
			YGOROT = 25;
			MAX_BEZBAGH_MANEK = 4;
			GOLD_ENEMY = rand() % (35 - 1 + 1) + 1;
			XP_ENEMY = rand() % (35 - 1 + 1) + 1;
		}
		if (monster == 3)
		{
			string IMA_MONS = "Сильный Зомби";
			SPOS_1 = 20;
			SPOS_2 = 7;
			SPOS_3 = 30;
			EFFECT_DEF = 0.3;
			EFFECT_DEF_MAG = 0.3;
			EFFECT_DEF_TIC = 0.3;
			HEALS_MANEK = 55;
			STRONGS_MANEK_EN = 25;
			YGOROT = 30;
			MAX_BEZBAGH_MANEK = 6;
			GOLD_ENEMY = rand() % (45 - 1 + 1) + 1;
			XP_ENEMY = rand() % (45 - 1 + 1) + 1;
		}
	}
	if (ETAJI == 3)
	{
		if (monster == 1)
		{
			string IMA_MONS = "Король Слизней";
			SPOS_1 = 25;
			EFFECT_DEF = 0.1;
			EFFECT_DEF_MAG = 0.1;
			EFFECT_DEF_TIC = 0.1;
			HEALS_MANEK = 40;
			STRONGS_MANEK_EN = 20;
			YGOROT = 25;
			MAX_BEZBAGH_MANEK = 2;
			GOLD_ENEMY = rand() % (30 - 1 + 1) + 1;
			XP_ENEMY = rand() % (30 - 1 + 1) + 1;
		}
		if (monster == 2)
		{
			string IMA_MONS = "Королева Пауков";
			SPOS_1 = 25;
			SPOS_2 = 9;
			EFFECT_DEF = 0.2;
			EFFECT_DEF_MAG = 0.2;
			EFFECT_DEF_TIC = 0.2;
			HEALS_MANEK = 50;
			STRONGS_MANEK_EN = 25;
			YGOROT = 30;
			MAX_BEZBAGH_MANEK = 4;
			GOLD_ENEMY = rand() % (40 - 1 + 1) + 1;
			XP_ENEMY = rand() % (40 - 1 + 1) + 1;
		}
		if (monster == 3)
		{
			string IMA_MONS = "Чудовищный Зомби";
			SPOS_1 = 25;
			SPOS_2 = 9;
			SPOS_3 = 40;
			EFFECT_DEF = 0.3;
			EFFECT_DEF_MAG = 0.3;
			EFFECT_DEF_TIC = 0.3;
			HEALS_MANEK = 60;
			STRONGS_MANEK_EN = 30;
			YGOROT = 35;
			MAX_BEZBAGH_MANEK = 6;
			GOLD_ENEMY = rand() % (50 - 1 + 1) + 1;
			XP_ENEMY = rand() % (50 - 1 + 1) + 1;
		}
	}
	if (ETAJI == 4)
	{
		if (monster == 1)
		{
			string IMA_MONS = "Сатору";
			SPOS_1 = 30;
			EFFECT_DEF = 0.1;
			EFFECT_DEF_MAG = 0.1;
			EFFECT_DEF_TIC = 0.1;
			HEALS_MANEK = 45;
			STRONGS_MANEK_EN = 25;
			YGOROT = 30;
			MAX_BEZBAGH_MANEK = 2;
			GOLD_ENEMY = rand() % (35 - 1 + 1) + 1;
			XP_ENEMY = rand() % (35 - 1 + 1) + 1;
		}
		if (monster == 2)
		{
			string IMA_MONS = "Шираори";
			SPOS_1 = 30;
			SPOS_2 = 10;
			EFFECT_DEF = 0.2;
			EFFECT_DEF_MAG = 0.2;
			EFFECT_DEF_TIC = 0.2;
			HEALS_MANEK = 45;
			STRONGS_MANEK_EN = 25;
			YGOROT = 35;
			MAX_BEZBAGH_MANEK = 4;
			GOLD_ENEMY = rand() % (45 - 1 + 1) + 1;
			XP_ENEMY = rand() % (45 - 1 + 1) + 1;
		}
		if (monster == 3)
		{
			string IMA_MONS = "Икома";
			SPOS_1 = 30;
			SPOS_2 = 10;
			SPOS_3 = 45;
			EFFECT_DEF = 0.3;
			EFFECT_DEF_MAG = 0.3;
			EFFECT_DEF_TIC = 0.3;
			HEALS_MANEK = 65;
			STRONGS_MANEK_EN = 30;
			YGOROT = 40;
			MAX_BEZBAGH_MANEK = 6;
			GOLD_ENEMY = rand() % (55 - 1 + 1) + 1;
			XP_ENEMY = rand() % (55 - 1 + 1) + 1;
		}
	}
}
void BITVA(int& HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int& BOMBS, int& STRELA, int& HP_POUCHEN, double BUFF_YR, double BUFF_DEF, int& SUKA_1, int& SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ, int& GOLD, int& XP, int& LVL, int& GG, int& CHET_LVL, int& XAR_LVL, int ETAJI)
{
	cout << "Битва на смерть!" << endl;
	cin.get();
	system("cls");
	int SPOS_1;
	int SPOS_2;
	int CHET_REZ;
	int SPOS_3;
	double EFFECT_DEF;
	double EFFECT_DEF_MAG;
	double EFFECT_DEF_TIC;
	int HEALS_MANEK;
	int STRONGS_MANEK;
	int YGOROT;
	int MAX_BEZBAGH_MANEK;
	int GOLD_ENEMY;
	int XP_ENEMY;
	string IMA_MONS;
	int STRONGS_MANEK_EN;
	int monster;
	ENEMY(ETAJI, SPOS_1, SPOS_2, CHET_REZ, SPOS_3, EFFECT_DEF, EFFECT_DEF_MAG, EFFECT_DEF_TIC, HEALS_MANEK, YGOROT, MAX_BEZBAGH_MANEK, GOLD_ENEMY, XP_ENEMY, IMA_MONS, STRONGS_MANEK_EN, monster);
	int BEZBAGH_MANEK = 0;
	int chet_bitva_1 = 0;
	int chet_bitva_2 = 0;
	int KAYK = 0;
	int SUMER = 0;
	int GTRH_1 = 0;
	int GTRH_2 = 0;
	int PROY_DAT = 0;
	int HEALS_MANEK_MAX = HEALS_MANEK;
	bool PRAV = false;
	int KOLIK = 0;
	do {
		if (HEALS <= 0)
		{
			system("cls");
			cout << "Вы мертвы. Это было неплохое приключение." << endl;
			cin.get();
			exit(0);
		}
		if (HEALS_MANEK <= 0)
		{
			system("cls");
			cout << "Вы победили!" << endl;
			cout << "Золото получено " << GOLD_ENEMY << endl;
			cout << "Опыта получено " << XP_ENEMY << endl;
			GOLD += GOLD_ENEMY;
			XP += XP_ENEMY;
			if (XP >= 25 * GG)
			{
				XP = XP - 25 * GG;
				GG++;
				LVL++;
				if (LVL <= 10)
				{
					CHET_LVL++;
				}
				XAR_LVL += 2;
			}
			cin.get();
			break;
		}
	SUKA:
		PROY_DAT = rand() % (4 - 1 + 1) + 1;
		int prot = 0;
		if (PROY_DAT == 4 && BEZBAGH_MANEK >= 2)
		{
			prot = 1;
		}
		if (PROY_DAT == 4 && BEZBAGH_MANEK < 2)
		{
			goto SUKA;
		}
	REV:
	AGAGAR:
	SHIT:
		system("cls");
		cout << "Жизни: " << MAX_HEALS << "/" << HEALS << endl;
		cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
		cout << IMA_MONS << endl;
		cout << "Жизни врага: " << HEALS_MANEK_MAX << "/" << HEALS_MANEK << endl;
		cout << "Очки Безбашенности врага: " << MAX_BEZBAGH_MANEK << "/" << BEZBAGH_MANEK << endl;
		cout << "A - удар, B - уворот, C - защита, D - использовать умения героя, E - использовать артефакт, F - использовать расходники" << endl;
		if (prot == 1)
		{
			cout << "Противник собирается использовать способность! Будте осторожны!" << endl;
		}
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'C':
			chto_eto = 3;
		case 'D':
			chto_eto = 4;
			break;
		case 'E':
			chto_eto = 5;
			break;
		case 'F':
			chto_eto = 6;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		case 'c':
			chto_eto = 3;
			break;
		case 'd':
			chto_eto = 4;
			break;
		case 'e':
			chto_eto = 5;
			break;
		case 'f':
			chto_eto = 6;
			break;
		}
		if (chto_eto == 0)
		{
			system("cls");
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
			goto AGAGAR;
		}
		if (chto_eto == 1)
		{
			int kyky = 0;
			int YRON_SEI_1;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			system("cls");
			if (GTRH_1 == 1)
			{
				system("cls");
				cout << "Противник смог увернуться и контратаковал вас!" << endl;
				cin.get();
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK_EN - (STRONGS_MANEK_EN * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK_EN - (STRONGS_MANEK_EN * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2;
				HEALS -= YRON_SEI_2;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона" << endl;
				cin.get();
				GTRH_1 = 0;
				PROY_DAT = rand() % (4 - 1 + 1) + 1;
				chet_bitva_1++;
				chet_bitva_2++;
				continue;
			}
			if (GTRH_2 == 1)
			{
				system("cls");
				cout << "Противник мог защититься и блокировал большую часть урона!" << endl;
				cin.get();
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				YRON_SEI_1 = YRON_SEI_1 / 2;
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				BEZBAGH++;
				GTRH_2 = 0;
				PROY_DAT = rand() % (4 - 1 + 1) + 1;
				chet_bitva_1++;
				chet_bitva_2++;
				continue;
			}
			if (GTRH_2 == 0 || GTRH_1 == 0)
			{
				system("cls");
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		if (chto_eto == 2)
		{
			system("cls");
			int kyky = 0;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			int Chance_yvorot = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvorot <= YVOROT)
			{
				system("cls");
				cout << "Вы смогли увернуться от атаки и даже контратакавали врага! Вот это ловкость!" << endl;
				cin.get();
				int YRON_SEI_1;
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				KAYK = 1;
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
			else
			{
				system("cls");
				cout << "Какая жалость! Вы постигли неудачу и по вам все равно попали!" << endl;
				cin.get();
				KAYK = 0;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		if (chto_eto == 3)
		{
			system("cls");
			int Chance_zashiti = rand() % (100 - 1 + 1) + 1;
			if (Chance_zashiti >= 5)
			{
				system("cls");
				cout << "Вы успешно защилитись от большей части урона!" << endl;
				cin.get();
				SUMER = 1;
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
			else
			{
				system("cls");
				cout << "Ух, сегодня явно не ваш день... вы не смогли защититься." << endl;
				cin.get();
				SUMER = 0;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		int KLIK = 0;
		if (chto_eto == 4)
		{
			system("cls");
			do {
				cout << "Какую способность хотите использовать?" << endl;
				cout << "Для использования первой необходимо две ОБ, второй четыре ОБ, третий шесть ОБ" << endl;
				cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
				cout << "У вас сейчас есть: " << mrazota_1_NAZ << ", " << mrazota_2_NAZ << ", " << mrazota_3_NAZ << endl;
				cout << "Нажмите 1, 2, 3 для использования соответственных способностей или A для возвращение в меню боя!" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case '3':
					chto_eto_2 = 3;
					break;
				case 'A':
					chto_eto_2 = 4;
					break;
				case 'a':
					chto_eto_2 = 4;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1 && BEZBAGH >= 2 && mrazota_1 != 0)
				{
					if (mrazota_1 == 1)
					{
						system("cls");
						cout << "Вы используете свою первую способность Чудовищный разрез! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						system("cls");
						cout << "Удар нанес двадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 20;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 2)
					{
						system("cls");
						cout << "Вы используете свою первую способность Двойной укол! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						int ykol_1 = rand() % (15 - 1 + 1) + 1;
						int ykol_2 = rand() % (15 - 1 + 1) + 1;
						system("cls");
						cout << "Первый удар наносит " << ykol_1 << ", а второй " << ykol_2 << endl;
						cin.get();
						HEALS_MANEK -= ykol_1;
						HEALS_MANEK -= ykol_2;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 7)
					{
						system("cls");
						cout << "Вы используете свою первую способность Огненый кулак <Ейс>! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						system("cls");
						cout << "Удар нанес двадцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 25;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 8)
					{
						system("cls");
						cout << "Вы используете свою первую способность Ледяные когти <Пет Шоп>! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						int ykol_1 = rand() % (8 - 1 + 1) + 1;
						int ykol_2 = rand() % (8 - 1 + 1) + 1;
						int ykol_3 = rand() % (8 - 1 + 1) + 1;
						int ykol_4 = rand() % (8 - 1 + 1) + 1;
						system("cls");
						cout << "Первый коготь наносит " << ykol_1 << ", второй " << ykol_2 << ", третий " << ykol_3 << ", четвертый " << ykol_4 << endl;
						cin.get();
						HEALS_MANEK -= ykol_1;
						HEALS_MANEK -= ykol_2;
						HEALS_MANEK -= ykol_3;
						HEALS_MANEK -= ykol_4;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 13)
					{
						system("cls");
						cout << "Вы используете свою первую способность Удар щитом! И тем самым наносите противнику серьезные увечья, а так же оглушаете противника, что позволяет сделать еще один ход!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли десять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 10;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						goto SHIT;
					}
					if (mrazota_1 == 14)
					{
						system("cls");
						cout << "Вы используете свою первую способность Рев загного зверя! И тем самым восстанавливаете себе немного жизней, а так же пугаете противника, что позволяет сделать еще один ход!" << endl;
						cin.get();
						system("cls");
						cout << "Вы восстановили пятнадцать жизней!" << endl;
						cin.get();
						HEALS += 15;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						goto REV;
					}
				}
				if (chto_eto_2 == 2 && BEZBAGH >= 4 && mrazota_2 != 0)
				{
					if (mrazota_2 == 3)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Клык змеи! И тем самым отравляете на пять ходов своего противника!" << endl;
						cin.get();
						KLIK = 5;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 4)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Блюр! И тем самым уворачиваетесь от любой атаке, кроме магических!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 9)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Догматы Истины! И тем самым восстанавливаете себе здоровье, а так же блокируете некоторую часть урона, если противник вас бьет!" << endl;
						cin.get();
						system("cls");
						cout << "Вы восстановили двадцать жизней!" << endl;
						cin.get();
						HEALS += 20;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						SUMER = 1;
						break;
					}
					if (mrazota_2 == 10)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Шторвомой Ураган <Райдзин>! И тем самым наносите противнику колоссальный урон!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли противнику тридцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 35;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 15)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Ярость берсерка! И тем самым наносите противнику колоссальный урон!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли противнику тридцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 35;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 16)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Каменная кожа! И тем самым избегаете любого немагического урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					chet_bitva_1++;
					chet_bitva_2++;
					cin.get();
				}
				if (chto_eto_2 == 3 && BEZBAGH >= 6 && mrazota_3 != 0)
				{
					if (mrazota_3 == 5)
					{
						system("cls");
						cout << "Вы используете свою третью способность Сущность вора! И тем самым крадете у противника золото и опыт!" << endl;
						cin.get();
						int craja1 = rand() % (25 - 10 + 1) + 10;
						int craja2 = rand() % (10 - 5 + 1) + 5;
						system("cls");
						cout << "Вы украли " << craja1 << " золота и " << craja2 << " опыта!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 6)
					{
						system("cls");
						cout << "Вы используете свою третью способность Песнь клинков! И тем самым наносите противнику смертельный урон, а так же отравляете его на три хода!" << endl;
						cin.get();
						HEALS_MANEK -= 50;
						KLIK = 3;
						system("cls");
						cout << "Вы нанесли противнику пятьдесят урона!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 11)
					{
						system("cls");
						cout << "Вы используете свою третью способность Ярость Титанов <Гуливера>! И тем самым наносите противнику смертельный урон, а так же блокируете любой немагический урон!" << endl;
						cin.get();
						HEALS_MANEK -= 50;
						KAYK = 1;
						system("cls");
						cout << "Вы нанесли противнику пятьдесят урона!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 12)
					{
						system("cls");
						cout << "Вы используете свою третью способность Щелчек Хаоса <Диса>! Вы и сами не знаете к чему это может привести... но в этом и суть Хаоса!" << endl;
						cin.get();
						int Xaoc = rand() % (3 - 1 + 1) + 1;
						if (Xaoc == 1)
						{
							system("cls");
							cout << "Вы нанесли противнику сто урона! Но и себе двадцать пять!" << endl;
							cin.get();
							HEALS_MANEK -= 100;
							HEALS -= 25;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						if (Xaoc == 2)
						{
							system("cls");
							cout << "Вы восстановили себе пятьдесят жизней! Но и противнику пятнадцать!" << endl;
							cin.get();
							HEALS_MANEK += 15;
							HEALS += 50;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						if (Xaoc == 3)
						{
							system("cls");
							cout << "Вы... ничего не сделали?.. Хм, хотя на грани сознания вы почувствовали, что где-то закибербулили одного Леху! Правда вы не знаете, что это все означает. Ну, да и ладно, заберите обратно половину ОБ и немного золота что ли." << endl;
							cin.get();
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 3;
							int craja1 = rand() % (10 - 5 + 1) + 5;
							system("cls");
							cout << "Вы получили " << craja1 << " золота!" << endl;
							cin.get();
							break;
						}
					}
					if (mrazota_3 == 17)
					{
						system("cls");
						cout << "Вы используете свою третью способность По Настояшему Серьезный Удар! Вы используете всю силу своих мышц и, возможно, наносите противнику фатальный урон!" << endl;
						cin.get();
						int ser_ydar = rand() % (100 - 1 + 1) + 1;
						if (ser_ydar >= 90)
						{
							system("cls");
							cout << "Вы просто лысое чудовище во плоти. Вы нанесли почти тысячу урона!" << endl;
							cin.get();
							HEALS_MANEK -= 999;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						else
						{
							system("cls");
							cout << "Оу! Вы промахнулись!" << endl;
							cin.get();
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}

					}
					if (mrazota_3 == 18)
					{
						system("cls");
						cout << "Вы используете свою третью способность Шипы розы! Покрывая все тело колючками, вы три хода подряд возврашаете любой урон, кроме магического и контратак!" << endl;
						cin.get();
						KOLIK = 3;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
				}
				if (chto_eto_2 == 4)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					cin.get();
					goto AGAGAR;
				}
				if (BEZBAGH <= 2 || mrazota_3 == 0 || mrazota_2 == 0 || mrazota_1 == 0)
				{
					system("cls");
					cout << "Вам не хватает ОБ или у вас не открыта еще способность!" << endl;
					cin.get();
				}
				system("cls");
			} while (true);
			system("cls");
		}
		if (chto_eto == 5)
		{
			system("cls");
			do {
				cout << "Какой артефакт использовать?" << endl;
				cout << "Сейчас артефакты заряжены на: первый - " << chet_bitva_1 << ", второй - " << chet_bitva_2 << endl;
				cout << "У вас есть в инвентаре: " << blat_1_NAZ << ", " << blat_1_NAZ << endl;
				cout << "Нажмите 1 или 2 для использования соответственных артефактов, или A для возвращения в меню боя" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case 'A':
					chto_eto_2 = 3;
					break;
				case 'a':
					chto_eto_2 = 3;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1 && chet_bitva_1 == 3 && blat_1 != 0)
				{
					if (blat_1 == 1)
					{
						system("cls");
						cout << "Вы решили использовать Каменый плащ! Прекрывшись им вы смогли избежать урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						break;
					}
					if (blat_1 == 2)
					{
						system("cls");
						cout << "Вы решили использовать Банка пива! Открывая банку пенного и выпивая ее залпом, вы ощущаете прилив сил! Ух, хорошо пошла!" << endl;
						cin.get();
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						HEALS += 15;
						break;
					}
					if (blat_1 == 5)
					{
						system("cls");
						cout << "Вы решили использовать Домашние тапки! Удивительная скорость! Вы смогли дважды ударить противника!" << endl;
						cin.get();
						int kyky = 0;
						int YRON_SEI_1;
						if (SUKA_2 != 0 && SUKA_1 != 0)
						{
							kyky = 1;
						}
						system("cls");
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						break;
					}
				}
				if (chto_eto_2 == 2 && chet_bitva_2 == 3 && blat_2 != 0)
				{
					if (blat_2 == 1)
					{
						system("cls");
						cout << "Вы решили использовать Каменый плащ! Прекрывшись им вы смогли избежать урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						break;
					}
					if (blat_2 == 2)
					{
						system("cls");
						cout << "Вы решили использовать Банка пива! Открывая банку пенного и выпивая ее залпом, вы ощущаете прилив сил! Ух, хорошо пошла!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						HEALS += 15;
						break;
					}
					if (blat_2 == 5)
					{
						system("cls");
						cout << "Вы решили использовать Домашние тапки! Удивительная скорость! Вы смогли дважды ударить противника!" << endl;
						cin.get();
						int kyky = 0;
						int YRON_SEI_1;
						if (SUKA_2 != 0 && SUKA_1 != 0)
						{
							kyky = 1;
						}
						system("cls");
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						break;
					}
				}
				if ((chto_eto_2 == 1 || chto_eto_2 == 2) && (chet_bitva_2 == 3 || chet_bitva_1 == 3) && (blat_1 == 3 || blat_1 == 4 || blat_2 == 3 || blat_2 == 4))
				{
					system("cls");
					cout << "У вас артефакт, который срабатават случайным образом! Его нельзя использовать!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 3)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					goto AGAGAR;
					cin.get();
				}
				else
				{
					system("cls");
					cout << "У вас нет артефактов или они еще не зарадялись!" << endl;
					cin.get();
				}
			} while (true);
		}
		if (chto_eto == 6)
		{
			system("cls");
			do {
				cout << "Что хотите использовать?" << endl;
				cout << "У вас есть в наличии: бомб - " << BOMBS << ", стрел - " << STRELA << ", зелий здоровья - " << HP_POUCHEN << endl;
				cout << "Нажмите 1, 2, 3 для использования соответственных расходников или A для возвращения в меню боя" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case '3':
					chto_eto_2 = 3;
					break;
				case 'A':
					chto_eto_2 = 4;
					break;
				case 'a':
					chto_eto_2 = 4;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1)
				{
					if (BOMBS != 0)
					{
						system("cls");
						cout << "Вы кидайте бомбу во врага! Ух, это было громко!" << endl;
						BOMBS--;
						cout << "Бомба нанесла пятнадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 15;
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (BOMBS == 0)
					{
						system("cls");
						cout << "У вас нет бомб! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 2)
				{
					if (STRELA != 0)
					{
						system("cls");
						cout << "Вы стреляете из лука и попадаете в противника! Прямо в яблочко!" << endl;
						STRELA--;
						cout << "Бомба нанесла двадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 20;
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (STRELA == 0)
					{
						system("cls");
						cout << "У вас нет стрел! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 3)
				{
					if (HP_POUCHEN != 0)
					{
						system("cls");
						cout << "Вы берете и выпиваете все содержимое бутылки! По вкусу не очень, конечно, но зато какой приход сил!" << endl;
						HP_POUCHEN--;
						cout << "Зелье здоровья восстановило тридцать процентов жизней!" << endl;
						cin.get();
						int xp_xp = HEALS / 3;
						HEALS += xp_xp;
						if (HEALS >= MAX_HEALS)
						{
							HEALS = MAX_HEALS;
						}
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (HP_POUCHEN == 0)
					{
						system("cls");
						cout << "У вас нет зелий здоровья! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 4)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					goto AGAGAR;
					cin.get();
				}
			} while (true);
		}
		if (blat_1 == 3 || blat_1 == 4)
		{
			if (blat_1 == 3)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник бьет Мистера Кибербулинг вместо вас! Не сказать, что тот хоть как-то пострадал." << endl;
				}
			}
			if (blat_1 == 4)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник падает так же как и Сервера МИРЭА и пропускает ход!" << endl;
				}
			}
		}
		if (blat_2 == 3 || blat_2 == 4)
		{
			if (blat_2 == 3)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник бьет Мистера Кибербулинг вместо вас! Не сказать, что тот хоть как-то пострадал." << endl;
				}
			}
			if (blat_2 == 4)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник падает так же как и Сервера МИРЭА и пропускает ход!" << endl;
				}
			}
		}
		if (CHET_REZ != 0)
		{
			system("cls");
			cout << "Кровотичение нанесло вам пять урона!" << endl;
			cin.get();
			HEALS -= 3;
			CHET_REZ--;
		}
		if (KLIK != 0)
		{
			system("cls");
			cout << "Яд нанес противнику десять урона!" << endl;
			cin.get();
			HEALS_MANEK -= 10;
			KLIK--;
		}
		if (chet_bitva_1 > 3 || chet_bitva_2 > 3)
		{
			chet_bitva_1 = 3;
			chet_bitva_2 = 3;
		}
		if (BEZBAGH >= 10)
		{
			BEZBAGH = 10;
		}
		if (BEZBAGH_MANEK >= 10)
		{
			BEZBAGH_MANEK = 10;
		}
		system("cls");
		if (PROY_DAT == 1)
		{
			int kyky = 0;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			if (KAYK == 1)
			{
				cout << "Противник не смог нанести вам урон!" << endl;
				KAYK = 0;
				continue;
			}
			if (SUMER == 1)
			{
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK_EN - (STRONGS_MANEK_EN * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK_EN - (STRONGS_MANEK_EN * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2 / 2;
				HEALS -= YRON_SEI_2;
				BEZBAGH_MANEK++;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона!" << endl;
				SUMER = 0;
				if (KOLIK != 0)
				{
					cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
					HEALS_MANEK -= YRON_SEI_2;
					KOLIK--;
				}
				cin.get();
				continue;
			}
			if (SUMER == 0 || KAYK == 0)
			{
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK_EN - (STRONGS_MANEK_EN * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK_EN - (STRONGS_MANEK_EN * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2;
				HEALS -= YRON_SEI_2;
				BEZBAGH_MANEK++;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона!" << endl;
				cin.get();
				if (KOLIK != 0)
				{
					cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
					HEALS_MANEK -= YRON_SEI_2;
					KOLIK--;
				}
				continue;
			}
		}
		if (PROY_DAT == 2)
		{
			int Chance_yvorot_en = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvorot_en <= YGOROT)
			{
				GTRH_1 = 1;
				BEZBAGH_MANEK++;
				continue;
			}
			else
			{
				GTRH_1 = 0;
				continue;
			}
		}
		if (PROY_DAT == 3)
		{
			int Chance_yvrrot_en = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvrrot_en <= 95)
			{
				GTRH_2 = 1;
				BEZBAGH_MANEK++;
				continue;
			}
			else
			{
				GTRH_2 = 0;
				continue;
			}
		}
		if (PROY_DAT == 4 && BEZBAGH_MANEK >= 2)
		{
		GHGFF:
			int Chance_yspos_en = rand() % (3 - 1 + 1) + 1;
			if (Chance_yspos_en == 1 && BEZBAGH_MANEK >= 2 && (monster == 1 || monster == 2 || monster == 3))
			{
				BEZBAGH_MANEK -= 2;
				int kyky = 0;
				if (SUKA_2 != 0 && SUKA_1 != 0)
				{
					kyky = 1;
				}
				if (KAYK == 1)
				{
					KAYK = 0;
					continue;
				}
				if (SUMER == 1)
				{
					double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
					int YRON_SEI_2;
					if (kyky == 1)
					{
						YRON_SEI_2 = ((SPOS_1 - (SPOS_1 * SUMA_ZAHS)) * BUFF_DEF);
					}
					if (kyky == 0)
					{
						YRON_SEI_2 = (SPOS_1 - (SPOS_1 * SUMA_ZAHS));
					}
					YRON_SEI_2 = YRON_SEI_2 / 2;
					HEALS -= YRON_SEI_2;
					system("cls");
					cout << "По вам ударил противник способностью и вы получили " << YRON_SEI_2 << " урона!" << endl;
					SUMER = 0;
					cin.get();
					if (KOLIK != 0)
					{
						cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
						HEALS_MANEK -= YRON_SEI_2;
						KOLIK--;
					}
					continue;
				}
				if (KAYK == 0 || SUMER == 0)
				{
					double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
					int YRON_SEI_2;
					if (kyky == 1)
					{
						YRON_SEI_2 = ((SPOS_1 - (SPOS_1 * SUMA_ZAHS)) * BUFF_DEF);
					}
					if (kyky == 0)
					{
						YRON_SEI_2 = SPOS_1 - (SPOS_1 * SUMA_ZAHS);
					}
					HEALS -= YRON_SEI_2;
					system("cls");
					cout << "По вам ударил противник способностью и вы получили " << YRON_SEI_2 << " урона!" << endl;
					cin.get();
					if (KOLIK != 0)
					{
						cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
						HEALS_MANEK -= YRON_SEI_2;
						KOLIK--;
					}
					continue;
				}
			}
			if (Chance_yspos_en == 2 && BEZBAGH_MANEK >= 4 && (monster == 2 || monster == 3))
			{
				BEZBAGH_MANEK -= 4;
				CHET_REZ = 3;
			}
			if (Chance_yspos_en == 3 && BEZBAGH_MANEK >= 6 && monster == 3)
			{
				BEZBAGH_MANEK -= 6;
				system("cls");
				cout << "По вам ударил противник способностью и вы получили тридцать пять магического урона!" << endl;
				cin.get();
				HEALS -= 15;
				continue;
			}
			else
			{
				goto GHGFF;
			}
		}
		system("cls");
	} while (PRAV != true);
	system("cls");
}
void SYNDYK(int& KEYS, int& GOLD, int& pyrdyk, int& ZAPCHASTI)
{
	int GOLD_SYNDYK;
	bool TRON = false;
	do {
		char knopka = _getch();
		int chto_eto = 0;
		cout << "A - открыть сундук, B - уйти" << endl;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		}
		if (chto_eto == 0)
		{
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
		}
		if (chto_eto == 1)
		{
			if (KEYS > 0)
			{
				KEYS--;
				GOLD_SYNDYK = rand() % (RANDOM_OPEN_SYNDYK_MAX - RANDOM_OPEN_SYNDYK_MIN + 1) + RANDOM_OPEN_SYNDYK_MIN;
				GOLD += GOLD_SYNDYK;
				cout << "Вы открыли сундук! Там было столько золота: " << GOLD_SYNDYK << endl;
				cout << "Теперь у вас есть столько золота: " << GOLD << endl;
				int ZAP_SYN = rand() % (100 - 1 + 1) + 1;
				if (ZAP_SYN > 75)
				{
					cout << "Еще в сундуке вы нашли одну запчасть!" << endl;
					ZAPCHASTI++;
				}
				TRON = true;
				pyrdyk = 1;
				cin.get();
			}
			else
			{
				cout << "У вас нет ключа!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 2)
		{
			cout << "Вы ушли!" << endl;
			TRON = true;
			cin.get();
		}
		system("cls");
	} while (TRON != true);
	system("cls");
}
void ARTEFACT(int& artefus, string& artef, string nomer_1, string nomer_2, int& nomer_artf)
{
	int rand_artefact = rand() % (RANDOM_ARTEFACT_MAX - RANDOM_ARTEFACT_MIN + 1) + RANDOM_ARTEFACT_MIN;
	string Slovo_art = "";
	if (rand_artefact == 1)
	{
		Slovo_art = "Вы нашли Каменный плащ! Он блокирует урон раз в три хода!";
		artef = "Каменный плащ";
		artefus = 1;
	}
	if (rand_artefact == 2)
	{
		Slovo_art = "Вы нашли Банка пива! Она востанавливает пятнадцать раз в три хода!";
		artef = "Банка пива";
		artefus = 2;
	}
	if (rand_artefact == 3)
	{
		Slovo_art = "Вы нашли Мистер кибербулинг! Он ничего не делает, но монстр будет периодически его бить!";
		artef = "Мистер кибербулинг";
		artefus = 3;
	}
	if (rand_artefact == 4)
	{
		Slovo_art = "Вы нашли Сервера МИРЭА! Монстр будет с некоторым шансом падать, что не позволит ему бить вас!";
		artef = "Сервера МИРЭА";
		artefus = 4;
	}
	if (rand_artefact == 5)
	{
		Slovo_art = "Вы нашли Домашние тапки! Они позволяют за счет повышения скорости ударить два раза раз в три хода!";
		artef = "Домашние тапки";
		artefus = 5;
	}
	bool GRIM = false;
	do {
	Again:
		cout << Slovo_art << endl;
		cout << "A - взять артефакт, B - оставить артефакт" << endl;
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		}
		if (chto_eto == 0)
		{
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
		}
		if (chto_eto == 1)
		{
			system("cls");
			bool GIMOR = false;
			do {
				cout << "Вы захотели взять артефакт! Какое место ему приготовлино в вашем рюкзаке?" << endl;
				cout << "Первое место в вашем рюкзаке занимает: " << nomer_1 << ", а второе: " << nomer_2 << endl;
				cout << "1 - положить в первый слот, 2 - положить во второй слот" << endl;
				char sopka = _getch();
				int chto_eto_2 = 0;
				switch (sopka)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				}
				if (chto_eto_2 == 0)
				{
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1)
				{
					system("cls");
					bool PILOR = false;
					do {
						cout << "Вы уверены в своем решение? Прошлый артефакт будет потерян навсегда!" << endl;
						cout << "A - да, уверен, B - нет, не хочу" << endl;
						int chto_eto_3 = 0;
						char sopkyr = _getch();
						switch (sopkyr)
						{
						case 'A':
							chto_eto_3 = 1;
							break;
						case 'B':
							chto_eto_3 = 2;
							break;
						case 'a':
							chto_eto_3 = 1;
							break;
						case 'b':
							chto_eto_3 = 2;
							break;
						}
						if (chto_eto_3 == 0)
						{
							cout << "Вы ничего не сделали!" << endl;
							cin.get();
						}
						if (chto_eto_3 == 1)
						{
							cout << "Вы положили артефакт в первый слот!" << endl;
							nomer_artf = 1;
							PILOR = true;
							GRIM = true;
							GIMOR = true;
							cin.get();
						}
						if (chto_eto_3 == 2)
						{
							cout << "Вы передумали и вернулись к выбору!" << endl;
							cin.get();
							goto Again;
						}
						system("cls");
					} while (PILOR != true);
				}
				if (chto_eto_2 == 2)
				{
					bool PILOR = false;
					do {
						cout << "Вы уверены в своем решение? Прошлый артефакт будет потерян навсегда!" << endl;
						cout << "A - да, уверен, B - нет, не хочу" << endl;
						int chto_eto_3 = 0;
						char sopkyr = _getch();
						switch (sopkyr)
						{
						case 'A':
							chto_eto_3 = 1;
							break;
						case 'B':
							chto_eto_3 = 2;
							break;
						case 'a':
							chto_eto_3 = 1;
							break;
						case 'b':
							chto_eto_3 = 2;
							break;
						}
						if (chto_eto_3 == 0)
						{
							cout << "Вы ничего не сделали!" << endl;
							cin.get();
						}
						if (chto_eto_3 == 1)
						{
							cout << "Вы положили артефакт во второй слот!" << endl;
							nomer_artf = 2;
							PILOR = true;
							GRIM = true;
							GIMOR = true;
							cin.get();
						}
						if (chto_eto_3 == 2)
						{
							cout << "Вы передумали и вернулись к выбору!" << endl;
							cin.get();
							goto Again;
						}
						system("cls");
					} while (PILOR != true);
					system("cls");
				}
				system("cls");
			} while (GIMOR != true);
			system("cls");
		}
		if (chto_eto == 2)
		{
			cout << "Вы ушли и не взяли артефакт!" << endl;
			nomer_artf = 0;
			artef = "";
			artefus = 0;
			GRIM = true;
			cin.get();
		}
		system("cls");
	} while (GRIM != true);
	system("cls");
}
void BITVA_FALSE(int HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int BOMBS, int STRELA, int HP_POUCHEN, double BUFF_YR, double BUFF_DEF, int SUKA_1, int SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ)
{
	cout << "Вы начали тренировачную битву! Если вы в ней умрете, потеряете жизни или используете расходники, то ничего не случится и все вернется! Попробуйте просто продержаться как можно дольше!" << endl;
	cin.get();
	system("cls");
	int SPOS_1 = 33;
	int SPOS_2 = 5;
	int CHET_REZ = 0;
	int SPOS_3 = 33;
	double EFFECT_DEF = 0.3;
	double EFFECT_DEF_MAG = 0.3;
	double EFFECT_DEF_TIC = 0.3;
	int HEALS_MANEK = 9999;
	int STRONGS_MANEK = 10;
	int YGOROT = 33;
	int HEALS_MANEK_MAX = HEALS_MANEK;
	int MAX_BEZBAGH_MANEK = 9999;
	int BEZBAGH_MANEK = 0;
	int chet_bitva_1 = 0;
	int chet_bitva_2 = 0;
	int KAYK = 0;
	int SUMER = 0;
	int GTRH_1 = 0;
	int GTRH_2 = 0;
	int PROY_DAT = 0;
	bool PRAV = false;
	int KOLIK = 0;
	do {
		if (HEALS <= 0)
		{
			system("cls");
			cout << "Вы проиграли!" << endl;
			cin.get();
			break;
		}
		if (HEALS_MANEK <= 0)
		{
			system("cls");
			cout << "Вы... выиграли? Эм, поздравляю! Если это победа честна, то вы и правда можете себя называть Героем! Но это все-таки тренировка, так что никакой награды, кроме моего уважения, не будет." << endl;
			cin.get();
			break;
		}
	SUKA:
		PROY_DAT = rand() % (4 - 1 + 1) + 1;
		int prot = 0;
		if (PROY_DAT == 4 && BEZBAGH_MANEK >= 2)
		{
			prot = 1;
		}
		if (PROY_DAT == 4 && BEZBAGH_MANEK < 2)
		{
			goto SUKA;
		}
	REV:
	AGAGAR:
	SHIT:
		system("cls");
		cout << "Жизни: " << MAX_HEALS << "/" << HEALS << endl;
		cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
		cout << "Жизни врага: " << HEALS_MANEK_MAX << "/" << HEALS_MANEK << endl;
		cout << "Очки Безбашенности врага: " << MAX_BEZBAGH_MANEK << "/" << BEZBAGH_MANEK << endl;
		cout << "A - удар, B - уворот, C - защита, D - использовать умения героя, E - использовать артефакт, F - использовать расходники, G - выйти из бой" << endl;
		if (prot == 1)
		{
			cout << "Противник собирается использовать способность! Будте осторожны!" << endl;
		}
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'C':
			chto_eto = 3;
		case 'D':
			chto_eto = 4;
			break;
		case 'E':
			chto_eto = 5;
			break;
		case 'F':
			chto_eto = 6;
			break;
		case 'G':
			chto_eto = 7;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		case 'c':
			chto_eto = 3;
			break;
		case 'd':
			chto_eto = 4;
			break;
		case 'e':
			chto_eto = 5;
			break;
		case 'f':
			chto_eto = 6;
			break;
		case 'g':
			chto_eto = 7;
			break;
		}
		if (chto_eto == 7)
		{
			system("cls");
			cout << "Вы вышли из боя!" << endl;
			cin.get();
			break;
		}
		if (chto_eto == 0)
		{
			system("cls");
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
			goto AGAGAR;
		}
		if (chto_eto == 1)
		{
			int kyky = 0;
			int YRON_SEI_1;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			system("cls");
			if (GTRH_1 == 1)
			{
				system("cls");
				cout << "Противник смог увернуться и контратаковал вас!" << endl;
				cin.get();
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2;
				HEALS -= YRON_SEI_2;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона" << endl;
				cin.get();
				GTRH_1 = 0;
				PROY_DAT = rand() % (4 - 1 + 1) + 1;
				chet_bitva_1++;
				chet_bitva_2++;
				continue;
			}
			if (GTRH_2 == 1)
			{
				system("cls");
				cout << "Противник мог защититься и блокировал большую часть урона!" << endl;
				cin.get();
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				YRON_SEI_1 = YRON_SEI_1 / 2;
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				BEZBAGH++;
				GTRH_2 = 0;
				PROY_DAT = rand() % (4 - 1 + 1) + 1;
				chet_bitva_1++;
				chet_bitva_2++;
				continue;
			}
			if (GTRH_2 == 0 || GTRH_1 == 0)
			{
				system("cls");
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		if (chto_eto == 2)
		{
			system("cls");
			int kyky = 0;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			int Chance_yvorot = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvorot <= YVOROT)
			{
				system("cls");
				cout << "Вы смогли увернуться от атаки и даже контратакавали врага! Вот это ловкость!" << endl;
				cin.get();
				int YRON_SEI_1;
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				KAYK = 1;
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
			else
			{
				system("cls");
				cout << "Какая жалость! Вы постигли неудачу и по вам все равно попали!" << endl;
				cin.get();
				KAYK = 0;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		if (chto_eto == 3)
		{
			system("cls");
			int Chance_zashiti = rand() % (100 - 1 + 1) + 1;
			if (Chance_zashiti >= 5)
			{
				system("cls");
				cout << "Вы успешно защилитись от большей части урона!" << endl;
				cin.get();
				SUMER = 1;
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
			else
			{
				system("cls");
				cout << "Ух, сегодня явно не ваш день... вы не смогли защититься." << endl;
				cin.get();
				SUMER = 0;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		int KLIK = 0;
		if (chto_eto == 4)
		{
			system("cls");
			do {
				cout << "Какую способность хотите использовать?" << endl;
				cout << "Для использования первой необходимо две ОБ, второй четыре ОБ, третий шесть ОБ" << endl;
				cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
				cout << "У вас сейчас есть: " << mrazota_1_NAZ << ", " << mrazota_2_NAZ << ", " << mrazota_3_NAZ << endl;
				cout << "Нажмите 1, 2, 3 для использования соответственных способностей или A для возвращение в меню боя!" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case '3':
					chto_eto_2 = 3;
					break;
				case 'A':
					chto_eto_2 = 4;
					break;
				case 'a':
					chto_eto_2 = 4;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1 && BEZBAGH >= 2 && mrazota_1 != 0)
				{
					if (mrazota_1 == 1)
					{
						system("cls");
						cout << "Вы используете свою первую способность Чудовищный разрез! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						system("cls");
						cout << "Удар нанес двадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 20;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 2)
					{
						system("cls");
						cout << "Вы используете свою первую способность Двойной укол! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						int ykol_1 = rand() % (15 - 1 + 1) + 1;
						int ykol_2 = rand() % (15 - 1 + 1) + 1;
						system("cls");
						cout << "Первый удар наносит " << ykol_1 << ", а второй " << ykol_2 << endl;
						cin.get();
						HEALS_MANEK -= ykol_1;
						HEALS_MANEK -= ykol_2;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 7)
					{
						system("cls");
						cout << "Вы используете свою первую способность Огненый кулак <Ейс>! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						system("cls");
						cout << "Удар нанес двадцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 25;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 8)
					{
						system("cls");
						cout << "Вы используете свою первую способность Ледяные когти <Пет Шоп>! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						int ykol_1 = rand() % (8 - 1 + 1) + 1;
						int ykol_2 = rand() % (8 - 1 + 1) + 1;
						int ykol_3 = rand() % (8 - 1 + 1) + 1;
						int ykol_4 = rand() % (8 - 1 + 1) + 1;
						system("cls");
						cout << "Первый коготь наносит " << ykol_1 << ", второй " << ykol_2 << ", третий " << ykol_3 << ", четвертый " << ykol_4 << endl;
						cin.get();
						HEALS_MANEK -= ykol_1;
						HEALS_MANEK -= ykol_2;
						HEALS_MANEK -= ykol_3;
						HEALS_MANEK -= ykol_4;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 13)
					{
						system("cls");
						cout << "Вы используете свою первую способность Удар щитом! И тем самым наносите противнику серьезные увечья, а так же оглушаете противника, что позволяет сделать еще один ход!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли десять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 10;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						goto SHIT;
					}
					if (mrazota_1 == 14)
					{
						system("cls");
						cout << "Вы используете свою первую способность Рев загного зверя! И тем самым восстанавливаете себе немного жизней, а так же пугаете противника, что позволяет сделать еще один ход!" << endl;
						cin.get();
						system("cls");
						cout << "Вы восстановили пятнадцать жизней!" << endl;
						cin.get();
						HEALS += 15;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						goto REV;
					}
				}
				if (chto_eto_2 == 2 && BEZBAGH >= 4 && mrazota_2 != 0)
				{
					if (mrazota_2 == 3)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Клык змеи! И тем самым отравляете на пять ходов своего противника!" << endl;
						cin.get();
						KLIK = 5;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 4)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Блюр! И тем самым уворачиваетесь от любой атаке, кроме магических!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 9)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Догматы Истины! И тем самым восстанавливаете себе здоровье, а так же блокируете некоторую часть урона, если противник вас бьет!" << endl;
						cin.get();
						system("cls");
						cout << "Вы восстановили двадцать жизней!" << endl;
						cin.get();
						HEALS += 20;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						SUMER = 1;
						break;
					}
					if (mrazota_2 == 10)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Шторвомой Ураган <Райдзин>! И тем самым наносите противнику колоссальный урон!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли противнику тридцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 35;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 15)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Ярость берсерка! И тем самым наносите противнику колоссальный урон!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли противнику тридцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 35;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 16)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Каменная кожа! И тем самым избегаете любого немагического урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					chet_bitva_1++;
					chet_bitva_2++;
					cin.get();
				}
				if (chto_eto_2 == 3 && BEZBAGH >= 6 && mrazota_3 != 0)
				{
					if (mrazota_3 == 5)
					{
						system("cls");
						cout << "Вы используете свою третью способность Сущность вора! И тем самым крадете у противника золото и опыт!" << endl;
						cin.get();
						int craja1 = rand() % (25 - 10 + 1) + 10;
						int craja2 = rand() % (10 - 5 + 1) + 5;
						system("cls");
						cout << "Вы украли " << craja1 << " золота и " << craja2 << " опыта!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 6)
					{
						system("cls");
						cout << "Вы используете свою третью способность Песнь клинков! И тем самым наносите противнику смертельный урон, а так же отравляете его на три хода!" << endl;
						cin.get();
						HEALS_MANEK -= 50;
						KLIK = 3;
						system("cls");
						cout << "Вы нанесли противнику пятьдесят урона!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 11)
					{
						system("cls");
						cout << "Вы используете свою третью способность Ярость Титанов <Гуливера>! И тем самым наносите противнику смертельный урон, а так же блокируете любой немагический урон!" << endl;
						cin.get();
						HEALS_MANEK -= 50;
						KAYK = 1;
						system("cls");
						cout << "Вы нанесли противнику пятьдесят урона!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 12)
					{
						system("cls");
						cout << "Вы используете свою третью способность Щелчек Хаоса <Диса>! Вы и сами не знаете к чему это может привести... но в этом и суть Хаоса!" << endl;
						cin.get();
						int Xaoc = rand() % (3 - 1 + 1) + 1;
						if (Xaoc == 1)
						{
							system("cls");
							cout << "Вы нанесли противнику сто урона! Но и себе двадцать пять!" << endl;
							cin.get();
							HEALS_MANEK -= 100;
							HEALS -= 25;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						if (Xaoc == 2)
						{
							system("cls");
							cout << "Вы восстановили себе пятьдесят жизней! Но и противнику пятнадцать!" << endl;
							cin.get();
							HEALS_MANEK += 15;
							HEALS += 50;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						if (Xaoc == 3)
						{
							system("cls");
							cout << "Вы... ничего не сделали?.. Хм, хотя на грани сознания вы почувствовали, что где-то закибербулили одного Леху! Правда вы не знаете, что это все означает. Ну, да и ладно, заберите обратно половину ОБ и немного золота что ли." << endl;
							cin.get();
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 3;
							int craja1 = rand() % (10 - 5 + 1) + 5;
							system("cls");
							cout << "Вы получили " << craja1 << " золота!" << endl;
							cin.get();
							break;
						}
					}
					if (mrazota_3 == 17)
					{
						system("cls");
						cout << "Вы используете свою третью способность По Настояшему Серьезный Удар! Вы используете всю силу своих мышц и, возможно, наносите противнику фатальный урон!" << endl;
						cin.get();
						int ser_ydar = rand() % (100 - 1 + 1) + 1;
						if (ser_ydar >= 90)
						{
							system("cls");
							cout << "Вы просто лысое чудовище во плоти. Вы нанесли почти тысячу урона!" << endl;
							cin.get();
							HEALS_MANEK -= 999;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						else
						{
							system("cls");
							cout << "Оу! Вы промахнулись!" << endl;
							cin.get();
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}

					}
					if (mrazota_3 == 18)
					{
						system("cls");
						cout << "Вы используете свою третью способность Шипы розы! Покрывая все тело колючками, вы три хода подряд возврашаете любой урон, кроме магического и контратак!" << endl;
						cin.get();
						KOLIK = 3;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
				}
				if (chto_eto_2 == 4)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					cin.get();
					goto AGAGAR;
				}
				if (BEZBAGH <= 2 || mrazota_3 == 0 || mrazota_2 == 0 || mrazota_1 == 0)
				{
					system("cls");
					cout << "Вам не хватает ОБ или у вас не открыта еще способность!" << endl;
					cin.get();
				}
				system("cls");
			} while (true);
			system("cls");
		}
		if (chto_eto == 5)
		{
			system("cls");
			do {
				cout << "Какой артефакт использовать?" << endl;
				cout << "Сейчас артефакты заряжены на: первый - " << chet_bitva_1 << ", второй - " << chet_bitva_2 << endl;
				cout << "У вас есть в инвентаре: " << blat_1_NAZ << ", " << blat_1_NAZ << endl;
				cout << "Нажмите 1 или 2 для использования соответственных артефактов, или A для возвращения в меню боя" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case 'A':
					chto_eto_2 = 3;
					break;
				case 'a':
					chto_eto_2 = 3;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1 && chet_bitva_1 == 3 && blat_1 != 0)
				{
					if (blat_1 == 1)
					{
						system("cls");
						cout << "Вы решили использовать Каменый плащ! Прекрывшись им вы смогли избежать урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						break;
					}
					if (blat_1 == 2)
					{
						system("cls");
						cout << "Вы решили использовать Банка пива! Открывая банку пенного и выпивая ее залпом, вы ощущаете прилив сил! Ух, хорошо пошла!" << endl;
						cin.get();
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						HEALS += 15;
						break;
					}
					if (blat_1 == 5)
					{
						system("cls");
						cout << "Вы решили использовать Домашние тапки! Удивительная скорость! Вы смогли дважды ударить противника!" << endl;
						cin.get();
						int kyky = 0;
						int YRON_SEI_1;
						if (SUKA_2 != 0 && SUKA_1 != 0)
						{
							kyky = 1;
						}
						system("cls");
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						break;
					}
				}
				if (chto_eto_2 == 2 && chet_bitva_2 == 3 && blat_2 != 0)
				{
					if (blat_2 == 1)
					{
						system("cls");
						cout << "Вы решили использовать Каменый плащ! Прекрывшись им вы смогли избежать урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						break;
					}
					if (blat_2 == 2)
					{
						system("cls");
						cout << "Вы решили использовать Банка пива! Открывая банку пенного и выпивая ее залпом, вы ощущаете прилив сил! Ух, хорошо пошла!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						HEALS += 15;
						break;
					}
					if (blat_2 == 5)
					{
						system("cls");
						cout << "Вы решили использовать Домашние тапки! Удивительная скорость! Вы смогли дважды ударить противника!" << endl;
						cin.get();
						int kyky = 0;
						int YRON_SEI_1;
						if (SUKA_2 != 0 && SUKA_1 != 0)
						{
							kyky = 1;
						}
						system("cls");
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						break;
					}
				}
				if ((chto_eto_2 == 1 || chto_eto_2 == 2) && (chet_bitva_2 == 3 || chet_bitva_1 == 3) && (blat_1 == 3 || blat_1 == 4 || blat_2 == 3 || blat_2 == 4))
				{
					system("cls");
					cout << "У вас артефакт, который срабатават случайным образом! Его нельзя использовать!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 3)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					goto AGAGAR;
					cin.get();
				}
				else
				{
					system("cls");
					cout << "У вас нет артефактов или они еще не зарадялись!" << endl;
					cin.get();
				}
			} while (true);
		}
		if (chto_eto == 6)
		{
			system("cls");
			do {
				cout << "Что хотите использовать?" << endl;
				cout << "У вас есть в наличии: бомб - " << BOMBS << ", стрел - " << STRELA << ", зелий здоровья - " << HP_POUCHEN << endl;
				cout << "Нажмите 1, 2, 3 для использования соответственных расходников или A для возвращения в меню боя" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case '3':
					chto_eto_2 = 3;
					break;
				case 'A':
					chto_eto_2 = 4;
					break;
				case 'a':
					chto_eto_2 = 4;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1)
				{
					if (BOMBS != 0)
					{
						system("cls");
						cout << "Вы кидайте бомбу во врага! Ух, это было громко!" << endl;
						BOMBS--;
						cout << "Бомба нанесла пятнадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 15;
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (BOMBS == 0)
					{
						system("cls");
						cout << "У вас нет бомб! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 2)
				{
					if (STRELA != 0)
					{
						system("cls");
						cout << "Вы стреляете из лука и попадаете в противника! Прямо в яблочко!" << endl;
						STRELA--;
						cout << "Бомба нанесла двадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 20;
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (STRELA == 0)
					{
						system("cls");
						cout << "У вас нет стрел! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 3)
				{
					if (HP_POUCHEN != 0)
					{
						system("cls");
						cout << "Вы берете и выпиваете все содержимое бутылки! По вкусу не очень, конечно, но зато какой приход сил!" << endl;
						HP_POUCHEN--;
						cout << "Зелье здоровья восстановило тридцать процентов жизней!" << endl;
						cin.get();
						int xp_xp = HEALS / 3;
						HEALS += xp_xp;
						if (HEALS >= MAX_HEALS)
						{
							HEALS = MAX_HEALS;
						}
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (HP_POUCHEN == 0)
					{
						system("cls");
						cout << "У вас нет зелий здоровья! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 4)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					goto AGAGAR;
					cin.get();
				}
			} while (true);
		}
		if (blat_1 == 3 || blat_1 == 4)
		{
			if (blat_1 == 3)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник бьет Мистера Кибербулинг вместо вас! Не сказать, что тот хоть как-то пострадал." << endl;
				}
			}
			if (blat_1 == 4)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник падает так же как и Сервера МИРЭА и пропускает ход!" << endl;
				}
			}
		}
		if (blat_2 == 3 || blat_2 == 4)
		{
			if (blat_2 == 3)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник бьет Мистера Кибербулинг вместо вас! Не сказать, что тот хоть как-то пострадал." << endl;
				}
			}
			if (blat_2 == 4)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник падает так же как и Сервера МИРЭА и пропускает ход!" << endl;
				}
			}
		}
		if (CHET_REZ != 0)
		{
			system("cls");
			cout << "Кровотичение нанесло вам пять урона!" << endl;
			cin.get();
			HEALS -= 5;
			CHET_REZ--;
		}
		if (KLIK != 0)
		{
			system("cls");
			cout << "Яд нанес противнику десять урона!" << endl;
			cin.get();
			HEALS_MANEK -= 10;
			KLIK--;
		}
		if (chet_bitva_1 > 3 || chet_bitva_2 > 3)
		{
			chet_bitva_1 = 3;
			chet_bitva_2 = 3;
		}
		if (BEZBAGH >= 10)
		{
			BEZBAGH = 10;
		}
		if (BEZBAGH_MANEK >= 9999)
		{
			BEZBAGH_MANEK = 9999;
		}
		system("cls");
		if (PROY_DAT == 1)
		{
			int kyky = 0;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			if (KAYK == 1)
			{
				cout << "Противник не смог нанести вам урон!" << endl;
				KAYK = 0;
				continue;
			}
			if (SUMER == 1)
			{
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2 / 2;
				HEALS -= YRON_SEI_2;
				BEZBAGH_MANEK++;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона!" << endl;
				SUMER = 0;
				if (KOLIK != 0)
				{
					cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
					HEALS_MANEK -= YRON_SEI_2;
					KOLIK--;
				}
				cin.get();
				continue;
			}
			if (SUMER == 0 || KAYK == 0)
			{
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2;
				HEALS -= YRON_SEI_2;
				BEZBAGH_MANEK++;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона!" << endl;
				cin.get();
				if (KOLIK != 0)
				{
					cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
					HEALS_MANEK -= YRON_SEI_2;
					KOLIK--;
				}
				continue;
			}
		}
		if (PROY_DAT == 2)
		{
			int Chance_yvorot_en = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvorot_en <= YGOROT)
			{
				GTRH_1 = 1;
				BEZBAGH_MANEK++;
				continue;
			}
			else
			{
				GTRH_1 = 0;
				continue;
			}
		}
		if (PROY_DAT == 3)
		{
			int Chance_yvrrot_en = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvrrot_en <= 95)
			{
				GTRH_2 = 1;
				BEZBAGH_MANEK++;
				continue;
			}
			else
			{
				GTRH_2 = 0;
				continue;
			}
		}
		if (PROY_DAT == 4 && BEZBAGH_MANEK >= 2)
		{
		GHGFF:
			int Chance_yspos_en = rand() % (3 - 1 + 1) + 1;
			if (Chance_yspos_en == 1 && BEZBAGH_MANEK >= 2)
			{
				BEZBAGH_MANEK -= 2;
				int kyky = 0;
				if (SUKA_2 != 0 && SUKA_1 != 0)
				{
					kyky = 1;
				}
				if (KAYK == 1)
				{
					KAYK = 0;
					continue;
				}
				if (SUMER == 1)
				{
					double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
					int YRON_SEI_2;
					if (kyky == 1)
					{
						YRON_SEI_2 = ((SPOS_1 - (SPOS_1 * SUMA_ZAHS)) * BUFF_DEF);
					}
					if (kyky == 0)
					{
						YRON_SEI_2 = (SPOS_1 - (SPOS_1 * SUMA_ZAHS));
					}
					YRON_SEI_2 = YRON_SEI_2 / 2;
					HEALS -= YRON_SEI_2;
					system("cls");
					cout << "По вам ударил противник способностью и вы получили " << YRON_SEI_2 << " урона!" << endl;
					SUMER = 0;
					cin.get();
					if (KOLIK != 0)
					{
						cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
						HEALS_MANEK -= YRON_SEI_2;
						KOLIK--;
					}
					continue;
				}
				if (KAYK == 0 || SUMER == 0)
				{
					double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
					int YRON_SEI_2;
					if (kyky == 1)
					{
						YRON_SEI_2 = ((SPOS_1 - (SPOS_1 * SUMA_ZAHS)) * BUFF_DEF);
					}
					if (kyky == 0)
					{
						YRON_SEI_2 = SPOS_1 - (SPOS_1 * SUMA_ZAHS);
					}
					HEALS -= YRON_SEI_2;
					system("cls");
					cout << "По вам ударил противник способностью и вы получили " << YRON_SEI_2 << " урона!" << endl;
					cin.get();
					if (KOLIK != 0)
					{
						cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
						HEALS_MANEK -= YRON_SEI_2;
						KOLIK--;
					}
					continue;
				}
			}
			if (Chance_yspos_en == 2 && BEZBAGH_MANEK >= 4)
			{
				BEZBAGH_MANEK -= 4;
				CHET_REZ = 3;
			}
			if (Chance_yspos_en == 3 && BEZBAGH_MANEK >= 6)
			{
				BEZBAGH_MANEK -= 6;
				system("cls");
				cout << "По вам ударил противник способностью и вы получили тридцать пять магического урона!" << endl;
				cin.get();
				HEALS -= 35;
				continue;
			}
			else
			{
				goto GHGFF;
			}
		}
		system("cls");
	} while (PRAV != true);
	system("cls");
}
void BITVA_ARENA(int& HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int& BOMBS, int& STRELA, int& HP_POUCHEN, double BUFF_YR, double BUFF_DEF, int& SUKA_1, int& SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ, int& GOLD, int& XP, int& LVL, int& GG, int& CHET_LVL, int& XAR_LVL)
{
	cout << "Вы начали битву на арене! Вы не можете здесь умереть! Но все, что вы потратите на самом деле потратится!" << endl;
	cin.get();
	system("cls");
	int SPOS_1 = 15;
	int SPOS_2 = 3;
	int CHET_REZ = 0;
	int SPOS_3 = 15;
	double EFFECT_DEF = 0.2;
	double EFFECT_DEF_MAG = 0.2;
	double EFFECT_DEF_TIC = 0.2;
	int HEALS_MANEK = 200;
	int STRONGS_MANEK = 15;
	int YGOROT = 20;
	int HEALS_MANEK_MAX = HEALS_MANEK;
	int MAX_BEZBAGH_MANEK = 10;
	int BEZBAGH_MANEK = 0;
	int chet_bitva_1 = 0;
	int chet_bitva_2 = 0;
	int KAYK = 0;
	int SUMER = 0;
	int GTRH_1 = 0;
	int GTRH_2 = 0;
	int PROY_DAT = 0;
	bool PRAV = false;
	int KOLIK = 0;
	do {
		if (HEALS <= 0)
		{
			system("cls");
			cout << "Вы проиграли и ничего не получили!" << endl;
			HEALS = 1;
			cin.get();
			break;
		}
		if (HEALS_MANEK <= 0)
		{
			system("cls");
			cout << "Вы выйграли! Поздравляю! Это ваша награда." << endl;
			GOLD += 50;
			XP += 50;
			if (XP >= 25 * GG)
			{
				XP = XP - 25 * GG;
				GG++;
				LVL++;
				if (LVL <= 10)
				{
					CHET_LVL++;
				}
				XAR_LVL += 2;
			}
			cout << "Вам дали пятьдесят золота и двадцать пять опыта" << endl;
			cin.get();
			break;
		}
	SUKA:
		PROY_DAT = rand() % (4 - 1 + 1) + 1;
		int prot = 0;
		if (PROY_DAT == 4 && BEZBAGH_MANEK >= 2)
		{
			prot = 1;
		}
		if (PROY_DAT == 4 && BEZBAGH_MANEK < 2)
		{
			goto SUKA;
		}
	REV:
	AGAGAR:
	SHIT:
		system("cls");
		cout << "Жизни: " << MAX_HEALS << "/" << HEALS << endl;
		cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
		cout << "Жизни врага: " << HEALS_MANEK_MAX << "/" << HEALS_MANEK << endl;
		cout << "Очки Безбашенности врага: " << MAX_BEZBAGH_MANEK << "/" << BEZBAGH_MANEK << endl;
		cout << "A - удар, B - уворот, C - защита, D - использовать умения героя, E - использовать артефакт, F - использовать расходники, G - выйти из бой" << endl;
		if (prot == 1)
		{
			cout << "Противник собирается использовать способность! Будте осторожны!" << endl;
		}
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'C':
			chto_eto = 3;
		case 'D':
			chto_eto = 4;
			break;
		case 'E':
			chto_eto = 5;
			break;
		case 'F':
			chto_eto = 6;
			break;
		case 'G':
			chto_eto = 7;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		case 'c':
			chto_eto = 3;
			break;
		case 'd':
			chto_eto = 4;
			break;
		case 'e':
			chto_eto = 5;
			break;
		case 'f':
			chto_eto = 6;
			break;
		case 'g':
			chto_eto = 7;
			break;
		}

		if (chto_eto == 7)
		{
			system("cls");
			cout << "Вы вышли из боя!" << endl;
			cin.get();
			break;
		}
		if (chto_eto == 0)
		{
			system("cls");
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
			goto AGAGAR;
		}
		if (chto_eto == 1)
		{
			int kyky = 0;
			int YRON_SEI_1;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			system("cls");
			if (GTRH_1 == 1)
			{
				system("cls");
				cout << "Противник смог увернуться и контратаковал вас!" << endl;
				cin.get();
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2;
				HEALS -= YRON_SEI_2;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона" << endl;
				cin.get();
				GTRH_1 = 0;
				PROY_DAT = rand() % (4 - 1 + 1) + 1;
				chet_bitva_1++;
				chet_bitva_2++;
				continue;
			}
			if (GTRH_2 == 1)
			{
				system("cls");
				cout << "Противник мог защититься и блокировал большую часть урона!" << endl;
				cin.get();
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				YRON_SEI_1 = YRON_SEI_1 / 2;
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				BEZBAGH++;
				GTRH_2 = 0;
				PROY_DAT = rand() % (4 - 1 + 1) + 1;
				chet_bitva_1++;
				chet_bitva_2++;
				continue;
			}
			if (GTRH_2 == 0 || GTRH_1 == 0)
			{
				system("cls");
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		if (chto_eto == 2)
		{
			system("cls");
			int kyky = 0;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			int Chance_yvorot = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvorot <= YVOROT)
			{
				system("cls");
				cout << "Вы смогли увернуться от атаки и даже контратакавали врага! Вот это ловкость!" << endl;
				cin.get();
				int YRON_SEI_1;
				if (kyky == 1)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
				}
				if (kyky == 0)
				{
					YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
				}
				HEALS_MANEK -= YRON_SEI_1;
				system("cls");
				cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
				cin.get();
				KAYK = 1;
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
			else
			{
				system("cls");
				cout << "Какая жалость! Вы постигли неудачу и по вам все равно попали!" << endl;
				cin.get();
				KAYK = 0;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		if (chto_eto == 3)
		{
			system("cls");
			int Chance_zashiti = rand() % (100 - 1 + 1) + 1;
			if (Chance_zashiti >= 5)
			{
				system("cls");
				cout << "Вы успешно защилитись от большей части урона!" << endl;
				cin.get();
				SUMER = 1;
				BEZBAGH++;
				chet_bitva_1++;
				chet_bitva_2++;
			}
			else
			{
				system("cls");
				cout << "Ух, сегодня явно не ваш день... вы не смогли защититься." << endl;
				cin.get();
				SUMER = 0;
				chet_bitva_1++;
				chet_bitva_2++;
			}
		}
		int KLIK = 0;
		if (chto_eto == 4)
		{
			system("cls");
			do {
				cout << "Какую способность хотите использовать?" << endl;
				cout << "Для использования первой необходимо две ОБ, второй четыре ОБ, третий шесть ОБ" << endl;
				cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
				cout << "У вас сейчас есть: " << mrazota_1_NAZ << ", " << mrazota_2_NAZ << ", " << mrazota_3_NAZ << endl;
				cout << "Нажмите 1, 2, 3 для использования соответственных способностей или A для возвращение в меню боя!" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case '3':
					chto_eto_2 = 3;
					break;
				case 'A':
					chto_eto_2 = 4;
					break;
				case 'a':
					chto_eto_2 = 4;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1 && BEZBAGH >= 2 && mrazota_1 != 0)
				{
					if (mrazota_1 == 1)
					{
						system("cls");
						cout << "Вы используете свою первую способность Чудовищный разрез! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						system("cls");
						cout << "Удар нанес двадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 20;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 2)
					{
						system("cls");
						cout << "Вы используете свою первую способность Двойной укол! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						int ykol_1 = rand() % (15 - 1 + 1) + 1;
						int ykol_2 = rand() % (15 - 1 + 1) + 1;
						system("cls");
						cout << "Первый удар наносит " << ykol_1 << ", а второй " << ykol_2 << endl;
						cin.get();
						HEALS_MANEK -= ykol_1;
						HEALS_MANEK -= ykol_2;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 7)
					{
						system("cls");
						cout << "Вы используете свою первую способность Огненый кулак <Ейс>! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						system("cls");
						cout << "Удар нанес двадцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 25;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 8)
					{
						system("cls");
						cout << "Вы используете свою первую способность Ледяные когти <Пет Шоп>! И тем самым наносите противнику серьезные увечья!" << endl;
						cin.get();
						int ykol_1 = rand() % (8 - 1 + 1) + 1;
						int ykol_2 = rand() % (8 - 1 + 1) + 1;
						int ykol_3 = rand() % (8 - 1 + 1) + 1;
						int ykol_4 = rand() % (8 - 1 + 1) + 1;
						system("cls");
						cout << "Первый коготь наносит " << ykol_1 << ", второй " << ykol_2 << ", третий " << ykol_3 << ", четвертый " << ykol_4 << endl;
						cin.get();
						HEALS_MANEK -= ykol_1;
						HEALS_MANEK -= ykol_2;
						HEALS_MANEK -= ykol_3;
						HEALS_MANEK -= ykol_4;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						break;
					}
					if (mrazota_1 == 13)
					{
						system("cls");
						cout << "Вы используете свою первую способность Удар щитом! И тем самым наносите противнику серьезные увечья, а так же оглушаете противника, что позволяет сделать еще один ход!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли десять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 10;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						goto SHIT;
					}
					if (mrazota_1 == 14)
					{
						system("cls");
						cout << "Вы используете свою первую способность Рев загного зверя! И тем самым восстанавливаете себе немного жизней, а так же пугаете противника, что позволяет сделать еще один ход!" << endl;
						cin.get();
						system("cls");
						cout << "Вы восстановили пятнадцать жизней!" << endl;
						cin.get();
						HEALS += 15;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 2;
						goto REV;
					}
				}
				if (chto_eto_2 == 2 && BEZBAGH >= 4 && mrazota_2 != 0)
				{
					if (mrazota_2 == 3)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Клык змеи! И тем самым отравляете на пять ходов своего противника!" << endl;
						cin.get();
						KLIK = 5;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 4)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Блюр! И тем самым уворачиваетесь от любой атаке, кроме магических!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 9)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Догматы Истины! И тем самым восстанавливаете себе здоровье, а так же блокируете некоторую часть урона, если противник вас бьет!" << endl;
						cin.get();
						system("cls");
						cout << "Вы восстановили двадцать жизней!" << endl;
						cin.get();
						HEALS += 20;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						SUMER = 1;
						break;
					}
					if (mrazota_2 == 10)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Шторвомой Ураган <Райдзин>! И тем самым наносите противнику колоссальный урон!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли противнику тридцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 35;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 15)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Ярость берсерка! И тем самым наносите противнику колоссальный урон!" << endl;
						cin.get();
						system("cls");
						cout << "Вы нанесли противнику тридцать пять урона!" << endl;
						cin.get();
						HEALS_MANEK -= 35;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					if (mrazota_2 == 16)
					{
						system("cls");
						cout << "Вы используете свою вторую способность Каменная кожа! И тем самым избегаете любого немагического урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 4;
						break;
					}
					chet_bitva_1++;
					chet_bitva_2++;
					cin.get();
				}
				if (chto_eto_2 == 3 && BEZBAGH >= 6 && mrazota_3 != 0)
				{
					if (mrazota_3 == 5)
					{
						system("cls");
						cout << "Вы используете свою третью способность Сущность вора! И тем самым крадете у противника золото и опыт!" << endl;
						cin.get();
						int craja1 = rand() % (25 - 10 + 1) + 10;
						int craja2 = rand() % (10 - 5 + 1) + 5;
						system("cls");
						cout << "Вы украли " << craja1 << " золота и " << craja2 << " опыта!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 6)
					{
						system("cls");
						cout << "Вы используете свою третью способность Песнь клинков! И тем самым наносите противнику смертельный урон, а так же отравляете его на три хода!" << endl;
						cin.get();
						HEALS_MANEK -= 50;
						KLIK = 3;
						system("cls");
						cout << "Вы нанесли противнику пятьдесят урона!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 11)
					{
						system("cls");
						cout << "Вы используете свою третью способность Ярость Титанов <Гуливера>! И тем самым наносите противнику смертельный урон, а так же блокируете любой немагический урон!" << endl;
						cin.get();
						HEALS_MANEK -= 50;
						KAYK = 1;
						system("cls");
						cout << "Вы нанесли противнику пятьдесят урона!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
					if (mrazota_3 == 12)
					{
						system("cls");
						cout << "Вы используете свою третью способность Щелчек Хаоса <Диса>! Вы и сами не знаете к чему это может привести... но в этом и суть Хаоса!" << endl;
						cin.get();
						int Xaoc = rand() % (3 - 1 + 1) + 1;
						if (Xaoc == 1)
						{
							system("cls");
							cout << "Вы нанесли противнику сто урона! Но и себе двадцать пять!" << endl;
							cin.get();
							HEALS_MANEK -= 100;
							HEALS -= 25;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						if (Xaoc == 2)
						{
							system("cls");
							cout << "Вы восстановили себе пятьдесят жизней! Но и противнику пятнадцать!" << endl;
							cin.get();
							HEALS_MANEK += 15;
							HEALS += 50;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						if (Xaoc == 3)
						{
							system("cls");
							cout << "Вы... ничего не сделали?.. Хм, хотя на грани сознания вы почувствовали, что где-то закибербулили одного Леху! Правда вы не знаете, что это все означает. Ну, да и ладно, заберите обратно половину ОБ и немного золота что ли." << endl;
							cin.get();
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 3;
							int craja1 = rand() % (10 - 5 + 1) + 5;
							system("cls");
							cout << "Вы получили " << craja1 << " золота!" << endl;
							cin.get();
							break;
						}
					}
					if (mrazota_3 == 17)
					{
						system("cls");
						cout << "Вы используете свою третью способность По Настояшему Серьезный Удар! Вы используете всю силу своих мышц и, возможно, наносите противнику фатальный урон!" << endl;
						cin.get();
						int ser_ydar = rand() % (100 - 1 + 1) + 1;
						if (ser_ydar >= 90)
						{
							system("cls");
							cout << "Вы просто лысое чудовище во плоти. Вы нанесли почти тысячу урона!" << endl;
							cin.get();
							HEALS_MANEK -= 999;
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}
						else
						{
							system("cls");
							cout << "Оу! Вы промахнулись!" << endl;
							cin.get();
							chet_bitva_1++;
							chet_bitva_2++;
							BEZBAGH -= 6;
							break;
						}

					}
					if (mrazota_3 == 18)
					{
						system("cls");
						cout << "Вы используете свою третью способность Шипы розы! Покрывая все тело колючками, вы три хода подряд возврашаете любой урон, кроме магического и контратак!" << endl;
						cin.get();
						KOLIK = 3;
						chet_bitva_1++;
						chet_bitva_2++;
						BEZBAGH -= 6;
						break;
					}
				}
				if (chto_eto_2 == 4)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					cin.get();
					goto AGAGAR;
				}
				if (BEZBAGH <= 2 || mrazota_3 == 0 || mrazota_2 == 0 || mrazota_1 == 0)
				{
					system("cls");
					cout << "Вам не хватает ОБ или у вас не открыта еще способность!" << endl;
					cin.get();
				}
				system("cls");
			} while (true);
			system("cls");
		}
		if (chto_eto == 5)
		{
			system("cls");
			do {
				cout << "Какой артефакт использовать?" << endl;
				cout << "Сейчас артефакты заряжены на: первый - " << chet_bitva_1 << ", второй - " << chet_bitva_2 << endl;
				cout << "У вас есть в инвентаре: " << blat_1_NAZ << ", " << blat_1_NAZ << endl;
				cout << "Нажмите 1 или 2 для использования соответственных артефактов, или A для возвращения в меню боя" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case 'A':
					chto_eto_2 = 3;
					break;
				case 'a':
					chto_eto_2 = 3;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1 && chet_bitva_1 == 3 && blat_1 != 0)
				{
					if (blat_1 == 1)
					{
						system("cls");
						cout << "Вы решили использовать Каменый плащ! Прекрывшись им вы смогли избежать урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						break;
					}
					if (blat_1 == 2)
					{
						system("cls");
						cout << "Вы решили использовать Банка пива! Открывая банку пенного и выпивая ее залпом, вы ощущаете прилив сил! Ух, хорошо пошла!" << endl;
						cin.get();
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						HEALS += 15;
						break;
					}
					if (blat_1 == 5)
					{
						system("cls");
						cout << "Вы решили использовать Домашние тапки! Удивительная скорость! Вы смогли дважды ударить противника!" << endl;
						cin.get();
						int kyky = 0;
						int YRON_SEI_1;
						if (SUKA_2 != 0 && SUKA_1 != 0)
						{
							kyky = 1;
						}
						system("cls");
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						chet_bitva_1 = 0;
						chet_bitva_2++;
						BEZBAGH++;
						break;
					}
				}
				if (chto_eto_2 == 2 && chet_bitva_2 == 3 && blat_2 != 0)
				{
					if (blat_2 == 1)
					{
						system("cls");
						cout << "Вы решили использовать Каменый плащ! Прекрывшись им вы смогли избежать урона!" << endl;
						cin.get();
						KAYK = 1;
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						break;
					}
					if (blat_2 == 2)
					{
						system("cls");
						cout << "Вы решили использовать Банка пива! Открывая банку пенного и выпивая ее залпом, вы ощущаете прилив сил! Ух, хорошо пошла!" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						HEALS += 15;
						break;
					}
					if (blat_2 == 5)
					{
						system("cls");
						cout << "Вы решили использовать Домашние тапки! Удивительная скорость! Вы смогли дважды ударить противника!" << endl;
						cin.get();
						int kyky = 0;
						int YRON_SEI_1;
						if (SUKA_2 != 0 && SUKA_1 != 0)
						{
							kyky = 1;
						}
						system("cls");
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						if (kyky == 1)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) + (MAX_STRONGS * BUFF_YR) - (MAX_STRONGS * EFFECT_DEF)));
						}
						if (kyky == 0)
						{
							YRON_SEI_1 = HEALS_MANEK - (HEALS_MANEK - (MAX_STRONGS + (MAX_STRONGS * BRON_5_1) - (MAX_STRONGS * EFFECT_DEF)));
						}
						HEALS_MANEK -= YRON_SEI_1;
						cout << "Вы ударили противника и нанесли ему " << YRON_SEI_1 << " урона" << endl;
						cin.get();
						chet_bitva_1++;
						chet_bitva_2 = 0;
						BEZBAGH++;
						break;
					}
				}
				if ((chto_eto_2 == 1 || chto_eto_2 == 2) && (chet_bitva_2 == 3 || chet_bitva_1 == 3) && (blat_1 == 3 || blat_1 == 4 || blat_2 == 3 || blat_2 == 4))
				{
					system("cls");
					cout << "У вас артефакт, который срабатават случайным образом! Его нельзя использовать!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 3)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					goto AGAGAR;
					cin.get();
				}
				else
				{
					system("cls");
					cout << "У вас нет артефактов или они еще не зарадялись!" << endl;
					cin.get();
				}
			} while (true);
		}
		if (chto_eto == 6)
		{
			system("cls");
			do {
				cout << "Что хотите использовать?" << endl;
				cout << "У вас есть в наличии: бомб - " << BOMBS << ", стрел - " << STRELA << ", зелий здоровья - " << HP_POUCHEN << endl;
				cout << "Нажмите 1, 2, 3 для использования соответственных расходников или A для возвращения в меню боя" << endl;
				char SNOPKA = _getch();
				int chto_eto_2 = 0;
				switch (SNOPKA)
				{
				case '1':
					chto_eto_2 = 1;
					break;
				case '2':
					chto_eto_2 = 2;
					break;
				case '3':
					chto_eto_2 = 3;
					break;
				case 'A':
					chto_eto_2 = 4;
					break;
				case 'a':
					chto_eto_2 = 4;
					break;
				}
				if (chto_eto_2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto_2 == 1)
				{
					if (BOMBS != 0)
					{
						system("cls");
						cout << "Вы кидайте бомбу во врага! Ух, это было громко!" << endl;
						BOMBS--;
						cout << "Бомба нанесла пятнадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 15;
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (BOMBS == 0)
					{
						system("cls");
						cout << "У вас нет бомб! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 2)
				{
					if (STRELA != 0)
					{
						system("cls");
						cout << "Вы стреляете из лука и попадаете в противника! Прямо в яблочко!" << endl;
						STRELA--;
						cout << "Бомба нанесла двадцать урона!" << endl;
						cin.get();
						HEALS_MANEK -= 20;
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (STRELA == 0)
					{
						system("cls");
						cout << "У вас нет стрел! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 3)
				{
					if (HP_POUCHEN != 0)
					{
						system("cls");
						cout << "Вы берете и выпиваете все содержимое бутылки! По вкусу не очень, конечно, но зато какой приход сил!" << endl;
						HP_POUCHEN--;
						cout << "Зелье здоровья восстановило тридцать процентов жизней!" << endl;
						cin.get();
						int xp_xp = HEALS / 3;
						HEALS += xp_xp;
						if (HEALS >= MAX_HEALS)
						{
							HEALS = MAX_HEALS;
						}
						BEZBAGH++;
						chet_bitva_1++;
						chet_bitva_2++;
						break;
					}
					if (HP_POUCHEN == 0)
					{
						system("cls");
						cout << "У вас нет зелий здоровья! Какая жалость!" << endl;
						cin.get();
					}
				}
				if (chto_eto_2 == 4)
				{
					system("cls");
					cout << "Вы вернулись в меню боя" << endl;
					goto AGAGAR;
					cin.get();
				}
			} while (true);
		}
		if (blat_1 == 3 || blat_1 == 4)
		{
			if (blat_1 == 3)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник бьет Мистера Кибербулинг вместо вас! Не сказать, что тот хоть как-то пострадал." << endl;
				}
			}
			if (blat_1 == 4)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник падает так же как и Сервера МИРЭА и пропускает ход!" << endl;
				}
			}
		}
		if (blat_2 == 3 || blat_2 == 4)
		{
			if (blat_2 == 3)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник бьет Мистера Кибербулинг вместо вас! Не сказать, что тот хоть как-то пострадал." << endl;
				}
			}
			if (blat_2 == 4)
			{
				int KIBER = rand() % (100 - 1 + 1) + 1;
				if (KIBER > 85)
				{
					KAYK = 1;
					cout << "Противник падает так же как и Сервера МИРЭА и пропускает ход!" << endl;
				}
			}
		}
		if (CHET_REZ != 0)
		{
			system("cls");
			cout << "Кровотичение нанесло вам пять урона!" << endl;
			cin.get();
			HEALS -= 3;
			CHET_REZ--;
		}
		if (KLIK != 0)
		{
			system("cls");
			cout << "Яд нанес противнику десять урона!" << endl;
			cin.get();
			HEALS_MANEK -= 10;
			KLIK--;
		}
		if (chet_bitva_1 > 3 || chet_bitva_2 > 3)
		{
			chet_bitva_1 = 3;
			chet_bitva_2 = 3;
		}
		if (BEZBAGH >= 10)
		{
			BEZBAGH = 10;
		}
		if (BEZBAGH_MANEK >= 10)
		{
			BEZBAGH_MANEK = 10;
		}
		system("cls");
		if (PROY_DAT == 1)
		{
			int kyky = 0;
			if (SUKA_2 != 0 && SUKA_1 != 0)
			{
				kyky = 1;
			}
			if (KAYK == 1)
			{
				cout << "Противник не смог нанести вам урон!" << endl;
				KAYK = 0;
				continue;
			}
			if (SUMER == 1)
			{
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2 / 2;
				HEALS -= YRON_SEI_2;
				BEZBAGH_MANEK++;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона!" << endl;
				SUMER = 0;
				if (KOLIK != 0)
				{
					cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
					HEALS_MANEK -= YRON_SEI_2;
					KOLIK--;
				}
				cin.get();
				continue;
			}
			if (SUMER == 0 || KAYK == 0)
			{
				double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
				int YRON_SEI_2;
				if (kyky == 1)
				{
					YRON_SEI_2 = ((STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS)) * BUFF_DEF);
				}
				if (kyky == 0)
				{
					YRON_SEI_2 = (STRONGS_MANEK - (STRONGS_MANEK * SUMA_ZAHS));
				}
				YRON_SEI_2 = YRON_SEI_2;
				HEALS -= YRON_SEI_2;
				BEZBAGH_MANEK++;
				system("cls");
				cout << "По вам ударил противник и вы получили " << YRON_SEI_2 << " урона!" << endl;
				cin.get();
				if (KOLIK != 0)
				{
					cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
					HEALS_MANEK -= YRON_SEI_2;
					KOLIK--;
				}
				continue;
			}
		}
		if (PROY_DAT == 2)
		{
			int Chance_yvorot_en = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvorot_en <= YGOROT)
			{
				GTRH_1 = 1;
				BEZBAGH_MANEK++;
				continue;
			}
			else
			{
				GTRH_1 = 0;
				continue;
			}
		}
		if (PROY_DAT == 3)
		{
			int Chance_yvrrot_en = rand() % (100 - 1 + 1) + 1;
			if (Chance_yvrrot_en <= 95)
			{
				GTRH_2 = 1;
				BEZBAGH_MANEK++;
				continue;
			}
			else
			{
				GTRH_2 = 0;
				continue;
			}
		}
		if (PROY_DAT == 4 && BEZBAGH_MANEK >= 2)
		{
		GHGFF:
			int Chance_yspos_en = rand() % (3 - 1 + 1) + 1;
			if (Chance_yspos_en == 1 && BEZBAGH_MANEK >= 2)
			{
				BEZBAGH_MANEK -= 2;
				int kyky = 0;
				if (SUKA_2 != 0 && SUKA_1 != 0)
				{
					kyky = 1;
				}
				if (KAYK == 1)
				{
					KAYK = 0;
					continue;
				}
				if (SUMER == 1)
				{
					double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
					int YRON_SEI_2;
					if (kyky == 1)
					{
						YRON_SEI_2 = ((SPOS_1 - (SPOS_1 * SUMA_ZAHS)) * BUFF_DEF);
					}
					if (kyky == 0)
					{
						YRON_SEI_2 = (SPOS_1 - (SPOS_1 * SUMA_ZAHS));
					}
					YRON_SEI_2 = YRON_SEI_2 / 2;
					HEALS -= YRON_SEI_2;
					system("cls");
					cout << "По вам ударил противник способностью и вы получили " << YRON_SEI_2 << " урона!" << endl;
					SUMER = 0;
					cin.get();
					if (KOLIK != 0)
					{
						cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
						HEALS_MANEK -= YRON_SEI_2;
						KOLIK--;
					}
					continue;
				}
				if (KAYK == 0 || SUMER == 0)
				{
					double SUMA_ZAHS = BRON_1_1 + BRON_2_1 + BRON_3_1 + BRON_4_1;
					int YRON_SEI_2;
					if (kyky == 1)
					{
						YRON_SEI_2 = ((SPOS_1 - (SPOS_1 * SUMA_ZAHS)) * BUFF_DEF);
					}
					if (kyky == 0)
					{
						YRON_SEI_2 = SPOS_1 - (SPOS_1 * SUMA_ZAHS);
					}
					HEALS -= YRON_SEI_2;
					system("cls");
					cout << "По вам ударил противник способностью и вы получили " << YRON_SEI_2 << " урона!" << endl;
					cin.get();
					if (KOLIK != 0)
					{
						cout << "Вы вернули противнику " << YRON_SEI_2 << endl;
						HEALS_MANEK -= YRON_SEI_2;
						KOLIK--;
					}
					continue;
				}
			}
			if (Chance_yspos_en == 2 && BEZBAGH_MANEK >= 4)
			{
				BEZBAGH_MANEK -= 4;
				CHET_REZ = 3;
			}
			if (Chance_yspos_en == 3 && BEZBAGH_MANEK >= 6)
			{
				BEZBAGH_MANEK -= 6;
				system("cls");
				cout << "По вам ударил противник способностью и вы получили тридцать пять магического урона!" << endl;
				cin.get();
				HEALS -= 15;
				continue;
			}
			else
			{
				goto GHGFF;
			}
		}
		system("cls");
	} while (PRAV != true);
	system("cls");
}
void ARENA_SELL(int& HEALS, int MAX_HEALS, int BEZBAGH, int MAX_BEZBAGH, int MAX_STRONGS, int& BOMBS, int& STRELA, double BUFF_YR, double BUFF_DEF, int& HP_POUCHEN, int& SUKA_1, int& SUKA_2, double BRON_1_1, double BRON_2_1, double BRON_3_1, double BRON_4_1, double BRON_5_1, int& GOLD, int& XP, int& LVL, int& GG, int& CHET_LVL, int YVOROT, int mrazota_1, int mrazota_2, int mrazota_3, string mrazota_1_NAZ, string mrazota_2_NAZ, string mrazota_3_NAZ, int blat_1, int blat_2, string blat_1_NAZ, string blat_2_NAZ, int& XAR_LVL)
{
	system("cls");
	bool VCE = false;
	do {
		cout << "A - сразится на Арене, B - тренировачный бой, C - уйти" << endl;
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'C':
			chto_eto = 3;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		case 'c':
			chto_eto = 3;
			break;
		}
		if (chto_eto == 0)
		{
			system("cls");
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
		}
		if (chto_eto == 1)
		{
			system("cls");
			BITVA_ARENA(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, GOLD, XP, LVL, GG, CHET_LVL, XAR_LVL);
			cout << "Вы вернулись в меню выбора на арене!" << endl;
			cin.get();
		}
		if (chto_eto == 2)
		{
			system("cls");
			BITVA_FALSE(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ);
			cout << "Вы вернулись в меню выбора на арене!" << endl;
			cin.get();
		}
		if (chto_eto == 3)
		{
			cout << "Вы ушли!" << endl;
			VCE = true;
			cin.get();
		}
		system("cls");
	} while (VCE != true);
	system("cls");
}
void BARDEL_SELL(int& GOLD, int& MAX_HEALS, int& HEALS, double& BUFF_DEF, double& BUFF_YR, int& ZADANIA, int& ZADANIA_GOT, int& SUKA_1, int& SUKA_2)
{
	bool VCE = false;
	int SELL_1 = 15;
	int SELL_2 = 25;
	int SELL_3 = 45;
	do {
	DUDUDU:
		cout << "Золото: " << GOLD << endl;
		cout << "Жизни: " << MAX_HEALS << "/" << HEALS << endl;
		cout << "Цена стандартного заказа(33% жизней и один бафф на защиту и урон): " << SELL_1 << endl;
		cout << "Цена VIP заказа(50% жизней и три баффа на защиту и урон): " << SELL_2 << endl;
		cout << "Цена парочки крепких студентов МИРЭА(100% жизней и пять баффов на защиту и урон): " << SELL_3 << endl;
		cout << "A - стандартный заказ, B - VIP заказ, C - парочка крепких студентов МИРЭА, D - взять задания у главы куртизанок, E - сдать задание главе куртизанок, F - уйти" << endl;
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'C':
			chto_eto = 3;
			break;
		case 'D':
			chto_eto = 4;
			break;
		case 'E':
			chto_eto = 5;
			break;
		case 'F':
			chto_eto = 6;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		case 'c':
			chto_eto = 3;
			break;
		case 'd':
			chto_eto = 4;
			break;
		case 'e':
			chto_eto = 5;
			break;
		case 'f':
			chto_eto = 6;
			break;
		}
		if (chto_eto == 0)
		{
			system("cls");
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
		}
		if (chto_eto == 1)
		{
			if (GOLD >= 15)
			{
				system("cls");
				cout << "Вы неплохо провели время и отдохнули в обществе девушки с заурядной внешностью, которая хоть и не особо, но все же старалась вам угодить. В конце концов не каждый день спишь с будущими героями, верно?" << endl;
				GOLD -= 15;
				BUFF_DEF = 0.1;
				BUFF_YR = 0.1;
				SUKA_1 = 1;
				SUKA_2 = 1;
				HEALS += MAX_HEALS / 3;
				if (HEALS >= MAX_HEALS)
				{
					HEALS = MAX_HEALS;
				}
				cin.get();
			}
			else
			{
				system("cls");
				cout << "У вас не хватает золота!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 2)
		{
			if (GOLD >= 25)
			{
				system("cls");
				cout << "Эту ночь вы запомните надолго и скорей всего, если выживите, будите рассказывать внукам(очень даже возможно, что для них это будет и днем своеобразного рождения), ибо то что вытворяли вы в компании двух нимф, которые даже разрешили парочку интересных и несовсем геройских утех, сложно описать словами без хорошой бутылки коньяка." << endl;
				GOLD -= 2;
				BUFF_DEF = 0.3;
				BUFF_YR = 0.3;
				SUKA_1 = 3;
				SUKA_2 = 3;
				HEALS += MAX_HEALS / 2;
				if (HEALS >= MAX_HEALS)
				{
					HEALS = MAX_HEALS;
				}
				cin.get();
			}
			else
			{
				system("cls");
				cout << "У вас не хватает золота!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 3)
		{
			if (GOLD >= 45)
			{
				system("cls");
				cout << "Как бы это не было странно, но данную ночь вы бы решили вообще не вспоминать никогда и ни за что. Вместо хоть какого-то отдыха и развлечения крепкие мирэашники пришли к вам поплакаться о своей несчастливой судьбе, где не вы их ебете, а преподаватели, да еще и в таких позах и способах о которых вы даже не слышали. Однако их слезы, собранные вами с пола и выжатые из одежды, что была на вас, обладали целебными свойствами, которые полностью сняли усталось и зарядили немалой энергией. Правда вы все равно не хотели бы повторять этот опыт." << endl;
				GOLD -= 45;
				BUFF_DEF = 0.5;
				BUFF_YR = 0.5;
				SUKA_1 = 5;
				SUKA_2 = 5;
				HEALS = MAX_HEALS;
				cin.get();
			}
			else
			{
				system("cls");
				cout << "У вас не хватает золота!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 4)
		{
			system("cls");
			do {
				int ZAD_DAT = rand() % (RANDOM_ZAD_MAX - RANDOM_ZAD_MIN + 1) + RANDOM_ZAD_MIN;
				cout << "Убейте для нас " << ZAD_DAT << " врагов и можете рассчитывать на мешок с золотом и небольшой бонус лично от меня~(Женщина с большой буквы, а так же пятым размером груди, подмигивает вам не слабо намекая на происхождение обещанного бонуса)" << endl;
				cout << "A - согласится, B - отказаться" << endl;
				char snopka = _getch();
				int chto_eto2 = 0;
				switch (snopka)
				{
				case 'A':
					chto_eto2 = 1;
					break;
				case 'B':
					chto_eto2 = 2;
					break;
				case 'a':
					chto_eto2 = 1;
					break;
				case 'b':
					chto_eto2 = 2;
					break;
				}
				if (chto_eto2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto2 == 1)
				{
					system("cls");
					cout << "Вы приняли задание!" << endl;
					ZADANIA_GOT = ZAD_DAT;
					ZADANIA = 1;
					cin.get();
					goto DUDUDU;
				}
				if (chto_eto2 == 2)
				{
					system("cls");
					cout << "Вы отказались! И очень зря кстати!" << endl;
					cin.get();
					goto DUDUDU;
				}
			} while (true);
		}
		if (chto_eto == 5)
		{
			if (ZADANIA == 1 && ZADANIA_GOT <= 0)
			{
				system("cls");
				cout << "Поздравляю, дорогой! Ты отлично справился с моим поручением и полностью заслужил свою награду! Забирай свой мешок с золотом!" << endl;
				int ZAD_DAT_NAG = rand() % (RANDOM_ZAD_NAG_MAX - RANDOM_ZAD_NAG_MIN + 1) + RANDOM_ZAD_NAG_MIN;
				cout << "В мешке было: " << ZAD_DAT_NAG << endl;
				GOLD += ZAD_DAT_NAG;
				ZADANIA = 0;
				ZADANIA_GOT = 0;
				cin.get();
				system("cls");
				cout << "А теперь... бонус, мой герой~ Хозяйка борделя отдним резким движением сбразывает вверх одежды, оголяя перед вами два огромных холма. Разрешаю немного потрогать, но осторожней, я давно этим не занималась~" << endl;
				cin.get();
				system("cls");
				cout << "(.)(.)" << endl;
				cin.get();
			}
			else
			{
				system("cls");
				cout << "У вас нет задания или вы его не выполнили!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 6)
		{
			system("cls");
			cout << "Вы ушли!" << endl;
			VCE = true;
			cin.get();
		}
		system("cls");
	} while (VCE != true);
	system("cls");
}
void KYZNECA_SELL(int& BRON_1, int& BRON_2, int& BRON_3, int& BRON_4, int& BRON_5, int& GOLD, int& STRELA, int& KEYS, int& BOMBS, int& ZAPCHASTI, int& SELL_BRON_1_ZAP, int& SELL_BRON_2_ZAP, int& SELL_BRON_3_ZAP, int& SELL_BRON_4_ZAP, int& SELL_BRON_5_ZAP, int& SELL_BOMBS_ZAP, int& SELL_KEYS_ZAP, int& SELL_STRELA_ZAP, double& BRON_1_1, double& BRON_2_1, double& BRON_3_1, double& BRON_4_1, double& BRON_5_1)
{
Afain:
	bool VCE = false;
	int SELL_BRON_1 = 10;
	int SELL_BRON_2 = 20;
	int SELL_BRON_3 = 15;
	int SELL_BRON_4 = 15;
	int SELL_BRON_5 = 25;
	int SELL_BOMBS = 5;
	int SELL_KEYS = 5;
	int SELL_STRELA = 5;
	do {
		cout << "A - улучшить броню или оружие, B - создать расходные предметы, C - уйти" << endl;
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'C':
			chto_eto = 3;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		case 'c':
			chto_eto = 3;
			break;
		}
		if (chto_eto == 0)
		{
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
		}
		if (chto_eto == 1)
		{
			system("cls");
			bool VCE1 = false;
			do {
				cout << "Золото: " << GOLD << " Запчасти: " << ZAPCHASTI << endl;
				cout << setw(25) << "Улучшить шлем стоит золота и запчастей: " << SELL_BRON_1 << "/" << SELL_BRON_1_ZAP << endl;
				cout << setw(25) << "Улучшить нагрудник стоит золота и запчастей: " << SELL_BRON_2 << "/" << SELL_BRON_2_ZAP << endl;
				cout << setw(25) << "Улучшить поножи стоит золота и запчастей: " << SELL_BRON_3 << "/" << SELL_BRON_3_ZAP << endl;
				cout << setw(25) << "Улучшить наручи стоит золота и запчастей: " << SELL_BRON_4 << "/" << SELL_BRON_4_ZAP << endl;
				cout << setw(25) << "Улучшить оружие стоит золота и запчастей: " << SELL_BRON_5 << "/" << SELL_BRON_5_ZAP << endl;
				cout << "A - улучшить оружие, B - улучшить нагрудник, С - улучшить наручи, D - улучшить поножи, E - улучшить шлем, F - вернуться в меню выбора" << endl;
				char knopka = _getch();
				int chto_eto2 = 0;
				switch (knopka)
				{
				case 'A':
					chto_eto2 = 1;
					break;
				case 'B':
					chto_eto2 = 2;
					break;
				case 'C':
					chto_eto2 = 3;
					break;
				case 'D':
					chto_eto2 = 4;
					break;
				case 'E':
					chto_eto2 = 5;
					break;
				case 'F':
					chto_eto2 = 6;
					break;
				case 'a':
					chto_eto2 = 1;
					break;
				case 'b':
					chto_eto2 = 2;
					break;
				case 'c':
					chto_eto2 = 3;
					break;
				case 'd':
					chto_eto2 = 4;
					break;
				case 'e':
					chto_eto2 = 5;
					break;
				case 'f':
					chto_eto2 = 6;
					break;
				}
				if (chto_eto2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto2 == 1)
				{
					if (GOLD >= 25 && ZAPCHASTI >= SELL_BRON_5_ZAP && BRON_5 != 3)
					{
						system("cls");
						GOLD -= 25;
						ZAPCHASTI -= SELL_BRON_5_ZAP;
						SELL_BRON_5_ZAP++;
						BRON_5++;
						BRON_5_1 += 0.2;
						cout << "Вы успешно улучшили оружие!" << endl;
						cin.get();
					}
					else
					{
						system("cls");
						cout << "У вас нет нужного количества денег, деталей или броня уже повышена до максимума!" << endl;
						cin.get();
					}
				}
				if (chto_eto2 == 2)
				{
					if (GOLD >= 20 && ZAPCHASTI >= SELL_BRON_2_ZAP && BRON_2 != 3)
					{
						system("cls");
						GOLD -= 20;
						ZAPCHASTI -= SELL_BRON_2_ZAP;
						SELL_BRON_2_ZAP++;
						BRON_2++;
						BRON_2_1 += 0.08;
						cout << "Вы успешно улучшили доспех!" << endl;
						cin.get();
					}
					else
					{
						system("cls");
						cout << "У вас нет нужного количества денег, деталей или броня уже повышена до максимума!" << endl;
						cin.get();
					}
				}
				if (chto_eto2 == 3)
				{
					if (GOLD >= 15 && ZAPCHASTI >= SELL_BRON_3_ZAP && BRON_3 != 3)
					{
						system("cls");
						GOLD -= 15;
						ZAPCHASTI -= SELL_BRON_3_ZAP;
						SELL_BRON_3_ZAP++;
						BRON_3++;
						BRON_3_1 += 0.05;
						cout << "Вы успешно улучшили доспех!" << endl;
						cin.get();
					}
					else
					{
						system("cls");
						cout << "У вас нет нужного количества денег, деталей или броня уже повышена до максимума!" << endl;
						cin.get();
					}
				}
				if (chto_eto2 == 4)
				{
					if (GOLD >= 15 && ZAPCHASTI >= SELL_BRON_4_ZAP && BRON_4 != 3)
					{
						system("cls");
						GOLD -= 15;
						ZAPCHASTI -= SELL_BRON_4_ZAP;
						SELL_BRON_4_ZAP++;
						BRON_4++;
						BRON_4_1 += 0.05;
						cout << "Вы успешно улучшили доспех!" << endl;
						cin.get();
					}
					else
					{
						system("cls");
						cout << "У вас нет нужного количества денег, деталей или броня уже повышена до максимума!" << endl;
						cin.get();
					}
				}
				if (chto_eto2 == 5)
				{
					if (GOLD >= 10 && ZAPCHASTI >= SELL_BRON_1_ZAP && BRON_1 != 3)
					{
						system("cls");
						GOLD -= 10;
						ZAPCHASTI -= SELL_BRON_1_ZAP;
						SELL_BRON_1_ZAP++;
						BRON_1++;
						BRON_1_1 += 0.015;
						cout << "Вы успешно улучшили доспех!" << endl;
						cin.get();
					}
					else
					{
						system("cls");
						cout << "У вас нет нужного количества денег, деталей или броня уже повышена до максимума!" << endl;
						cin.get();
					}
				}
				if (chto_eto2 == 6)
				{
					system("cls");
					cout << "Вы вернулись в меню выбора!" << endl;
					cin.get();
					system("cls");
					goto Afain;
				}
				system("cls");
			} while (VCE1 != true);
			system("cls");
		}
		if (chto_eto == 2)
		{
			system("cls");
			bool VCE1 = false;
			do {
				cout << "Золото: " << GOLD << " Запчасти: " << ZAPCHASTI << endl;
				cout << setw(25) << "Создать бомбу стоит золота и запчастей: " << SELL_BOMBS << "/" << SELL_BOMBS_ZAP << endl;
				cout << setw(25) << "Создать стрелу стоит золота и запчастей: " << SELL_STRELA << "/" << SELL_STRELA_ZAP << endl;
				cout << setw(25) << "Создать ключ стоит золота и запчастей: " << SELL_KEYS << "/" << SELL_KEYS_ZAP << endl;
				cout << "A - создать ключ, B - создать бомбу, C - создать стрелу, D - вернуться в меню выбора" << endl;
				char knopka = _getch();
				int chto_eto2 = 0;
				switch (knopka)
				{
				case 'A':
					chto_eto2 = 1;
					break;
				case 'B':
					chto_eto2 = 2;
					break;
				case 'C':
					chto_eto2 = 3;
					break;
				case 'D':
					chto_eto2 = 4;
					break;
				case 'a':
					chto_eto2 = 1;
					break;
				case 'b':
					chto_eto2 = 2;
					break;
				case 'c':
					chto_eto2 = 3;
					break;
				case 'd':
					chto_eto2 = 4;
				}
				if (chto_eto2 == 0)
				{
					system("cls");
					cout << "Вы ничего не сделали!" << endl;
					cin.get();
				}
				if (chto_eto2 == 1)
				{
					if (GOLD >= 5 && ZAPCHASTI >= SELL_KEYS_ZAP)
					{
						system("cls");
						GOLD -= 5;
						ZAPCHASTI -= SELL_KEYS_ZAP;
						KEYS++;
						cout << "Вы успешно создали предмет!" << endl;
						cin.get();
					}
					else
					{
						system("cls");
						cout << "У вас нет нужного количества денег или деталей!" << endl;
						cin.get();
					}
				}
				if (chto_eto2 == 2)
				{
					if (GOLD >= 5 && ZAPCHASTI >= SELL_BOMBS_ZAP)
					{
						system("cls");
						GOLD -= 5;
						ZAPCHASTI -= SELL_BOMBS_ZAP;
						BOMBS++;
						cout << "Вы успешно создали предмет!" << endl;
						cin.get();
					}
					else
					{
						system("cls");
						cout << "У вас нет нужного количества денег или деталей!" << endl;
						cin.get();
					}
				}
				if (chto_eto2 == 2)
				{
					if (GOLD >= 5 && ZAPCHASTI >= SELL_STRELA_ZAP)
					{
						system("cls");
						GOLD -= 5;
						ZAPCHASTI -= SELL_STRELA_ZAP;
						STRELA++;
						cout << "Вы успешно создали предмет!" << endl;
						cin.get();
					}
					else
					{
						system("cls");
						cout << "У вас нет нужного количества денег или деталей!" << endl;
						cin.get();
					}
				}
				if (chto_eto2 == 4)
				{
					system("cls");
					cout << "Вы вернулись в меню выбора!" << endl;
					cin.get();
					system("cls");
					goto Afain;
				}
				system("cls");
			} while (VCE1 != true);
			system("cls");
		}
		if (chto_eto == 3)
		{
			system("cls");
			cout << "Вы ушли!" << endl;
			VCE = true;
			cin.get();
		}
		system("cls");
	} while (VCE != true);
	system("cls");
}
void MAGAZIN_SELL(int& GOLD, int& KEYS, int& BOMBS, int& HP_POUCHEN, int& ZAPCHASTI, int& STRELA, int& SELL_KEYS_KOL, int& SELL_BOMBS_KOL, int& SELL_HP_POUCHEN_KOL, int& SELL_ZAPCHASTI_KOL, int& SELL_STRELA_KOL)
{
	int SELL_KEYS = 20;
	int SELL_BOMBS = 10;
	int SELL_HEALS = 15;
	int SELL_ZAPCHASTI = 25;
	int SELL_STRELA = 15;
	bool VCE = false;
	do {
		cout << "Золото: " << GOLD << endl;
		cout << setw(25) << "Цена ключа: " << SELL_KEYS << setw(25) << " Количество: " << SELL_KEYS_KOL << endl;
		cout << setw(25) << "Цена бомбы: " << SELL_BOMBS << setw(25) << " Количество: " << SELL_BOMBS_KOL << endl;
		cout << setw(25) << "Цена зелья здоровья: " << SELL_HEALS << setw(25) << " Количество: " << SELL_HP_POUCHEN_KOL << endl;
		cout << setw(25) << "Цена запчасти: " << SELL_ZAPCHASTI << setw(25) << " Количество: " << SELL_ZAPCHASTI_KOL << endl;
		cout << setw(25) << "Цена стрелы: " << SELL_STRELA << setw(25) << " Количество: " << SELL_STRELA_KOL << endl;
		cout << "A - купить ключь, B - купить бомбу, C - купить зелье здоровья, D - купить запчасти, E - купить стрелы, F - уйти" << endl;
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case 'A':
			chto_eto = 1;
			break;
		case 'B':
			chto_eto = 2;
			break;
		case 'C':
			chto_eto = 3;
			break;
		case 'D':
			chto_eto = 4;
			break;
		case 'E':
			chto_eto = 5;
			break;
		case 'F':
			chto_eto = 6;
			break;
		case 'a':
			chto_eto = 1;
			break;
		case 'b':
			chto_eto = 2;
			break;
		case 'c':
			chto_eto = 3;
			break;
		case 'd':
			chto_eto = 4;
			break;
		case 'e':
			chto_eto = 5;
			break;
		case 'f':
			chto_eto = 6;
			break;
		}
		if (chto_eto == 0)
		{
			system("cls");
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
		}
		if (chto_eto == 1)
		{
			if (GOLD >= 20 && SELL_KEYS_KOL != 0)
			{
				system("cls");
				cout << "Вы купили ключ!" << endl;
				GOLD -= SELL_KEYS;
				SELL_KEYS_KOL--;
				KEYS++;
				cin.get();
			}
			else
			{
				system("cls");
				cout << "Не хватает золота или ключи закончились!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 2)
		{
			if (GOLD >= 10 && SELL_BOMBS_KOL != 0)
			{
				system("cls");
				cout << "Вы купили бомбу!" << endl;
				GOLD -= SELL_BOMBS;
				SELL_BOMBS_KOL--;
				BOMBS++;
				cin.get();
			}
			else
			{
				system("cls");
				cout << "Не хватает золота или бомбы закончились!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 3)
		{
			if (GOLD >= 15 && SELL_HP_POUCHEN_KOL != 0)
			{
				system("cls");
				cout << "Вы купили зелья здоровья!" << endl;
				GOLD -= SELL_HEALS;
				SELL_HP_POUCHEN_KOL--;
				HP_POUCHEN++;
				cin.get();
			}
			else
			{
				system("cls");
				cout << "Не хватает золота или зелья здоровья закончились!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 4)
		{
			if (GOLD >= 15 && SELL_ZAPCHASTI_KOL != 0)
			{
				system("cls");
				cout << "Вы купили запчасти!" << endl;
				GOLD -= SELL_ZAPCHASTI;
				SELL_ZAPCHASTI_KOL--;
				ZAPCHASTI++;
				cin.get();
			}
			else
			{
				system("cls");
				cout << "Не хватает золота или запчасти закончились!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 5)
		{
			if (GOLD >= 15 && SELL_STRELA_KOL != 0)
			{
				system("cls");
				cout << "Вы купили стрелы!" << endl;
				GOLD -= SELL_STRELA;
				SELL_STRELA_KOL--;
				STRELA++;
				cin.get();
			}
			else
			{
				system("cls");
				cout << "Не хватает золота или стрелы закончились!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 6)
		{
			system("cls");
			cout << "Вы ушли!" << endl;
			VCE = true;
			cin.get();
		}
		system("cls");
	} while (VCE != true);
	system("cls");
}
void MENY(string& IMA)
{
	bool Prav = false;
	int chto_eto = 1;
AGAIN:
	int potverd = 0;
	do
	{
		if (chto_eto == 1)
		{
			cout << setw(40) << "GACHI DUNGEON" << endl;
			wcout << endl;
			wcout << endl;
			wcout << endl;
			cout << setw(35) << "====> " << setw(11) << "Начать игру" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << setw(35) << "Авторы" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << setw(35) << "Выход" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			if (potverd == 1)
			{
				system("cls");
				bool GIMO = false;
				int chto_eto_2 = 2;
				do {
					cout << "Вы уверены в своем выборе?" << endl;
					if (chto_eto_2 == 1)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << " ^" << endl;
						cout << " |" << endl;
						if (potverd == 2)
						{
							cout << "Введите имя Вашего приключенца: ";
							cin >> IMA;
							cout << endl;
							cout << "Да начнется приключение!" << endl;
							cin.get();
							Prav = true;
							GIMO - true;
						}
					}
					if (chto_eto_2 == 2)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << "   " << "  ^" << endl;
						cout << "   " << "  |" << endl;
						if (potverd == 2)
						{
							cout << "Вы вернулись в меню!" << endl;
							cin.get();
							system("cls");
							potverd = 0;
							goto AGAIN;
						}
					}
					if (Prav == true)
					{
						break;
					}
					char SNOPKA = _getch();
					switch (SNOPKA)
					{
					case 'a':
						chto_eto_2++;
						break;
					case 'd':
						chto_eto_2--;
						break;
					case 'A':
						chto_eto_2++;
						break;
					case 'D':
						chto_eto_2--;
						break;
					case VK_RETURN:
						potverd = 2;
						break;
					default:
						cout << "Нажимайте A/D для скрола в меню и ENTER для потверждения!" << endl;
						cin.get();
					}
					if (chto_eto_2 == 3)
					{
						chto_eto_2 = 1;
					}
					if (chto_eto_2 == 0)
					{
						chto_eto_2 = 2;
					}
					system("cls");
				} while (GIMO != true);
				system("cls");
			}
		}
		if (chto_eto == 2)
		{
			cout << setw(40) << "GACHI DUNGEON" << endl;
			wcout << endl;
			wcout << endl;
			wcout << endl;
			cout << setw(35) << "Начать игру" << endl;
			wcout << endl;
			wcout << endl;
			wcout << endl;
			cout << setw(35) << "====> " << setw(6) << "Авторы" << endl;
			wcout << endl;
			wcout << endl;
			wcout << endl;
			cout << setw(35) << "Выход" << endl;
			wcout << endl;
			wcout << endl;
			wcout << endl;
			if (potverd == 1)
			{
				system("cls");
				cout << "Все нахуй сделал в одно хлебало Stoneby, сучки! Разрешаю распространять игру как вам угодно. А теперь возвращаю вас в меню." << endl;
				cin.get();
				system("cls");
				potverd = 0;
				goto AGAIN;
			}
		}
		if (chto_eto == 3)
		{
			cout << setw(40) << "GACHI DUNGEON" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << setw(35) << "Начать игру" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << setw(35) << "Авторы" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << setw(35) << "====> " << setw(5) << "Выход" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			if (potverd == 1)
			{
				system("cls");
				bool GIMO = false;
				int chto_eto_2 = 2;
				do {
					cout << "Вы уверены в своем выборе?" << endl;
					if (chto_eto_2 == 1)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << " ^" << endl;
						cout << " |" << endl;
						if (potverd == 2)
						{
							cout << "До новых приключений, герой!" << endl;
							cin.get();
							exit(0);
						}
					}
					if (chto_eto_2 == 2)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << "   " << "  ^" << endl;
						cout << "   " << "  |" << endl;
						if (potverd == 2)
						{
							cout << "Вы вернулись в меню!" << endl;
							cin.get();
							system("cls");
							potverd = 0;
							goto AGAIN;
						}
					}
					char SNOPKA = _getch();
					switch (SNOPKA)
					{
					case 'a':
						chto_eto_2++;
						break;
					case 'd':
						chto_eto_2--;
						break;
					case 'A':
						chto_eto_2++;
						break;
					case 'D':
						chto_eto_2--;
						break;
					case VK_RETURN:
						potverd = 2;
						break;
					default:
						cout << "Нажимайте A/D для скрола в меню и ENTER для потверждения!" << endl;
						cin.get();
					}
					if (chto_eto_2 == 3)
					{
						chto_eto_2 = 1;
					}
					if (chto_eto_2 == 0)
					{
						chto_eto_2 = 2;
					}
					system("cls");
				} while (GIMO != true);
				system("cls");
			}
		}
		if (Prav == true)
		{
			break;
		}
		char KNOPKA = _getch();
		switch (KNOPKA)
		{
		case 'w':
			chto_eto--;
			break;
		case 's':
			chto_eto++;
			break;
		case 'W':
			chto_eto--;
			break;
		case 'S':
			chto_eto++;
			break;
		case VK_RETURN:
			potverd = 1;
			break;
		default:
			cout << "Нажимайте W/S для скрола в меню и ENTER для потверждения!" << endl;
			cin.get();
		}
		if (chto_eto == 4)
		{
			chto_eto = 1;
		}
		if (chto_eto == 0)
		{
			chto_eto = 3;
		}
		system("cls");
	} while (Prav != true);
	system("cls");
}
void VIBOR_CLASSA(int& INTELEACT, int& SILA, int& LOVKOST, int& CLASS, int& mas_sposob_1, int& mas_sposob_2, int& mas_sposob_3, int& mas_sposob_4, int& mas_sposob_5, int& mas_sposob_6)
{
	cout << "Выберите свой класс!";
	cin.get();
AGAIN:
	bool Prav = false;
	int chto_eto = 2;
	int potverd = 0;
	system("cls");
	do
	{
		if (chto_eto == 1)
		{
			cout << setw(15) << "Убийца " << setw(15) << "Кудесник " << setw(15) << "Варвар " << endl;
			cout << setw(15) << "Сила: 7 " << setw(15) << "Сила: 8 " << setw(15) << "Сила: 10 " << endl;
			cout << setw(15) << "Ловкость: 10 " << setw(15) << "Ловкость: 5 " << setw(15) << "Ловкость: 7 " << endl;
			cout << setw(15) << "Интелект: 8 " << setw(15) << "Интелект: 10 " << setw(15) << "Интелект: 6 " << endl;
			cout << endl;
			cout << endl;
			cout << setw(15) << "*|" << setw(14) << "$" << setw(15) << "|" << endl;
			cout << setw(15) << "*  |" << setw(14) << "|" << setw(15) << "|" << endl;
			cout << setw(15) << "*   |" << setw(14) << "|" << setw(15) << "|" << endl;
			cout << setw(15) << "*  |" << setw(14) << "|" << setw(16) << "---" << endl;
			cout << setw(15) << "*|" << setw(14) << "|" << setw(15) << "|" << endl;
			cout << endl;
			cout << setw(15) << "^" << endl;
			cout << setw(15) << "|" << endl;
			if (potverd == 1)
			{
				system("cls");
				bool GIMO = false;
				int chto_eto_2 = 2;
				do {
					cout << "Вы уверены в своем выборе?" << endl;
					if (chto_eto_2 == 1)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << " ^" << endl;
						cout << " |" << endl;
						if (potverd == 2)
						{
							cout << "В путь!" << endl;
							cin.get();
							INTELEACT = 8, SILA = 7, LOVKOST = 10, CLASS = 1;
							mas_sposob_1 = 1, mas_sposob_2 = 2, mas_sposob_3 = 3, mas_sposob_4 = 4, mas_sposob_5 = 5, mas_sposob_6 = 6;
							Prav = true;
							GIMO - true;
						}
					}
					if (chto_eto_2 == 2)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << "   " << "  ^" << endl;
						cout << "   " << "  |" << endl;
						if (potverd == 2)
						{
							cout << "Вы вернулись к выбору класса!" << endl;
							cin.get();
							system("cls");
							potverd = 0;
							goto AGAIN;
						}
					}
					if (Prav == true)
					{
						break;
					}
					char SNOPKA = _getch();
					switch (SNOPKA)
					{
					case 'a':
						chto_eto_2++;
						break;
					case 'd':
						chto_eto_2--;
						break;
					case 'A':
						chto_eto_2++;
						break;
					case 'D':
						chto_eto_2--;
						break;
					case VK_RETURN:
						potverd = 2;
						break;
					default:
						cout << "Нажимайте A/D для скрола в меню и ENTER для потверждения!" << endl;
						cin.get();
					}
					if (chto_eto_2 == 3)
					{
						chto_eto_2 = 1;
					}
					if (chto_eto_2 == 0)
					{
						chto_eto_2 = 2;
					}
					system("cls");
				} while (GIMO != true);
			}
		}
		if (chto_eto == 2)
		{
			cout << setw(15) << "Убийца " << setw(15) << "Кудесник " << setw(15) << "Варвар " << endl;
			cout << setw(15) << "Сила: 7 " << setw(15) << "Сила: 8 " << setw(15) << "Сила: 10 " << endl;
			cout << setw(15) << "Ловкость: 10 " << setw(15) << "Ловкость: 5 " << setw(15) << "Ловкость: 7 " << endl;
			cout << setw(15) << "Интелект: 8 " << setw(15) << "Интелект: 10 " << setw(15) << "Интелект: 6 " << endl;
			cout << endl;
			cout << endl;
			cout << setw(15) << "*|" << setw(14) << "$" << setw(15) << "|" << endl;
			cout << setw(15) << "*  |" << setw(14) << "|" << setw(15) << "|" << endl;
			cout << setw(15) << "*   |" << setw(14) << "|" << setw(15) << "|" << endl;
			cout << setw(15) << "*  |" << setw(14) << "|" << setw(16) << "---" << endl;
			cout << setw(15) << "*|" << setw(14) << "|" << setw(15) << "|" << endl;
			cout << endl;
			cout << setw(29) << "^" << endl;
			cout << setw(29) << "|" << endl;
			if (potverd == 1)
			{
				system("cls");
				bool GIMO = false;
				int chto_eto_2 = 2;
				do {
					cout << "Вы уверены в своем выборе?" << endl;
					if (chto_eto_2 == 1)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << " ^" << endl;
						cout << " |" << endl;
						if (potverd == 2)
						{
							cout << "В путь!" << endl;
							cin.get();
							INTELEACT = 10, SILA = 8, LOVKOST = 5, CLASS = 2;
							mas_sposob_1 = 7, mas_sposob_2 = 8, mas_sposob_3 = 9, mas_sposob_4 = 10, mas_sposob_5 = 11, mas_sposob_6 = 12;
							Prav = true;
							GIMO - true;
						}
					}
					if (chto_eto_2 == 2)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << "   " << "  ^" << endl;
						cout << "   " << "  |" << endl;
						if (potverd == 2)
						{
							cout << "Вы вернулись к выбору класса!" << endl;
							cin.get();
							system("cls");
							potverd = 0;
							goto AGAIN;
						}
					}
					if (Prav == true)
					{
						break;
					}
					char SNOPKA = _getch();
					switch (SNOPKA)
					{
					case 'a':
						chto_eto_2++;
						break;
					case 'd':
						chto_eto_2--;
						break;
					case 'A':
						chto_eto_2++;
						break;
					case 'D':
						chto_eto_2--;
						break;
					case VK_RETURN:
						potverd = 2;
						break;
					default:
						cout << "Нажимайте A/D для скрола в меню и ENTER для потверждения!" << endl;
						cin.get();
					}
					if (chto_eto_2 == 3)
					{
						chto_eto_2 = 1;
					}
					if (chto_eto_2 == 0)
					{
						chto_eto_2 = 2;
					}
					system("cls");
				} while (GIMO != true);
			}
		}
		if (chto_eto == 3)
		{
			cout << setw(15) << "Убийца " << setw(15) << "Кудесник " << setw(15) << "Варвар " << endl;
			cout << setw(15) << "Сила: 7 " << setw(15) << "Сила: 8 " << setw(15) << "Сила: 10 " << endl;
			cout << setw(15) << "Ловкость: 10 " << setw(15) << "Ловкость: 5 " << setw(15) << "Ловкость: 7 " << endl;
			cout << setw(15) << "Интелект: 8 " << setw(15) << "Интелект: 10 " << setw(15) << "Интелект: 6 " << endl;
			cout << endl;
			cout << endl;
			cout << setw(15) << "*|" << setw(14) << "$" << setw(15) << "|" << endl;
			cout << setw(15) << "*  |" << setw(14) << "|" << setw(15) << "|" << endl;
			cout << setw(15) << "*   |" << setw(14) << "|" << setw(15) << "|" << endl;
			cout << setw(15) << "*  |" << setw(14) << "|" << setw(16) << "---" << endl;
			cout << setw(15) << "*|" << setw(14) << "|" << setw(15) << "|" << endl;
			cout << endl;
			cout << setw(44) << "^" << endl;
			cout << setw(44) << "|" << endl;
			if (potverd == 1)
			{
				system("cls");
				bool GIMO = false;
				int chto_eto_2 = 2;
				do {
					cout << "Вы уверены в своем выборе?" << endl;
					if (chto_eto_2 == 1)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << " ^" << endl;
						cout << " |" << endl;
						if (potverd == 2)
						{
							cout << "В путь!" << endl;
							cin.get();
							INTELEACT = 6, SILA = 10, LOVKOST = 7, CLASS = 3;
							mas_sposob_1 = 13, mas_sposob_2 = 14, mas_sposob_3 = 15, mas_sposob_4 = 16, mas_sposob_5 = 17, mas_sposob_6 = 18;
							Prav = true;
							GIMO - true;
						}
					}
					if (chto_eto_2 == 2)
					{
						cout << "Да! " << "Нет!" << endl;
						cout << "   " << "  ^" << endl;
						cout << "   " << "  |" << endl;
						if (potverd == 2)
						{
							cout << "Вы вернулись к выбору класса!" << endl;
							cin.get();
							system("cls");
							potverd = 0;
							goto AGAIN;
						}
					}
					if (Prav == true)
					{
						break;
					}
					char SNOPKA = _getch();
					switch (SNOPKA)
					{
					case 'a':
						chto_eto_2++;
						break;
					case 'd':
						chto_eto_2--;
						break;
					case 'A':
						chto_eto_2++;
						break;
					case 'D':
						chto_eto_2--;
						break;
					case VK_RETURN:
						potverd = 2;
						break;
					default:
						cout << "Нажимайте A/D для скрола в меню и ENTER для потверждения!" << endl;
						cin.get();
					}
					if (chto_eto_2 == 3)
					{
						chto_eto_2 = 1;
					}
					if (chto_eto_2 == 0)
					{
						chto_eto_2 = 2;
					}
					system("cls");
				} while (GIMO != true);
			}
		}
		char SNOPKA = _getch();
		switch (SNOPKA)
		{
		case 'a':
			chto_eto--;
			break;
		case 'd':
			chto_eto++;
			break;
		case 'A':
			chto_eto--;
			break;
		case 'D':
			chto_eto++;
			break;
		case VK_RETURN:
			potverd = 1;
			break;
		default:
			cout << "Нажимайте A/D для скрола между классами и ENTER для потверждения!" << endl;
			cin.get();
		}
		if (chto_eto == 4)
		{
			chto_eto = 1;
		}
		if (chto_eto == 0)
		{
			chto_eto = 3;
		}
		system("cls");
	} while (Prav != true);
	system("cls");
}
void PRAVILA()
{
	system("cls");
	cout << "ЛЕГЕНДА: - это стена, = это дверь, + это пол, @ это герой, M это магазин, & это камень, # это враг, $ это артефакт, B - бардель, K - кузнеца, A - арена, X - босс, ? - сундук" << endl;
	cout << "Управление: WASD(только англ. раскладка) ходить, поставить бомбу для взрыва камня ], TAB - открывает окно персонажа, R - повышение уровня, если видите любое сообщение жмите ENTER" << endl;
	cin.get();
	system("cls");
	cout << "Ознакомтесь с правилами!" << endl;
	cout << "Магазин - место, где можно купить разные расходники за золото. Каждый этаж они в ограниченном количестве!" << endl;
	cout << "Бардель - место, где можно восстановить здоровье и повесить баффы за золото, так же взять задание на убийство монстров." << endl;
	cout << "Арена - место, где можно сразится с гладиатором и получить за это награду при победе или потренироваться с маникеном." << endl;
	cout << "Кузница - место, где можно прокачать свою экиперовку за деньги и запчасти или создать расходники за это же." << endl;
	cout << "Камень - объект мешающий пройти куда-то. Можно взорвать бомбой и с некоторым шансом выбить запчасти." << endl;
	cout << "Сундук - объект, который можно открыть ключем и найти там деньги или, возможно, запчасти." << endl;
	cout << "Враги - существа, которые живут в Данже. С них падает золото и опыт на который вы себя улучшаете. Могут убить." << endl;
	cout << "Боссы - существа, которые живут в Данже. Появляются после убийства некоторого числа врагов на месте спауна героя в главной комнате. С них падает золото и опыт на который вы себя улучшаете. Могут убить." << endl;
	cout << "Артефакт - объект, который может сильно усилить главного героя. Встречаются крайне редко." << endl;
	cout << "Жизни - когда они упадат до нулю вы умрете" << endl;
	cout << "Очки Безбашенности - тратя их в битве, вы можете совершать и правда невозможные вещи." << endl;
	cout << "Характеристики - они влияют на несколько факторов, но главный, что ваша главная характеристика это и ваш урон. Сила - здоровье, Ловкость - шанс уворота, Интелект - количества ОБ." << endl;
	cin.get();
}
void SIJET(int ETAJI)
{
	if (ETAJI == 0)
	{
		system("cls");
		cout << "Пройдя первый этаж вы не обнаружили ничего интересного. Это, конечно, всего лишь начало, но все люди, что вы тут встретили были... обычными?.. Словно для них ничего и не изменилось с исчезновением Героя и наступлением темных времен. Вас это настараживает, но вы идете дальше." << endl;
		cin.get();
	}
	if (ETAJI == 1)
	{
		system("cls");
		cout << "Победив очередного Босса вы начинаете чувствовать внутри себя силу, что, возможно, когда то принадлежала прошлому Герою. Но это чертово спокойствие... вам начинает казаться, что это вы вторженец, который просто всех убивает направо и налево. Но люди, что тут живут... это... это точно люди?.. вы продолжаете спуск." << endl;
		cin.get();
	}
	if (ETAJI == 2)
	{
		system("cls");
		cout << "Ваше оружие снова в крови кого-то чудовища. Вас буквально распирает от силы, которая струится по венам. Сейчас вы бы могли поправу назваться Героем, но можно спуститься дальше. Да и в конце концов, меня же здесь любят! Буквально заваливают золотом и любовью! Убить всего лишь парочку чудовищ?! Хах! Не проблема! Ибо вы Герой, верно?! Вы чуть ли не прыгаете на следующий этаж, а <люди>, что остались в простоенных кем-то зданиях ехидно улыбаются... " << endl;
		cin.get();
	}
	if (ETAJI == 3)
	{
		system("cls");
		cout << "На очередном трупе бывшего Босса восседает Герой, а его лицо украшает почти зверинный оскал... От вашего тела буквально исходит пар и энергия, которая уже не может помещаться в теле... Насколько далеко вы готовы зайти?.. это... и правда стоило того?.. люди... они вас не полнуют более. Только сила и ничего более. Вы встаете с монстра и отправляетесь на последний этаж. Хотя... кто тут на самом деле монстр?.. вы не успеваете увидеть, как труп позади вас коротко вздрагивает и начинает улабыться улыбкой, которая всего секунду назад была у вас..." << endl;
		cin.get();
	}
	if (ETAJI == 4)
	{
		system("cls");
		cout << "Вы убили всех! ДА!!! Вы смогли это сделать!!! Кровь залила этажи этого Древнего Данжа!!! Вы могущественны, как никогда и можете убить кого угодно! Вы ГЕРОЙ! И никто вам не указ! Люди, монстры, какая разница, если все перед вами лишь тараканы?! Ахахаха, господи, как же вы хороши!" << endl;
		cin.get();
	}
}
void LVL_UP(int LVL, int XP, int GG, int& CHET_LVL, int CLASS, int& mrazota_1, int& mrazota_2, int& mrazota_3, string& mrazota_1_NAZ, string& mrazota_2_NAZ, string& mrazota_3_NAZ, int& XAR_LVL, int& SILA, int& LOVKOST, int& INTELEACT)
{
	do {
		system("cls");
		cout << "Нажмите 1, 2, 3, 4, 5, 6 для преобретения соответственных способностей своего класса, A - для повышения Силы, B - для повышения Ловкости, C - для повышения Интелекта или D для выхода из меню умений!" << endl;
		cout << "Количество Очков Умений: " << CHET_LVL << endl;
		cout << "Количество Очков Характеристик: " << XAR_LVL << endl;
		if (CLASS == 1)
		{
			cout << "Первая способность третьего уровня - Чудовищный разрез(наносит двадцать урона), вторая способность третьего уровня Двойной укол(наносит два удара от одного до пятнадцать урона)" << endl;
			cout << "Первая способность шестого уровня - Клык змеи(отравляет противника на пять ходов), вторая способность шестого уровня Блюр(уклоняется от урона на один ход)" << endl;
			cout << "Первая способность десятого уровня - Сущность вора(крадет золото и опыт), вторая способность десятого уровня Песнь клинков(наносит пятьдесят урона, а так же отравляет на три хода)" << endl;
			cin.get();
		}
		if (CLASS == 2)
		{
			cout << "Первая способность третьего уровня - Огненый кулак <Ейс>(наносит двадцать пять урона), вторая способность третьего уровня Ледяные когти <Пет Шоп>(наносит четыре удара от одного до восьми урона)" << endl;
			cout << "Первая способность шестого уровня - Догматы Истины(восстанавливаете двадцать жизней и блокируете половину урона, если противник ударит), вторая способность шестого уровня Шторвомой Ураган <Райдзин>(наносит тридцать пять урона)" << endl;
			cout << "Первая способность десятого уровня - Ярость Титанов <Гуливера>(наносит пятьдесят урона, а так же блокирует половину урона), вторая способность десятого уровня Щелчек Хаоса <Диса>(один из трех случайных эффектов способных как победить, так и проиграть бой)" << endl;
			cin.get();
		}
		if (CLASS == 3)
		{
			cout << "Первая способность третьего уровня - Удар щитом(наносит десять урона и дает дополнительный ход), вторая способность третьего уровня Рев загного зверя(восстанавливает пятнадцать жизней и дает дополнительный ход)" << endl;
			cout << "Первая способность шестого уровня - Ярость берсерка(наносит тридцать пять урона), вторая способность шестого уровня Каменная кожа(полностью блокирует любой физический урон)" << endl;
			cout << "Первая способность десятого уровня - По Настояшему Серьезный Удар(наносит ОГРОМНЫЙ урон, но с маленькой вероятностью), вторая способность десятого уровня Шипы розы(возвращает урон три хода подряд)" << endl;
			cin.get();
		}
		char knopka = _getch();
		int chto_eto = 0;
		switch (knopka)
		{
		case '1':
			chto_eto = 1;
			break;
		case '2':
			chto_eto = 2;
			break;
		case '3':
			chto_eto = 3;
			break;
		case '4':
			chto_eto = 4;
			break;
		case '5':
			chto_eto = 5;
			break;
		case '6':
			chto_eto = 6;
			break;
		case 'A':
			chto_eto = 7;
			break;
		case 'a':
			chto_eto = 7;
		case 'B':
			chto_eto = 8;
			break;
		case 'b':
			chto_eto = 8;
		case 'C':
			chto_eto = 9;
			break;
		case 'c':
			chto_eto = 9;
		case 'D':
			chto_eto = 10;
			break;
		case 'd':
			chto_eto = 10;
			break;
		}
		if (chto_eto == 0)
		{
			system("cls");
			cout << "Вы ничего не сделали!" << endl;
			cin.get();
		}
		if (LVL <= 10)
		{
			if (chto_eto == 1 && CLASS == 1 && CHET_LVL != 0 && mrazota_1 == 0 && LVL >= 3)
			{
				mrazota_1 = 1;
				mrazota_1_NAZ = "Чудовищный разрез";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 2 && CLASS == 1 && CHET_LVL != 0 && mrazota_1 == 0 && LVL >= 3)
			{
				mrazota_1 = 2;
				mrazota_1_NAZ = "Двойной укол";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 3 && CLASS == 1 && CHET_LVL != 0 && mrazota_2 == 0 && LVL >= 6)
			{
				mrazota_1 = 3;
				mrazota_1_NAZ = "Клык змеи";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 4 && CLASS == 1 && CHET_LVL != 0 && mrazota_2 == 0 && LVL >= 6)
			{
				mrazota_1 = 4;
				mrazota_1_NAZ = "Блюр";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 5 && CLASS == 1 && CHET_LVL != 0 && mrazota_3 == 0 && LVL >= 10)
			{
				mrazota_1 = 5;
				mrazota_1_NAZ = "Сущность вора";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 6 && CLASS == 1 && CHET_LVL != 0 && mrazota_3 == 0 && LVL >= 10)
			{
				mrazota_1 = 6;
				mrazota_1_NAZ = "Песнь клинков";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 1 && CLASS == 2 && CHET_LVL != 0 && mrazota_1 == 0 && LVL >= 3)
			{
				mrazota_1 = 7;
				mrazota_1_NAZ = "Огненый кулак <Ейс>";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 2 && CLASS == 2 && CHET_LVL != 0 && mrazota_1 == 0 && LVL >= 3)
			{
				mrazota_1 = 8;
				mrazota_1_NAZ = "Ледяные когти <Пет Шоп>";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 3 && CLASS == 2 && CHET_LVL != 0 && mrazota_2 == 0 && LVL >= 6)
			{
				mrazota_1 = 9;
				mrazota_1_NAZ = "Догматы Истины";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 4 && CLASS == 2 && CHET_LVL != 0 && mrazota_2 == 0 && LVL >= 6)
			{
				mrazota_1 = 10;
				mrazota_1_NAZ = "Шторвомой Ураган <Райдзин>";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 5 && CLASS == 2 && CHET_LVL != 0 && mrazota_3 == 0 && LVL >= 10)
			{
				mrazota_1 = 11;
				mrazota_1_NAZ = "Ярость Титанов <Гуливера>";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 6 && CLASS == 2 && CHET_LVL != 0 && mrazota_3 == 0 && LVL >= 10)
			{
				mrazota_1 = 12;
				mrazota_1_NAZ = "Щелчек Хаоса <Диса>";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 1 && CLASS == 3 && CHET_LVL != 0 && mrazota_1 == 0 && LVL >= 3)
			{
				mrazota_1 = 13;
				mrazota_1_NAZ = "Удар щитом";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 2 && CLASS == 3 && CHET_LVL != 0 && mrazota_1 == 0 && LVL >= 3)
			{
				mrazota_1 = 14;
				mrazota_1_NAZ = "Рев загного зверя";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 3 && CLASS == 3 && CHET_LVL != 0 && mrazota_2 == 0 && LVL >= 6)
			{
				mrazota_1 = 15;
				mrazota_1_NAZ = "Ярость берсерка";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 4 && CLASS == 3 && CHET_LVL != 0 && mrazota_2 == 0 && LVL >= 6)
			{
				mrazota_1 = 16;
				mrazota_1_NAZ = "Каменная кожа";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 5 && CLASS == 3 && CHET_LVL != 0 && mrazota_3 == 0 && LVL >= 10)
			{
				mrazota_1 = 17;
				mrazota_1_NAZ = "По Настояшему Серьезный Удар";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
			if (chto_eto == 6 && CLASS == 3 && CHET_LVL != 0 && mrazota_3 == 0 && LVL >= 10)
			{
				mrazota_1 = 18;
				mrazota_1_NAZ = "Шипы розы";
				CHET_LVL--;
				system("cls");
				cout << "Вы успешно получили способность!" << endl;
				cin.get();
			}
		}
		if (chto_eto == 7 && XAR_LVL != 0)
		{
			system("cls");
			cout << "Вы подняли свою Силу!" << endl;
			SILA++;
			XAR_LVL--;
			cin.get();

		}
		if (chto_eto == 8 && XAR_LVL != 0)
		{
			system("cls");
			cout << "Вы подняли свою Ловкость!" << endl;
			LOVKOST++;
			XAR_LVL--;
			cin.get();
		}
		if (chto_eto == 9 && XAR_LVL != 0)
		{
			system("cls");
			cout << "Вы подняли свой Интелект!" << endl;
			INTELEACT++;
			XAR_LVL--;
			cin.get();
		}
		if (chto_eto == 10)
		{
			system("cls");
			cout << "Вы вышли из меню умений!" << endl;
			cin.get();
			break;
		}
		else
		{
			system("cls");
			cout << "У вас нет очков умений, или характеристик, или уровня для получения способности!" << endl;
			cin.get();
		}
	} while (true);
}
int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int INTELEACT, SILA, LOVKOST, CLASS;
	int mas_sposob_1, mas_sposob_2, mas_sposob_3, mas_sposob_4, mas_sposob_5, mas_sposob_6;
	string IMA = "";
	MENY(IMA);
	system("cls");
	VIBOR_CLASSA(INTELEACT, SILA, LOVKOST, CLASS, mas_sposob_1, mas_sposob_2, mas_sposob_3, mas_sposob_4, mas_sposob_5, mas_sposob_6);
	system("cls");
	PRAVILA();
	system("cls");
	cout << "Давным давно, когда еще спокойствие было чем-то обыденным, существовал Герой сдерживающий Зло всего в мире, но однажды он исчез... Вы решили встать на его путь, чтобы вернуть те славные времена и отправились в Данж Начала откуда когда то давно начал свой поход тот самый Герой." << endl;
	cin.get();
	system("cls");
	int MAX_HEALS = 10 * SILA;
	int HEALS = MAX_HEALS;
	int YVOROT = (LOVKOST / 2) * 10;
	int MAX_BEZBAGH = 1 * INTELEACT;
	int BEZBAGH = 0;
	int MAX_STRONGS = 1;
	if (CLASS == 1)
	{
		MAX_STRONGS = 1 * LOVKOST;
	}
	if (CLASS == 2)
	{
		MAX_STRONGS = 1 * INTELEACT;
	}
	if (CLASS == 3)
	{
		MAX_STRONGS = 1 * SILA;
	}
	int SPOSOPNOSTI[6]{ mas_sposob_1, mas_sposob_2, mas_sposob_3, mas_sposob_4, mas_sposob_5, mas_sposob_6 };
	int mrazota_1 = 0;
	int mrazota_2 = 0;
	int mrazota_3 = 0;
	int AKT_SPOS[3]{ mrazota_1,mrazota_2,mrazota_3 };
	string mrazota_1_NAZ = "закрыто";
	string mrazota_2_NAZ = "закрыто";
	string mrazota_3_NAZ = "закрыто";
	string AKT_SPOS_NAZ[3]{ mrazota_1_NAZ,mrazota_2_NAZ,mrazota_3_NAZ };
	string blat_1_NAZ = "ничего";
	string blat_2_NAZ = "ничего";
	string mas_invent[2]{ blat_1_NAZ, blat_2_NAZ };
	int blat_1 = 0;
	int blat_2 = 0;
	int arr_inven[2]{ blat_1, blat_2 };
	int KEYS = 1;
	int BOMBS = 1;
	int HP_POUCHEN = 1;
	int ZAPCHASTI = 1;
	int STRELA = 1;
	int GOLD = 1;
	int LVL = 1;
	int XP = 0;
	int GG = 1;
	int CHET_LVL = 0;
	int XAR_LVL = 0;
	int BRON_1 = 0;
	int BRON_2 = 0;
	int BRON_3 = 0;
	int BRON_4 = 0;
	int BRON_5 = 0;
	double BRON_1_1 = 0.01;
	double BRON_2_1 = 0.01;
	double BRON_3_1 = 0.01;
	double BRON_4_1 = 0.01;
	double BRON_5_1 = 0.01;
	int SELL_BRON_1_ZAP = 1;
	int SELL_BRON_2_ZAP = 3;
	int SELL_BRON_3_ZAP = 2;
	int SELL_BRON_4_ZAP = 2;
	int SELL_BRON_5_ZAP = 4;
	int SELL_BOMBS_ZAP = 1;
	int SELL_KEYS_ZAP = 1;
	int SELL_STRELA_ZAP = 1;
	int ZADANIA = 0;
	int ZADANIA_GOT = 0;
	double BUFF_YR = 0;
	double BUFF_DEF = 0;
	int SUKA_1 = 0;
	int SUKA_2 = 0;
	int ETAJI = 0;
	int OCHKI = 0;
	//ТУТ
	do {
		int x = 0, v = 0, z = 0, d = 0;
		int q = 0, w = 1, e = 2, r = 3, t = 4, y = 5, u = 6, i = 7, o = 8;
		int mas1[9]{ 2201,2202,2203,2204,2205,2206,2207,2208,2209 };
		int mas2[9]{ 2271,2272,2273,2274,2275,2276,2277,2278,2279 };
		int mas3[9]{ 2341,2342,2343,2344,2345,2346,2347,2348,2349 };
		int mas4[9]{ 2411,2412,2413,2414,2415,2416,2417,2418,2419 };
		int mas5[9]{ 2481,2482,2483,2484,2485,2486,2487,2488,2489 };
		int mas6[9]{ 2551,2552,2553,2554,2555,2556,2557,2558,2559 };
		int mas7[9]{ 2621,2622,2623,2624,2625,2626,2627,2628,2629 };
		int mas8[9]{ 2691,2692,2693,2694,2695,2696,2697,2698,2699 };
		int mas9[9]{ 2761,2762,2763,2764,2765,2766,2767,2768,2769 };
		int mas_mas[9][9]{ {mas1[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas2[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas3[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas4[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas5[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas6[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas7[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas8[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas9[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)} };
		int x_x1 = mas_mas[0][4], v_v1 = mas_mas[8][4], z_z1 = mas_mas[4][0], d_d1 = mas_mas[4][8], x_x2 = mas_mas[0][4] - 70, v_v2 = mas_mas[8][4] + 70, z_z2 = mas_mas[4][0] - 1, d_d2 = mas_mas[4][8] + 1;
		int komnat_suma_w = rand() % (RANDOM_KOM_MAX - RANDOM_KOM_MIN + 1) + RANDOM_KOM_MIN;
		int komnat_suma_a = rand() % (RANDOM_KOM_MAX_A_D - RANDOM_KOM_MIN_A_D + 1) + RANDOM_KOM_MIN_A_D;
		int komnat_suma_d = rand() % (RANDOM_KOM_MAX_A_D - RANDOM_KOM_MIN_A_D + 1) + RANDOM_KOM_MIN_A_D;
		int komnat_suma_s = rand() % (RANDOM_KOM_MAX - RANDOM_KOM_MIN + 1) + RANDOM_KOM_MIN;
		int random_what_this;
		int random_syndyk_chance;
		int random_stone_chance;
		int arr_enemy_w[99], arr_enemy_s[99], arr_enemy_a[99], arr_enemy_d[99];
		int arr_enemy_w_drop[99], arr_enemy_s_drop[99], arr_enemy_a_drop[99], arr_enemy_d_drop[99];
		int arr_w_x[99];
		int arr_w_y[99];
		int arr_s_x[99];
		int arr_s_y[99];
		int arr_a_x[99];
		int arr_a_y[99];
		int arr_d_x[99];
		int arr_d_y[99];
		int arr_w_x_drop[99];
		int arr_w_y_drop[99];
		int arr_s_x_drop[99];
		int arr_s_y_drop[99];
		int arr_a_x_drop[99];
		int arr_a_y_drop[99];
		int arr_d_x_drop[99];
		int arr_d_y_drop[99];
		int KOL_V01 = 1;
		int KOL_V02 = 1;
		int KOL_V03 = 1;
		int KOL_V04 = 1;
		int chet_enemy1 = 0;
		int chet_enemy2 = 0;
		int chet_enemy3 = 0;
		int chet_enemy4 = 0;
		int chet_enemy1_dop = 0;
		int chet_enemy2_dop = 0;
		int chet_enemy3_dop = 0;
		int chet_enemy4_dop = 0;
		int random1;
		int random2;
		int* suma_w = new int[99], * suma_a = new int[99], * suma_s = new int[99], * suma_d = new int[99];
		int arr_treseare[99];
		int chet_treseare = 0;
		suma_w[0] = x_x1;
		suma_a[0] = z_z1;
		suma_s[0] = v_v1;
		suma_d[0] = d_d1;
		suma_w[1] = x_x2;
		suma_a[1] = z_z2;
		suma_s[1] = v_v2;
		suma_d[1] = d_d2;
		int enemy_suma_w;
		int enemy_suma_s;
		int enemy_suma_a;
		int enemy_suma_d;
		int MAGAZIN = mas_mas[2][2];
		int KYZNA = mas_mas[2][6];
		int BARDEL = mas_mas[6][2];
		int ARENA = mas_mas[6][6];
		int BOSS_MESTO = mas_mas[4][4];
		int chet1 = 2;
		int chet2 = 2;
		int chet3 = 2;
		int chet4 = 2;
		int brv1 = 1;
		int brv2 = 1;
		int brv3 = 1;
		int brv4 = 1;
		bool stone = false;
		bool syndyk = false;
		int chet_syndyk = 0;
		int chet_stone = 0;
		int arr_syndyk[99];
		int arr_stone[99];
		int syndyk_123 = 0;
		int komnat_dop;
		int Hero = mas_mas[4][4];
		int Hero2;
		int SELL_KEYS_KOL = rand() % (RANDOM_rolvo_magaz_MAX - RANDOM_rolvo_magaz_MIN + 1) + RANDOM_rolvo_magaz_MIN;
		int SELL_BOMBS_KOL = rand() % (RANDOM_rolvo_magaz_MAX - RANDOM_rolvo_magaz_MIN + 1) + RANDOM_rolvo_magaz_MIN;
		int SELL_HP_POUCHEN_KOL = rand() % (RANDOM_rolvo_magaz_MAX - RANDOM_rolvo_magaz_MIN + 1) + RANDOM_rolvo_magaz_MIN;
		int SELL_ZAPCHASTI_KOL = rand() % (RANDOM_rolvo_magaz_MAX - RANDOM_rolvo_magaz_MIN + 1) + RANDOM_rolvo_magaz_MIN;
		int SELL_STRELA_KOL = rand() % (RANDOM_rolvo_magaz_MAX - RANDOM_rolvo_magaz_MIN + 1) + RANDOM_rolvo_magaz_MIN;
		for (int i = 0; i < komnat_suma_w; i++)
		{
			random_syndyk_chance = rand() % (RANDOM_CHANCE_SYNDYK_MAX - RANDOM_CHANCE_SYNDYK_MIN + 1) + RANDOM_CHANCE_SYNDYK_MIN;
			if (random_syndyk_chance > 90)
			{
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_syndyk[chet_syndyk] = mas_mas[random1][random2] - 630 * brv1;
				chet_syndyk++;
			}
			random_stone_chance = rand() % (RANDOM_CHANCE_KAMNEY_MAX - RANDOM_CHANCE_KAMNEY_MIN + 1) + RANDOM_CHANCE_KAMNEY_MIN;
			if (random_syndyk_chance > 60)
			{
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_stone[chet_stone] = mas_mas[random1][random2] - 630 * brv1;
				chet_stone++;
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_stone[chet_stone] = mas_mas[random1][random2] - 630 * brv1;
				chet_stone++;
			}
			brv1++;
		}
		for (int i = 0; i < komnat_suma_s; i++)
		{
			random_syndyk_chance = rand() % (RANDOM_CHANCE_SYNDYK_MAX - RANDOM_CHANCE_SYNDYK_MIN + 1) + RANDOM_CHANCE_SYNDYK_MIN;
			if (random_syndyk_chance > 90)
			{
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_syndyk[chet_syndyk] = mas_mas[random1][random2] + 630 * brv2;
				chet_syndyk++;
			}
			random_stone_chance = rand() % (RANDOM_CHANCE_KAMNEY_MAX - RANDOM_CHANCE_KAMNEY_MIN + 1) + RANDOM_CHANCE_KAMNEY_MIN;
			if (random_syndyk_chance > 60)
			{
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_stone[chet_stone] = mas_mas[random1][random2] + 630 * brv2;
				chet_stone++;
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_stone[chet_stone] = mas_mas[random1][random2] + 630 * brv2;
				chet_stone++;
			}
			brv2++;
		}
		for (int i = 0; i < komnat_suma_a; i++)
		{
			random_syndyk_chance = rand() % (RANDOM_CHANCE_SYNDYK_MAX - RANDOM_CHANCE_SYNDYK_MIN + 1) + RANDOM_CHANCE_SYNDYK_MIN;
			if (random_syndyk_chance > 90)
			{
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_syndyk[chet_syndyk] = mas_mas[random1][random2] - 9 * brv3;
				chet_syndyk++;
			}
			random_stone_chance = rand() % (RANDOM_CHANCE_KAMNEY_MAX - RANDOM_CHANCE_KAMNEY_MIN + 1) + RANDOM_CHANCE_KAMNEY_MIN;
			if (random_syndyk_chance > 60)
			{
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_stone[chet_stone] = mas_mas[random1][random2] - 9 * brv3;
				chet_stone++;
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_stone[chet_stone] = mas_mas[random1][random2] - 9 * brv3;
				chet_stone++;
			}
			brv3++;
		}
		for (int i = 0; i < komnat_suma_d; i++)
		{
			random_syndyk_chance = rand() % (RANDOM_CHANCE_SYNDYK_MAX - RANDOM_CHANCE_SYNDYK_MIN + 1) + RANDOM_CHANCE_SYNDYK_MIN;
			if (random_syndyk_chance > 90)
			{
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_syndyk[chet_syndyk] = mas_mas[random1][random2] + 9 * brv4;
				chet_syndyk++;
			}
			random_stone_chance = rand() % (RANDOM_CHANCE_KAMNEY_MAX - RANDOM_CHANCE_KAMNEY_MIN + 1) + RANDOM_CHANCE_KAMNEY_MIN;
			if (random_syndyk_chance > 60)
			{
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_stone[chet_stone] = mas_mas[random1][random2] + 9 * brv4;
				chet_stone++;
				random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
				arr_stone[chet_stone] = mas_mas[random1][random2] + 9 * brv4;
				chet_stone++;
			}
			brv4++;
		}
		brv1 = 1;
		brv2 = 1;
		brv3 = 1;
		brv4 = 1;
		for (int i = 1; i < komnat_suma_w; i++)
		{
			suma_w[chet1] = mas_mas[0][4] - (630 * brv1);
			chet1++;
			suma_w[chet1] = (mas_mas[0][4] - (630 * brv1)) - 70;
			chet1++;
			komnat_dop = rand() % (RANDOM_DOP_MAX - RANDOM_DOP_MIN + 1) + RANDOM_DOP_MIN;
			if (komnat_dop > 70)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] - (630 * brv1) + 9;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_w = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_w;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_w_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_w_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_w;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_w_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_w_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_w; j++)
					{
						arr_enemy_w_drop[chet_enemy1_dop] = mas_mas[arr_w_x_drop[j]][arr_w_y_drop[j]] - (630 * brv1) + 9;
						chet_enemy1_dop++;
					}
				}
				suma_w[chet1] = mas_mas[4][4] - (630 * brv1) + 4;
				chet1++;
				suma_w[chet1] = mas_mas[4][4] - (630 * brv1) + 5;
				chet1++;
			}
			if (komnat_dop > 90)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] - (630 * brv1) + 18;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{

					enemy_suma_w = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_w;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_w_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_w_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_w;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_w_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_w_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_w; j++)
					{
						arr_enemy_w_drop[chet_enemy1_dop] = mas_mas[arr_w_x_drop[j]][arr_w_y_drop[j]] - (630 * brv1) + 18;
						chet_enemy1_dop++;
					}
				}
				suma_w[chet1] = mas_mas[4][4] - (630 * brv1) + 13;
				chet1++;
				suma_w[chet1] = mas_mas[4][4] - (630 * brv1) + 14;
				chet1++;
			}
			komnat_dop = rand() % (RANDOM_DOP_MAX - RANDOM_DOP_MIN + 1) + RANDOM_DOP_MIN;
			if (komnat_dop > 70)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] - (630 * brv1) - 9;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_w = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_w;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_w_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_w_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_w;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_w_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_w_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_w; j++)
					{
						arr_enemy_w_drop[chet_enemy1_dop] = mas_mas[arr_w_x_drop[j]][arr_w_y_drop[j]] - (630 * brv1) - 9;
						chet_enemy1_dop++;
					}
				}
				suma_w[chet1] = mas_mas[4][4] - (630 * brv1) - 4;
				chet1++;
				suma_w[chet1] = mas_mas[4][4] - (630 * brv1) - 5;
				chet1++;
			}
			if (komnat_dop > 90)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] - (630 * brv1) - 18;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_w = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_w;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_w_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_w_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_w;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_w_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_w_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_w; j++)
					{
						arr_enemy_w_drop[chet_enemy1_dop] = mas_mas[arr_w_x_drop[j]][arr_w_y_drop[j]] - (630 * brv1) - 18;
						chet_enemy1_dop++;
					}
				}
				suma_w[chet1] = mas_mas[4][4] - (630 * brv1) - 13;
				chet1++;
				suma_w[chet1] = mas_mas[4][4] - (630 * brv1) - 14;
				chet1++;
			}
			brv1++;
		}
		for (int i = 1; i < komnat_suma_s; i++)
		{
			suma_s[chet2] = mas_mas[8][4] + (630 * brv2);
			chet2++;
			suma_s[chet2] = (mas_mas[8][4] + (630 * brv2)) + 70;
			chet2++;
			komnat_dop = rand() % (RANDOM_DOP_MAX - RANDOM_DOP_MIN + 1) + RANDOM_DOP_MIN;
			if (komnat_dop > 70)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] + (630 * brv2) + 9;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_s = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_s;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_s_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_s_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_s;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_s_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_s_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_s; j++)
					{
						arr_enemy_s_drop[chet_enemy2_dop] = mas_mas[arr_s_x_drop[j]][arr_s_y_drop[j]] + (630 * brv2) + 9;
						chet_enemy2_dop++;
					}
				}
				suma_s[chet2] = mas_mas[4][4] + (630 * brv2) + 4;
				chet2++;
				suma_s[chet2] = mas_mas[4][4] + (630 * brv2) + 5;
				chet2++;
			}
			if (komnat_dop > 90)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] + (630 * brv2) + 18;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_s = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_s;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_s_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_s_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_s;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_s_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_s_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_s; j++)
					{
						arr_enemy_s_drop[chet_enemy2_dop] = mas_mas[arr_s_x_drop[j]][arr_s_y_drop[j]] + (630 * brv2) + 18;
						chet_enemy2_dop++;
					}
				}
				suma_s[chet2] = mas_mas[4][4] + (630 * brv2) + 13;
				chet2++;
				suma_s[chet2] = mas_mas[4][4] + (630 * brv2) + 14;
				chet2++;
			}
			komnat_dop = rand() % (RANDOM_DOP_MAX - RANDOM_DOP_MIN + 1) + RANDOM_DOP_MIN;
			if (komnat_dop > 70)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] + (630 * brv2) - 9;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_s = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_s;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_s_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_s_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_s;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_s_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_s_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_s; j++)
					{
						arr_enemy_s_drop[chet_enemy2_dop] = mas_mas[arr_s_x_drop[j]][arr_s_y_drop[j]] + (630 * brv2) - 9;
						chet_enemy2_dop++;
					}
				}
				suma_s[chet2] = mas_mas[4][4] + (630 * brv2) - 4;
				chet2++;
				suma_s[chet2] = mas_mas[4][4] + (630 * brv2) - 5;
				chet2++;
			}
			if (komnat_dop > 90)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] + (630 * brv2) - 18;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_s = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					random_syndyk_chance = rand() % (RANDOM_CHANCE_SYNDYK_MAX - RANDOM_CHANCE_SYNDYK_MIN + 1) + RANDOM_CHANCE_SYNDYK_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_s;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_s_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_s_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_s;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_s_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_s_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_s; j++)
					{
						arr_enemy_s_drop[chet_enemy2_dop] = mas_mas[arr_s_x_drop[j]][arr_s_y_drop[j]] + (630 * brv2) - 18;
						chet_enemy2_dop++;
					}
				}
				suma_s[chet2] = mas_mas[4][4] + (630 * brv2) - 13;
				chet2++;
				suma_s[chet2] = mas_mas[4][4] + (630 * brv2) - 14;
				chet2++;
			}
			brv2++;
		}
		for (int i = 1; i < komnat_suma_a; i++)
		{
			suma_a[chet3] = mas_mas[4][0] - (9 * brv3);
			chet3++;
			suma_a[chet3] = (mas_mas[4][0] - (9 * brv3)) - 1;
			chet3++;
			komnat_dop = rand() % (RANDOM_DOP_MAX - RANDOM_DOP_MIN + 1) + RANDOM_DOP_MIN;
			if (komnat_dop > 70)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] - (9 * brv3) + 630;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_a = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_a;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_a_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_a_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_a;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_a_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_a_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_a; j++)
					{
						arr_enemy_a_drop[chet_enemy3_dop] = mas_mas[arr_a_x_drop[j]][arr_a_y_drop[j]] - (9 * brv3) + 630;
						chet_enemy3_dop++;
					}
				}
				suma_a[chet3] = mas_mas[4][4] - (9 * brv3) + 280;
				chet3++;
				suma_a[chet3] = mas_mas[4][4] - (9 * brv3) + 350;
				chet3++;
			}
			if (komnat_dop > 90)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] - (9 * brv3) + 1260;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_a = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_a;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_a_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_a_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_a;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_a_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_a_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_a; j++)
					{
						arr_enemy_a_drop[chet_enemy3_dop] = mas_mas[arr_a_x_drop[j]][arr_a_y_drop[j]] - (9 * brv3) + 1260;
						chet_enemy3_dop++;
					}
				}
				suma_a[chet3] = mas_mas[4][4] - (9 * brv3) + 910;
				chet3++;
				suma_a[chet3] = mas_mas[4][4] - (9 * brv3) + 980;
				chet3++;
			}
			komnat_dop = rand() % (RANDOM_DOP_MAX - RANDOM_DOP_MIN + 1) + RANDOM_DOP_MIN;
			if (komnat_dop > 70)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] - (9 * brv3) - 630;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_a = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_a;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_a_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_a_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_a;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_a_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_a_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_a; j++)
					{
						arr_enemy_a_drop[chet_enemy3_dop] = mas_mas[arr_a_x_drop[j]][arr_a_y_drop[j]] - (9 * brv3) - 630;
						chet_enemy3_dop++;
					}
				}
				suma_a[chet3] = mas_mas[4][4] - (9 * brv3) - 280;
				chet3++;
				suma_a[chet3] = mas_mas[4][4] - (9 * brv3) - 350;
				chet3++;
			}
			if (komnat_dop > 90)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] - (9 * brv3) - 1260;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_a = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_a;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_a_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_a_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_a;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_a_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_a_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_a; j++)
					{
						arr_enemy_a_drop[chet_enemy3_dop] = mas_mas[arr_a_x_drop[j]][arr_a_y_drop[j]] - (9 * brv3) - 1260;
						chet_enemy3_dop++;
					}
				}
				suma_a[chet3] = mas_mas[4][4] - (9 * brv3) - 910;
				chet3++;
				suma_a[chet3] = mas_mas[4][4] - (9 * brv3) - 980;
				chet3++;
			}
			brv3++;
		}
		for (int i = 1; i < komnat_suma_d; i++)
		{
			suma_d[chet4] = mas_mas[4][8] + (9 * brv4);
			chet4++;
			suma_d[chet4] = (mas_mas[4][8] + (9 * brv4)) + 1;
			chet4++;
			komnat_dop = rand() % (RANDOM_DOP_MAX - RANDOM_DOP_MIN + 1) + RANDOM_DOP_MIN;
			if (komnat_dop > 70)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] + (9 * brv4) + 630;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_d = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_d;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_d_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_d_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_d;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_d_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_d_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_d; j++)
					{
						arr_enemy_d_drop[chet_enemy4_dop] = mas_mas[arr_d_x_drop[j]][arr_d_y_drop[j]] + (9 * brv4) + 630;
						chet_enemy4_dop++;
					}
				}
				suma_d[chet4] = mas_mas[4][4] + (9 * brv4) + 280;
				chet4++;
				suma_d[chet4] = mas_mas[4][4] + (9 * brv4) + 350;
				chet4++;
			}
			if (komnat_dop > 90)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] + (9 * brv4) + 1260;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_d = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_d;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_d_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_d_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_d;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_d_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_d_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_d; j++)
					{
						arr_enemy_d_drop[chet_enemy4_dop] = mas_mas[arr_d_x_drop[j]][arr_d_y_drop[j]] + (9 * brv4) + 1260;
						chet_enemy4_dop++;
					}
				}
				suma_d[chet4] = mas_mas[4][4] + (9 * brv4) + 910;
				chet4++;
				suma_d[chet4] = mas_mas[4][4] + (9 * brv4) + 980;
				chet4++;
			}
			komnat_dop = rand() % (RANDOM_DOP_MAX - RANDOM_DOP_MIN + 1) + RANDOM_DOP_MIN;
			if (komnat_dop > 70)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] + (9 * brv4) - 630;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_d = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_d;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_d_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_d_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_d;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_d_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_d_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_d; j++)
					{
						arr_enemy_d_drop[chet_enemy4_dop] = mas_mas[arr_d_x_drop[j]][arr_d_y_drop[j]] + (9 * brv4) - 630;
						chet_enemy4_dop++;
					}
				}
				suma_d[chet4] = mas_mas[4][4] + (9 * brv4) - 280;
				chet4++;
				suma_d[chet4] = mas_mas[4][4] + (9 * brv4) - 350;
				chet4++;
			}
			if (komnat_dop > 90)
			{
				random_what_this = rand() % (RANDOM_WHAT_THIS_MAX - RANDOM_WHAT_THIS_MIN + 1) + RANDOM_WHAT_THIS_MIN;
				if (random_what_this > 95)
				{
					arr_treseare[chet_treseare] = mas_mas[4][4] + (9 * brv3) - 1260;
					chet_treseare++;
				}
				if (random_what_this <= 95)
				{
					enemy_suma_d = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
					bool prav;
					for (int k = 0; k < enemy_suma_d;)
					{
						prav = false;
						random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_d_x_drop[k] == random1)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_d_x_drop[k] = random1;
							k++;
						}
					}
					for (int k = 0; k < enemy_suma_d;)
					{
						prav = false;
						random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
						for (int z = 0; z < k; z++)
						{
							if (arr_d_y_drop[k] == random2)
							{
								prav = true;
								break;
							}
						}
						if (!prav)
						{
							arr_d_y_drop[k] = random2;
							k++;
						}
					}
					for (int j = 0; j < enemy_suma_d; j++)
					{
						arr_enemy_d_drop[chet_enemy4_dop] = mas_mas[arr_d_x_drop[j]][arr_d_y_drop[j]] + (9 * brv4) - 1260;
						chet_enemy4_dop++;
					}
				}
				suma_d[chet4] = mas_mas[4][4] + (9 * brv4) - 910;
				chet4++;
				suma_d[chet4] = mas_mas[4][4] + (9 * brv4) - 980;
				chet4++;
			}
			brv4++;
		}
		int suma_FINAL = chet1 + chet2 + chet3 + chet4;
		int* arr_FINAL = new int[suma_FINAL];
		int SUMA_SUMA = 0;
		for (int i = 0; i < chet1; i++)
		{
			arr_FINAL[SUMA_SUMA] = suma_w[i];
			SUMA_SUMA++;
		}
		for (int i = 0; i < chet2; i++)
		{
			arr_FINAL[SUMA_SUMA] = suma_s[i];
			SUMA_SUMA++;
		}
		for (int i = 0; i < chet3; i++)
		{
			arr_FINAL[SUMA_SUMA] = suma_a[i];
			SUMA_SUMA++;
		}
		for (int i = 0; i < chet4; i++)
		{
			arr_FINAL[SUMA_SUMA] = suma_d[i];
			SUMA_SUMA++;
		}
		for (int i = 0; i < komnat_suma_w; i++)
		{
			int enemy_suma_w = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
			for (int j = 0; j < enemy_suma_w; j++)
			{
				bool prav;
				for (int k = 0; k < enemy_suma_w;)
				{
					prav = false;
					random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
					for (int z = 0; z < k; z++)
					{
						if (arr_w_x[k] == random1)
						{
							prav = true;
							break;
						}
					}
					if (!prav)
					{
						arr_w_x[k] = random1;
						k++;
					}
				}
				for (int k = 0; k < enemy_suma_w;)
				{
					prav = false;
					random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
					for (int z = 0; z < k; z++)
					{
						if (arr_w_y[k] == random2)
						{
							prav = true;
							break;
						}
					}
					if (!prav)
					{
						arr_w_y[k] = random2;
						k++;
					}
				}
			}
			for (int j = 0; j < enemy_suma_w; j++)
			{
				arr_enemy_w[chet_enemy1] = mas_mas[arr_w_x[j]][arr_w_y[j]] - (630 * KOL_V01);
				chet_enemy1++;
			}
			KOL_V01++;
		}
		for (int i = 0; i < komnat_suma_s; i++)
		{
			int enemy_suma_s = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
			for (int j = 0; j < enemy_suma_s; j++)
			{
				bool prav;
				for (int k = 0; k < enemy_suma_s;)
				{
					prav = false;
					random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
					for (int z = 0; z < k; z++)
					{
						if (arr_s_x[k] == random1)
						{
							prav = true;
							break;
						}
					}
					if (!prav)
					{
						arr_s_x[k] = random1;
						k++;
					}
				}
				for (int k = 0; k < enemy_suma_s;)
				{
					prav = false;
					random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
					for (int z = 0; z < k; z++)
					{
						if (arr_s_y[k] == random2)
						{
							prav = true;
							break;
						}
					}
					if (!prav)
					{
						arr_s_y[k] = random2;
						k++;
					}
				}
			}
			for (int j = 0; j < enemy_suma_s; j++)
			{
				arr_enemy_s[chet_enemy2] = mas_mas[arr_s_x[j]][arr_s_y[j]] + (630 * KOL_V02);
				chet_enemy2++;
			}
			KOL_V02++;
		}
		for (int i = 0; i < komnat_suma_a; i++)
		{
			int enemy_suma_a = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
			for (int j = 0; j < enemy_suma_a; j++)
			{
				bool prav;
				for (int k = 0; k < enemy_suma_a;)
				{
					prav = false;
					random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
					for (int z = 0; z < k; z++)
					{
						if (arr_a_x[k] == random1)
						{
							prav = true;
							break;
						}
					}
					if (!prav)
					{
						arr_a_x[k] = random1;
						k++;
					}
				}
				for (int k = 0; k < enemy_suma_a;)
				{
					prav = false;
					random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
					for (int z = 0; z < k; z++)
					{
						if (arr_a_y[k] == random2)
						{
							prav = true;
							break;
						}
					}
					if (!prav)
					{
						arr_a_y[k] = random2;
						k++;
					}
				}
			}
			for (int j = 0; j < enemy_suma_a; j++)
			{
				arr_enemy_a[chet_enemy3] = mas_mas[arr_a_x[j]][arr_a_y[j]] - (9 * KOL_V03);
				chet_enemy3++;
			}
			KOL_V03++;
		}
		for (int i = 0; i < komnat_suma_d; i++)
		{
			int enemy_suma_d = rand() % (KOLVO_ENEMY_MAX - KOLVO_ENEMY_MIN + 1) + KOLVO_ENEMY_MIN;
			for (int j = 0; j < enemy_suma_d; j++)
			{
				bool prav;
				for (int k = 0; k < enemy_suma_d;)
				{
					prav = false;
					random1 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
					for (int z = 0; z < k; z++)
					{
						if (arr_d_x[k] == random1)
						{
							prav = true;
							break;
						}
					}
					if (!prav)
					{
						arr_d_x[k] = random1;
						k++;
					}
				}
				for (int k = 0; k < enemy_suma_d;)
				{
					prav = false;
					random2 = rand() % (RANDOM_MAX - RANDOM_MIN + 1) + RANDOM_MIN;
					for (int z = 0; z < k; z++)
					{
						if (arr_d_y[k] == random2)
						{
							prav = true;
							break;
						}
					}
					if (!prav)
					{
						arr_d_y[k] = random2;
						k++;
					}
				}
			}
			for (int j = 0; j < enemy_suma_d; j++)
			{
				arr_enemy_d[chet_enemy4] = mas_mas[arr_d_x[j]][arr_d_y[j]] + (9 * KOL_V04);
				chet_enemy4++;
			}
			KOL_V04++;
		}
		int suma_FINAL_enemy = chet_enemy1 + chet_enemy2 + chet_enemy3 + chet_enemy4;
		int* arr_FINAL_enemy = new int[suma_FINAL_enemy];
		int SUMA_SUMA_enemy = 0;
		for (int i = 0; i < chet_enemy1; i++)
		{
			arr_FINAL_enemy[SUMA_SUMA_enemy] = arr_enemy_w[i];
			SUMA_SUMA_enemy++;
		}
		for (int i = 0; i < chet_enemy2; i++)
		{
			arr_FINAL_enemy[SUMA_SUMA_enemy] = arr_enemy_s[i];
			SUMA_SUMA_enemy++;
		}
		for (int i = 0; i < chet_enemy3; i++)
		{
			arr_FINAL_enemy[SUMA_SUMA_enemy] = arr_enemy_a[i];
			SUMA_SUMA_enemy++;
		}
		for (int i = 0; i < chet_enemy4; i++)
		{
			arr_FINAL_enemy[SUMA_SUMA_enemy] = arr_enemy_d[i];
			SUMA_SUMA_enemy++;
		}
		int suma_FINAL_enemy_dop = chet_enemy1_dop + chet_enemy2_dop + chet_enemy3_dop + chet_enemy4_dop;
		int* arr_FINAL_enemy_dop = new int[suma_FINAL_enemy_dop];
		int SUMA_SUMA_enemy_dop = 0;
		for (int i = 0; i < chet_enemy1_dop; i++)
		{
			arr_FINAL_enemy_dop[SUMA_SUMA_enemy_dop] = arr_enemy_w_drop[i];
			SUMA_SUMA_enemy_dop++;
		}
		for (int i = 0; i < chet_enemy2_dop; i++)
		{
			arr_FINAL_enemy_dop[SUMA_SUMA_enemy_dop] = arr_enemy_s_drop[i];
			SUMA_SUMA_enemy_dop++;
		}
		for (int i = 0; i < chet_enemy3_dop; i++)
		{
			arr_FINAL_enemy_dop[SUMA_SUMA_enemy_dop] = arr_enemy_a_drop[i];
			SUMA_SUMA_enemy_dop++;
		}
		for (int i = 0; i < chet_enemy4_dop; i++)
		{
			arr_FINAL_enemy_dop[SUMA_SUMA_enemy_dop] = arr_enemy_d_drop[i];
			SUMA_SUMA_enemy_dop++;
		}
		int SUMA_SUMA_FINAL_ENEMY = SUMA_SUMA_enemy + SUMA_SUMA_enemy_dop;
		int* arr_FINAL_FINAL_ENEMY = new int[SUMA_SUMA_FINAL_ENEMY];
		int SUMATOR_ENEMY = 0;
		for (int i = 0; i < SUMA_SUMA_enemy; i++)
		{
			arr_FINAL_FINAL_ENEMY[SUMATOR_ENEMY] = arr_FINAL_enemy[i];
			SUMATOR_ENEMY++;
		}
		for (int i = 0; i < SUMA_SUMA_enemy_dop; i++)
		{
			arr_FINAL_FINAL_ENEMY[SUMATOR_ENEMY] = arr_FINAL_enemy_dop[i];
			SUMATOR_ENEMY++;
		}
		int Chislo = SUMATOR_ENEMY / 2;
		int Suma_Pobed = Chislo;
		int Chet_Pobed = 0;
		int KYKYKUKU = Suma_Pobed - Chet_Pobed;
		cout << "Уровень: " << LVL << " " << "До следующего: " << 10 * GG - XP << endl;
		cout << "Жизни: " << MAX_HEALS << "/" << HEALS << endl;
		cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
		cout << "Мощь: " << MAX_STRONGS << endl;
		cout << "Золото: " << GOLD << endl;
		cout << "Ключи: " << KEYS << endl;
		cout << "Бомбы: " << BOMBS << endl;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				for (int k = 0; k < SUMA_SUMA; k++)
				{
					if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
					{
						if (mas_mas[i][j] == arr_FINAL[k])
						{
							wcout << setw(2) << "=" << " ";
							j++;
							continue;
						}
					}
				}
				for (int z = 0; z < SUMATOR_ENEMY; z++)
				{
					if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
					{
						if (mas_mas[i][j] == arr_FINAL_FINAL_ENEMY[z])
						{
							wcout << setw(2) << "#" << " ";
							j++;
							continue;
						}
					}
				}
				for (int z = 0; z < chet_syndyk; z++)
				{
					if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
					{
						if (mas_mas[i][j] == arr_syndyk[z])
						{
							wcout << setw(2) << "?" << " ";
							j++;
							continue;
						}
					}
				}
				for (int z = 0; z < chet_stone; z++)
				{
					if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
					{
						if (mas_mas[i][j] == arr_stone[z])
						{
							wcout << setw(2) << "&" << " ";
							j++;
							continue;
						}
					}
				}
				for (int z = 0; z < chet_treseare; z++)
				{
					if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
					{
						if (mas_mas[i][j] == arr_treseare[z])
						{
							wcout << setw(2) << "$" << " ";
							j++;
							continue;
						}
					}
				}
				if (MAGAZIN == mas_mas[i][j])
				{
					wcout << setw(2) << "M" << " ";
					continue;
				}
				if (KYZNA == mas_mas[i][j])
				{
					wcout << setw(2) << "K" << " ";
					continue;
				}
				if (BARDEL == mas_mas[i][j])
				{
					wcout << setw(2) << "B" << " ";
					continue;
				}
				if (ARENA == mas_mas[i][j])
				{
					wcout << setw(2) << "A" << " ";
					continue;
				}
				if (Chet_Pobed >= Suma_Pobed)
				{
					if (BOSS_MESTO == mas_mas[i][j])
					{
						wcout << setw(2) << "X" << " ";
						continue;
					}
				}
				if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
				{
					if (mas_mas[i][j] == Hero)
					{
						wcout << setw(2) << "@" << " ";
						continue;
					}
					if (((mas_mas[i][j] == mas_mas[0][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][1]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][2]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][3]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][4]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][5]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][6]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][7]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[1][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[2][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[3][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[4][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[5][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[6][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[7][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][1]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][2]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][3]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][4]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][5]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][6]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][7]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[7][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[6][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[5][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[4][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[3][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[2][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[1][8]) && (mas_mas[i][j] != arr_FINAL[j])))
					{
						wcout << setw(2) << "-" << " ";
						continue;
					}
					else
					{
						wcout << setw(2) << "+" << " ";
						continue;
					}
				}
			}
			wcout << endl;
		}
		do
		{
			int BAX = 0;
			int mas_mas[9][9]{ {mas1[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas1[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas2[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas2[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas3[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas3[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas4[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas4[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas5[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas5[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas6[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas6[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas7[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas7[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas8[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas8[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)},
								{mas9[q] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[w] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[e] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[r] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[t] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[y] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[u] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[i] - (630 * x) + (630 * v) + (9 * z) - (9 * d),mas9[o] - (630 * x) + (630 * v) + (9 * z) - (9 * d)} };
			char PROVERKA = _getch();
			switch (PROVERKA)
			{
			case 'a':
				Hero--;
				break;
			case 'd':
				Hero++;
				break;
			case 'w':
				Hero -= 70;
				break;
			case 's':
				Hero += 70;
				break;
			case 'A':
				Hero--;
				break;
			case 'D':
				Hero++;
				break;
			case 'W':
				Hero -= 70;
				break;
			case 'S':
				Hero += 70;
				break;
			case ']':
				if (BOMBS > 0)
				{
					BOMBS--;
					BAX = 1;
					for (int i = 0; i < chet_stone; i++)
					{
						if (((Hero + 1) == arr_stone[i]) || ((Hero - 1) == arr_stone[i]) || ((Hero - 70) == arr_stone[i]) || ((Hero + 70) == arr_stone[i]))
						{
							arr_stone[i] = 0;
							int KAMEN_ZAP = rand() % (100 - 1 + 1) + 1;
							if (KAMEN_ZAP > 75)
							{
								cout << "Из камня выпала запчасть!" << endl;
								ZAPCHASTI++;
							}
							break;
						}
					}
					for (int i = 0; i < chet_stone; i++)
					{
						if (((Hero + 1) == arr_stone[i]) || ((Hero - 1) == arr_stone[i]) || ((Hero - 70) == arr_stone[i]) || ((Hero + 70) == arr_stone[i]))
						{
							arr_stone[i] = 0;
							int KAMEN_ZAP = rand() % (100 - 1 + 1) + 1;
							if (KAMEN_ZAP > 75)
							{
								cout << "Из камня выпала запчасть!" << endl;
								ZAPCHASTI++;
							}
							break;
						}
					}
					break;
				}
				else
				{
					break;
				}
			case '}':
				if (BOMBS > 0)
				{
					BOMBS--;
					BAX = 1;
					for (int i = 0; i < chet_stone; i++)
					{
						if (((Hero + 1) == arr_stone[i]) || ((Hero - 1) == arr_stone[i]) || ((Hero - 70) == arr_stone[i]) || ((Hero + 70) == arr_stone[i]))
						{
							arr_stone[i] = 0;
							int KAMEN_ZAP = rand() % (100 - 1 + 1) + 1;
							if (KAMEN_ZAP > 75)
							{
								cout << "Из камня выпала запчасть!" << endl;
								ZAPCHASTI++;
							}
							break;
						}
					}
					for (int i = 0; i < chet_stone; i++)
					{
						if (((Hero + 1) == arr_stone[i]) || ((Hero - 1) == arr_stone[i]) || ((Hero - 70) == arr_stone[i]) || ((Hero + 70) == arr_stone[i]))
						{
							arr_stone[i] = 0;
							int KAMEN_ZAP = rand() % (100 - 1 + 1) + 1;
							if (KAMEN_ZAP > 75)
							{
								cout << "Из камня выпала запчасть!" << endl;
								ZAPCHASTI++;
							}
							break;
						}
					}
					break;
				}
				else
				{
					break;
				}
			case VK_TAB:
				system("cls");
				cout << "Уровень: " << LVL << " " << "До следующего: " << 10 * GG - XP << endl;
				cout << "Количество Очков Умений: " << CHET_LVL << endl;
				cout << "Количество Очков Характеристик: " << XAR_LVL << endl;
				cout << "До появления Босса Этажа надо убить еще " << KYKYKUKU << endl;
				cout << "Ваше имя: " << IMA << endl;
				cout << "Ваши характеристики: " << endl;
				cout << "Сила: " << SILA << endl;
				cout << "Ловкость: " << LOVKOST << endl;
				cout << "Интелект:" << INTELEACT << endl;
				cout << "Жизни: " << MAX_HEALS << "/" << HEALS << endl;
				cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
				cout << "Мощь: " << MAX_STRONGS << endl;
				cout << "Золото: " << GOLD << endl;
				cout << "Зелья здоровья: " << HP_POUCHEN << endl;
				cout << "Стрелы: " << STRELA << endl;
				cout << "Ключи: " << KEYS << endl;
				cout << "Бомбы: " << BOMBS << endl;
				cout << "Запчасти: " << ZAPCHASTI << endl;
				cout << "Уровень вашего шлема: " << BRON_1 << endl;
				if (BRON_1 == 0)
				{
					cout << "Тряпка от швабры" << endl;
				}
				if (BRON_1 == 1)
				{
					cout << "Кожанный шлем" << endl;
				}
				if (BRON_1 == 2)
				{
					cout << "Железная шлем" << endl;
				}
				if (BRON_1 == 3)
				{
					cout << "Шлем Героя" << endl;
				}
				cout << "Уровень вашего нагрудника: " << BRON_2 << endl;
				if (BRON_2 == 0)
				{
					cout << "Порванная ковта" << endl;
				}
				if (BRON_2 == 1)
				{
					cout << "Кожанный нагрудник" << endl;
				}
				if (BRON_2 == 2)
				{
					cout << "Железный нагрудник" << endl;
				}
				if (BRON_2 == 3)
				{
					cout << "Нагрудник Героя" << endl;
				}
				cout << "Уровень ваших понож: " << BRON_3 << endl;
				if (BRON_3 == 0)
				{
					cout << "Сандали" << endl;
				}
				if (BRON_3 == 1)
				{
					cout << "Кожанные сапоги" << endl;
				}
				if (BRON_3 == 2)
				{
					cout << "Железные поножи" << endl;
				}
				if (BRON_3 == 3)
				{
					cout << "Поножи Героя" << endl;
				}
				cout << "Уровень вашего наручей: " << BRON_4 << endl;
				if (BRON_4 == 0)
				{
					cout << "Перчатки для огорода" << endl;
				}
				if (BRON_4 == 1)
				{
					cout << "Кожанные наручи" << endl;
				}
				if (BRON_4 == 2)
				{
					cout << "Железные наручи" << endl;
				}
				if (BRON_4 == 3)
				{
					cout << "Наручи Героя" << endl;
				}
				cout << "Уровень вашего оружие: " << BRON_5 << endl;
				if (BRON_5 == 0)
				{
					if (CLASS == 1)
					{
						cout << "Две ветки" << endl;
					}
					if (CLASS == 2)
					{
						cout << "Обматанная вокруг рук тряпка" << endl;
					}
					if (CLASS == 3)
					{
						cout << "Большая палка и оторванный кусок коры дерева" << endl;
					}
				}
				if (BRON_5 == 1)
				{
					if (CLASS == 1)
					{
						cout << "Медные кинжалы" << endl;
					}
					if (CLASS == 2)
					{
						cout << "Боевые кожанные перчатки" << endl;
					}
					if (CLASS == 3)
					{
						cout << "Медный меч и дно от бочки" << endl;
					}
				}
				if (BRON_5 == 2)
				{
					if (CLASS == 1)
					{
						cout << "Железные кинжалы" << endl;
					}
					if (CLASS == 2)
					{
						cout << "Магические железные кастеты" << endl;
					}
					if (CLASS == 3)
					{
						cout << "Железный меч и обычный щит" << endl;
					}
				}
				if (BRON_5 == 3)
				{
					if (CLASS == 1)
					{
						cout << "Кинжалы Убийцы" << endl;
					}
					if (CLASS == 2)
					{
						cout << "Перчатки Кудесника" << endl;
					}
					if (CLASS == 3)
					{
						cout << "Меч и щить Варвара" << endl;
					}
				}
				cout << "Ваш инвентарь: " << blat_1_NAZ << ", " << blat_2_NAZ << endl;
				if (ZADANIA == 1)
				{
					cout << "Вам надо убить: " << ZADANIA_GOT << " для выполнения задания" << endl;
				}
				if (ZADANIA == 0)
				{
					cout << "У вас нет заданий" << endl;
				}
				cout << "Ваши способности: " << mrazota_1_NAZ << ", " << mrazota_2_NAZ << ", " << mrazota_3_NAZ << endl;
				cin.get();
				break;
			case 'R':
				LVL_UP(LVL, XP, GG, CHET_LVL, CLASS, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, XAR_LVL, SILA, LOVKOST, INTELEACT);
				MAX_HEALS = 10 * SILA;
				HEALS = MAX_HEALS;
				YVOROT = (LOVKOST / 2) * 10;
				MAX_BEZBAGH = 1 * INTELEACT;
				BEZBAGH = 0;
				MAX_STRONGS = 1;
				if (CLASS == 1)
				{
					MAX_STRONGS = 1 * LOVKOST;
				}
				if (CLASS == 2)
				{
					MAX_STRONGS = 1 * INTELEACT;
				}
				if (CLASS == 3)
				{
					MAX_STRONGS = 1 * SILA;
				}
				break;
			case 'r':
				LVL_UP(LVL, XP, GG, CHET_LVL, CLASS, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, XAR_LVL, SILA, LOVKOST, INTELEACT);
				MAX_HEALS = 10 * SILA;
				HEALS = MAX_HEALS;
				YVOROT = (LOVKOST / 2) * 10;
				MAX_BEZBAGH = 1 * INTELEACT;
				BEZBAGH = 0;
				MAX_STRONGS = 1;
				if (CLASS == 1)
				{
					MAX_STRONGS = 1 * LOVKOST;
				}
				if (CLASS == 2)
				{
					MAX_STRONGS = 1 * INTELEACT;
				}
				if (CLASS == 3)
				{
					MAX_STRONGS = 1 * SILA;
				}
				break;
			}
			KYKYKUKU = Suma_Pobed - Chet_Pobed;
			Hero2 = Hero;
			int PRAVATOR = 0;
			int temp_perm = 0;
			int nomerator_1 = arr_inven[0];
			int nomerator_2 = arr_inven[1];
			for (int i = 0; i < SUMATOR_ENEMY; i++)
			{
				if (Hero2 == arr_FINAL_FINAL_ENEMY[i])
				{
					temp_perm = i;
					PRAVATOR = 1;
					break;
				}
			}
			if (PRAVATOR == 1)
			{
				if (PROVERKA == 'a' || PROVERKA == 'A')
				{
					cout << "Вы столкнулись с врагом!" << endl;
					cin.get();
					system("cls");
					BITVA(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, GOLD, XP, LVL, GG, CHET_LVL, XAR_LVL, ETAJI);
					arr_FINAL_FINAL_ENEMY[temp_perm] = 0;
					Chet_Pobed++;
					OCHKI++;
				}
				if (PROVERKA == 'd' || PROVERKA == 'D')
				{
					cout << "Вы столкнулись с врагом!" << endl;
					cin.get();
					system("cls");
					BITVA(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, GOLD, XP, LVL, GG, CHET_LVL, XAR_LVL, ETAJI);
					arr_FINAL_FINAL_ENEMY[temp_perm] = 0;
					OCHKI++;
				}
				if (PROVERKA == 'w' || PROVERKA == 'W')
				{
					cout << "Вы столкнулись с врагом!" << endl;
					cin.get();
					system("cls");
					BITVA(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, GOLD, XP, LVL, GG, CHET_LVL, XAR_LVL, ETAJI);
					arr_FINAL_FINAL_ENEMY[temp_perm] = 0;
					Chet_Pobed++;
					OCHKI++;
				}
				if (PROVERKA == 's' || PROVERKA == 'S')
				{
					cout << "Вы столкнулись с врагом!" << endl;
					cin.get();
					system("cls");
					BITVA(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, GOLD, XP, LVL, GG, CHET_LVL, XAR_LVL, ETAJI);
					arr_FINAL_FINAL_ENEMY[temp_perm] = 0;
					Chet_Pobed++;
					OCHKI++;
				}
			}
			for (int i = 0; i < chet_syndyk; i++)
			{
				if (Hero2 == arr_syndyk[i])
				{
					temp_perm = i;
					PRAVATOR = 2;
					break;
				}
			}
			int pyrdyk = 0;
			if (PRAVATOR == 2)
			{
				if (PROVERKA == 'a' || PROVERKA == 'A')
				{
					cout << "Вы нашли сундук!" << endl;
					cin.get();
					system("cls");
					SYNDYK(KEYS, GOLD, pyrdyk, ZAPCHASTI);
					if (pyrdyk == 1)
					{
						arr_syndyk[temp_perm] = 0;
						OCHKI++;
					}
				}
				if (PROVERKA == 'd' || PROVERKA == 'D')
				{
					cout << "Вы нашли сундук!" << endl;
					cin.get();
					system("cls");
					SYNDYK(KEYS, GOLD, pyrdyk, ZAPCHASTI);
					if (pyrdyk == 1)
					{
						arr_syndyk[temp_perm] = 0;
						OCHKI++;
					}
				}
				if (PROVERKA == 'w' || PROVERKA == 'W')
				{
					cout << "Вы нашли сундук!" << endl;
					cin.get();
					system("cls");
					SYNDYK(KEYS, GOLD, pyrdyk, ZAPCHASTI);
					if (pyrdyk == 1)
					{
						arr_syndyk[temp_perm] = 0;
						OCHKI++;
					}
				}
				if (PROVERKA == 's' || PROVERKA == 'S')
				{
					cout << "Вы нашли сундук!" << endl;
					cin.get();
					system("cls");
					SYNDYK(KEYS, GOLD, pyrdyk, ZAPCHASTI);
					if (pyrdyk == 1)
					{
						arr_syndyk[temp_perm] = 0;
						OCHKI++;
					}
				}
			}
			for (int i = 0; i < chet_stone; i++)
			{
				if (Hero2 == arr_stone[i])
				{
					PRAVATOR = 3;
					break;
				}
			}
			if (PRAVATOR == 3)
			{
				if ((PROVERKA == 'a') || (PROVERKA == 'A'))
				{
					cout << "Вы ударились в камень!" << endl;
					cin.get();
					Hero++;
				}
				if ((PROVERKA == 'd') || (PROVERKA == 'D'))
				{
					cout << "Вы ударились в камень!" << endl;
					cin.get();
					Hero--;
				}
				if ((PROVERKA == 'w') || (PROVERKA == 'W'))
				{
					cout << "Вы ударились в камень!" << endl;
					cin.get();
					Hero += 70;
				}
				if ((PROVERKA == 's') || (PROVERKA == 'S'))
				{
					cout << "Вы ударились в камень!" << endl;
					cin.get();
					Hero -= 70;
				}
			}
			int gyrdyk = 0;
			for (int i = 0; i < chet_treseare; i++)
			{
				if (Hero2 == arr_treseare[i])
				{
					PRAVATOR = 4;
					gyrdyk = i;
					break;
				}
			}
			string artef = "";
			string nomer_1 = mas_invent[0];
			string nomer_2 = mas_invent[1];
			int artefus = 0;;
			int nomer_artf = 0;
			if (PRAVATOR == 4)
			{
				if ((PROVERKA == 'a') || (PROVERKA == 'A'))
				{
					cout << "Вы нашли артефакт!" << endl;
					cin.get();
					system("cls");
					ARTEFACT(artefus, artef, nomer_1, nomer_2, nomer_artf);
					if (nomer_artf == 1)
					{
						arr_inven[0] = artefus;
						mas_invent[0] = artef;
						arr_treseare[gyrdyk] = 0;
						blat_1 = artefus;
						blat_1_NAZ = artef;
						OCHKI++;
					}
					if (nomer_artf == 2)
					{
						arr_inven[1] = artefus;
						mas_invent[1] = artef;
						arr_treseare[gyrdyk] = 0;
						blat_2 = artefus;
						blat_2_NAZ = artef;
						OCHKI++;
					}
					cin.get();
				}
				if ((PROVERKA == 'd') || (PROVERKA == 'D'))
				{
					cout << "Вы нашли артефакт!" << endl;
					cin.get();
					system("cls");
					ARTEFACT(artefus, artef, nomer_1, nomer_2, nomer_artf);
					if (nomer_artf == 1)
					{
						arr_inven[0] = artefus;
						mas_invent[0] = artef;
						arr_treseare[gyrdyk] = 0;
						blat_1 = artefus;
						blat_1_NAZ = artef;
						OCHKI++;
					}
					if (nomer_artf == 2)
					{
						arr_inven[1] = artefus;
						mas_invent[1] = artef;
						arr_treseare[gyrdyk] = 0;
						blat_2 = artefus;
						blat_2_NAZ = artef;
						OCHKI++;
					}
					cin.get();
				}
				if ((PROVERKA == 'w') || (PROVERKA == 'W'))
				{
					cout << "Вы нашли артефакт!" << endl;
					cin.get();
					system("cls");
					ARTEFACT(artefus, artef, nomer_1, nomer_2, nomer_artf);
					if (nomer_artf == 1)
					{
						arr_inven[0] = artefus;
						mas_invent[0] = artef;
						arr_treseare[gyrdyk] = 0;
						blat_1 = artefus;
						blat_1_NAZ = artef;
						OCHKI++;
					}
					if (nomer_artf == 2)
					{
						arr_inven[1] = artefus;
						mas_invent[1] = artef;
						arr_treseare[gyrdyk] = 0;
						blat_2 = artefus;
						blat_2_NAZ = artef;
						OCHKI++;
					}
				}
				if ((PROVERKA == 's') || (PROVERKA == 'S'))
				{
					cout << "Вы нашли артефакт!" << endl;
					cin.get();
					system("cls");
					ARTEFACT(artefus, artef, nomer_1, nomer_2, nomer_artf);
					if (nomer_artf == 1)
					{
						arr_inven[0] = artefus;
						mas_invent[0] = artef;
						arr_treseare[gyrdyk] = 0;
						blat_1 = artefus;
						blat_1_NAZ = artef;
						OCHKI++;
					}
					if (nomer_artf == 2)
					{
						arr_inven[1] = artefus;
						mas_invent[1] = artef;
						arr_treseare[gyrdyk] = 0;
						blat_2 = artefus;
						blat_2_NAZ = artef;
						OCHKI++;
					}
				}
			}
			if (Hero2 == MAGAZIN)
			{
				if ((PROVERKA == 'a') || (PROVERKA == 'A'))
				{
					cout << "Вы вошли в магазин!" << endl;
					cin.get();
					system("cls");
					MAGAZIN_SELL(GOLD, KEYS, BOMBS, HP_POUCHEN, ZAPCHASTI, STRELA, SELL_KEYS_KOL, SELL_BOMBS_KOL, SELL_HP_POUCHEN_KOL, SELL_ZAPCHASTI_KOL, SELL_STRELA_KOL);
				}
				if ((PROVERKA == 'd') || (PROVERKA == 'D'))
				{
					cout << "Вы вошли в магазин!" << endl;
					cin.get();
					system("cls");
					MAGAZIN_SELL(GOLD, KEYS, BOMBS, HP_POUCHEN, ZAPCHASTI, STRELA, SELL_KEYS_KOL, SELL_BOMBS_KOL, SELL_HP_POUCHEN_KOL, SELL_ZAPCHASTI_KOL, SELL_STRELA_KOL);
				}
				if ((PROVERKA == 'w') || (PROVERKA == 'W'))
				{
					cout << "Вы вошли в магазин!" << endl;
					cin.get();
					system("cls");
					MAGAZIN_SELL(GOLD, KEYS, BOMBS, HP_POUCHEN, ZAPCHASTI, STRELA, SELL_KEYS_KOL, SELL_BOMBS_KOL, SELL_HP_POUCHEN_KOL, SELL_ZAPCHASTI_KOL, SELL_STRELA_KOL);
				}
				if ((PROVERKA == 's') || (PROVERKA == 'S'))
				{
					cout << "Вы вошли в магазин!" << endl;
					cin.get();
					system("cls");
					MAGAZIN_SELL(GOLD, KEYS, BOMBS, HP_POUCHEN, ZAPCHASTI, STRELA, SELL_KEYS_KOL, SELL_BOMBS_KOL, SELL_HP_POUCHEN_KOL, SELL_ZAPCHASTI_KOL, SELL_STRELA_KOL);
				}
			}
			if (Hero2 == KYZNA)
			{
				if ((PROVERKA == 'a') || (PROVERKA == 'A'))
				{
					cout << "Вы вошли в кузницу!" << endl;
					cin.get();
					system("cls");
					KYZNECA_SELL(BRON_1, BRON_2, BRON_3, BRON_4, BRON_5, GOLD, STRELA, KEYS, BOMBS, ZAPCHASTI, SELL_BRON_1_ZAP, SELL_BRON_2_ZAP, SELL_BRON_3_ZAP, SELL_BRON_4_ZAP, SELL_BRON_5_ZAP, SELL_BOMBS_ZAP, SELL_KEYS_ZAP, SELL_STRELA_ZAP, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1);
				}
				if ((PROVERKA == 'd') || (PROVERKA == 'D'))
				{
					cout << "Вы вошли в кузницу!" << endl;
					cin.get();
					system("cls");
					KYZNECA_SELL(BRON_1, BRON_2, BRON_3, BRON_4, BRON_5, GOLD, STRELA, KEYS, BOMBS, ZAPCHASTI, SELL_BRON_1_ZAP, SELL_BRON_2_ZAP, SELL_BRON_3_ZAP, SELL_BRON_4_ZAP, SELL_BRON_5_ZAP, SELL_BOMBS_ZAP, SELL_KEYS_ZAP, SELL_STRELA_ZAP, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1);
				}
				if ((PROVERKA == 'w') || (PROVERKA == 'W'))
				{
					cout << "Вы вошли в кузницу!" << endl;
					cin.get();
					system("cls");
					KYZNECA_SELL(BRON_1, BRON_2, BRON_3, BRON_4, BRON_5, GOLD, STRELA, KEYS, BOMBS, ZAPCHASTI, SELL_BRON_1_ZAP, SELL_BRON_2_ZAP, SELL_BRON_3_ZAP, SELL_BRON_4_ZAP, SELL_BRON_5_ZAP, SELL_BOMBS_ZAP, SELL_KEYS_ZAP, SELL_STRELA_ZAP, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1);
				}
				if ((PROVERKA == 's') || (PROVERKA == 'S'))
				{
					cout << "Вы вошли в кузницу!" << endl;
					cin.get();
					system("cls");
					KYZNECA_SELL(BRON_1, BRON_2, BRON_3, BRON_4, BRON_5, GOLD, STRELA, KEYS, BOMBS, ZAPCHASTI, SELL_BRON_1_ZAP, SELL_BRON_2_ZAP, SELL_BRON_3_ZAP, SELL_BRON_4_ZAP, SELL_BRON_5_ZAP, SELL_BOMBS_ZAP, SELL_KEYS_ZAP, SELL_STRELA_ZAP, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1);
				}
			}
			if (Hero2 == ARENA)
			{
				if ((PROVERKA == 'a') || (PROVERKA == 'A'))
				{
					cout << "Вы вошли на арену!" << endl;
					cin.get();
					system("cls");
					ARENA_SELL(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, BUFF_YR, BUFF_DEF, HP_POUCHEN, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, GOLD, XP, LVL, GG, CHET_LVL, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, XAR_LVL);
				}
				if ((PROVERKA == 'd') || (PROVERKA == 'D'))
				{
					cout << "Вы вошли на арену!" << endl;
					cin.get();
					system("cls");
					ARENA_SELL(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, BUFF_YR, BUFF_DEF, HP_POUCHEN, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, GOLD, XP, LVL, GG, CHET_LVL, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, XAR_LVL);
				}
				if ((PROVERKA == 'w') || (PROVERKA == 'W'))
				{
					cout << "Вы вошли на арену!" << endl;
					cin.get();
					system("cls");
					ARENA_SELL(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, BUFF_YR, BUFF_DEF, HP_POUCHEN, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, GOLD, XP, LVL, GG, CHET_LVL, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, XAR_LVL);
				}
				if ((PROVERKA == 's') || (PROVERKA == 'S'))
				{
					cout << "Вы вошли на арену!" << endl;
					cin.get();
					system("cls");
					ARENA_SELL(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, BUFF_YR, BUFF_DEF, HP_POUCHEN, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, GOLD, XP, LVL, GG, CHET_LVL, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, XAR_LVL);
				}
			}
			if (Hero2 == BARDEL)
			{
				if ((PROVERKA == 'a') || (PROVERKA == 'A'))
				{
					cout << "Вы вошли в бардель!" << endl;
					cin.get();
					system("cls");
					BARDEL_SELL(GOLD, MAX_HEALS, HEALS, BUFF_DEF, BUFF_YR, ZADANIA, ZADANIA_GOT, SUKA_1, SUKA_2);
				}
				if ((PROVERKA == 'd') || (PROVERKA == 'D'))
				{
					cout << "Вы вошли в бардель!" << endl;
					cin.get();
					system("cls");
					BARDEL_SELL(GOLD, MAX_HEALS, HEALS, BUFF_DEF, BUFF_YR, ZADANIA, ZADANIA_GOT, SUKA_1, SUKA_2);
				}
				if ((PROVERKA == 'w') || (PROVERKA == 'W'))
				{
					cout << "Вы вошли в бардель!" << endl;
					cin.get();
					system("cls");
					BARDEL_SELL(GOLD, MAX_HEALS, HEALS, BUFF_DEF, BUFF_YR, ZADANIA, ZADANIA_GOT, SUKA_1, SUKA_2);
				}
				if ((PROVERKA == 's') || (PROVERKA == 'S'))
				{
					cout << "Вы вошли в бардель!" << endl;
					cin.get();
					system("cls");
					BARDEL_SELL(GOLD, MAX_HEALS, HEALS, BUFF_DEF, BUFF_YR, ZADANIA, ZADANIA_GOT, SUKA_1, SUKA_2);
				}
			}
			if (Hero2 == BOSS_MESTO && Chet_Pobed >= Suma_Pobed)
			{
				if ((PROVERKA == 'a') || (PROVERKA == 'A'))
				{
					cout << "Вы столкнулись с Боссом этажа!" << endl;
					cin.get();
					system("cls");
					BITVA_BOSS(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, GOLD, XP, LVL, GG, CHET_LVL, XAR_LVL, ETAJI);
					SIJET(ETAJI);
					ETAJI++;
					OCHKI++;
					break;
				}
				if ((PROVERKA == 'd') || (PROVERKA == 'D'))
				{
					cout << "Вы столкнулись с Боссом этажа!" << endl;
					cin.get();
					system("cls");
					BITVA_BOSS(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, GOLD, XP, LVL, GG, CHET_LVL, XAR_LVL, ETAJI);
					SIJET(ETAJI);
					ETAJI++;
					OCHKI++;
					break;
				}
				if ((PROVERKA == 'w') || (PROVERKA == 'W'))
				{
					cout << "Вы столкнулись с Боссом этажа!" << endl;
					cin.get();
					system("cls");
					BITVA_BOSS(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, GOLD, XP, LVL, GG, CHET_LVL, XAR_LVL, ETAJI);
					SIJET(ETAJI);
					ETAJI++;
					OCHKI++;
					break;
				}
				if ((PROVERKA == 's') || (PROVERKA == 'S'))
				{
					cout << "Вы столкнулись с Боссом этажа!" << endl;
					cin.get();
					system("cls");
					BITVA_BOSS(HEALS, MAX_HEALS, BEZBAGH, MAX_BEZBAGH, MAX_STRONGS, BOMBS, STRELA, HP_POUCHEN, BUFF_YR, BUFF_DEF, SUKA_1, SUKA_2, BRON_1_1, BRON_2_1, BRON_3_1, BRON_4_1, BRON_5_1, YVOROT, mrazota_1, mrazota_2, mrazota_3, mrazota_1_NAZ, mrazota_2_NAZ, mrazota_3_NAZ, blat_1, blat_2, blat_1_NAZ, blat_2_NAZ, GOLD, XP, LVL, GG, CHET_LVL, XAR_LVL, ETAJI);
					SIJET(ETAJI);
					ETAJI++;
					OCHKI++;
					break;
				}
			}
			int PRAV_PRAV = 0;
			if ((Hero2 == mas_mas[0][0]) || (Hero2 == mas_mas[0][1]) || (Hero2 == mas_mas[0][2]) || (Hero2 == mas_mas[0][3]) || (Hero2 == mas_mas[0][4]) || (Hero2 == mas_mas[0][5]) || (Hero2 == mas_mas[0][6]) || (Hero2 == mas_mas[0][7]) || (Hero2 == mas_mas[0][8]) || (Hero2 == mas_mas[1][0]) || (Hero2 == mas_mas[2][0]) || (Hero2 == mas_mas[3][0]) || (Hero2 == mas_mas[4][0]) || (Hero2 == mas_mas[5][0]) || (Hero2 == mas_mas[6][0]) || (Hero2 == mas_mas[7][0]) || (Hero2 == mas_mas[8][0]) || (Hero2 == mas_mas[8][1]) || (Hero2 == mas_mas[8][2]) || (Hero2 == mas_mas[8][3]) || (Hero2 == mas_mas[8][4]) || (Hero2 == mas_mas[8][5]) || (Hero2 == mas_mas[8][6]) || (Hero2 == mas_mas[8][7]) || (Hero2 == mas_mas[8][8]) || (Hero2 == mas_mas[7][8]) || (Hero2 == mas_mas[6][8]) || (Hero2 == mas_mas[5][8]) || (Hero2 == mas_mas[4][8]) || (Hero2 == mas_mas[3][8]) || (Hero2 == mas_mas[2][8]) || (Hero2 == mas_mas[1][8]))
			{
				for (int i = 0; i < SUMA_SUMA; i++)
				{
					if (Hero2 == arr_FINAL[i])
					{
						PRAV_PRAV++;
						break;
					}
				}
				if (PRAV_PRAV == 0)
				{
					if ((PROVERKA == 'a') || (PROVERKA == 'A'))
					{
						cout << "Вы ударились в стену!" << endl;
						cin.get();
						Hero++;
					}
					if ((PROVERKA == 'd') || (PROVERKA == 'D'))
					{
						cout << "Вы ударились в стену!" << endl;
						cin.get();
						Hero--;
					}
					if ((PROVERKA == 'w') || (PROVERKA == 'W'))
					{
						cout << "Вы ударились в стену!" << endl;
						cin.get();
						Hero += 70;
					}
					if ((PROVERKA == 's') || (PROVERKA == 'S'))
					{
						cout << "Вы ударились в стену!" << endl;
						cin.get();
						Hero -= 70;
					}
				}
				if (PRAV_PRAV == 1)
				{
					if (((Hero == mas_mas[0][4]) && (PROVERKA == 'w')) || ((Hero == mas_mas[0][4]) && (PROVERKA == 'W')))
					{
						cout << "Вы перешли в следующию комнату!" << endl;
						cin.get();
						x++;
						Hero = Hero - 140;
					}
					if (((Hero == mas_mas[8][4]) && (PROVERKA == 's')) || ((Hero == mas_mas[8][4]) && (PROVERKA == 'S')))
					{
						cout << "Вы перешли в следующию комнату!" << endl;
						cin.get();
						x--;
						Hero = Hero + 140;
					}
					if (((Hero == mas_mas[8][4]) && (PROVERKA == 's')) || ((Hero == mas_mas[8][4]) && (PROVERKA == 'S')))
					{
						cout << "Вы перешли в следующию комнату!" << endl;
						cin.get();
						v++;
						Hero = Hero + 140;
					}
					if (((Hero == mas_mas[0][4]) && (PROVERKA == 'w')) || ((Hero == mas_mas[0][4]) && (PROVERKA == 'W')))
					{
						cout << "Вы перешли в следующию комнату!" << endl;
						cin.get();
						v--;
						Hero = Hero - 140;
					}
					if (((Hero == mas_mas[4][0]) && (PROVERKA == 'a')) || ((Hero == mas_mas[4][0]) && (PROVERKA == 'A')))
					{
						cout << "Вы перешли в следующию комнату!" << endl;
						cin.get();
						d++;
						Hero = Hero - 2;
					}
					if (((Hero == mas_mas[4][8]) && (PROVERKA == 'd')) || ((Hero == mas_mas[4][8]) && (PROVERKA == 'D')))
					{
						cout << "Вы перешли в следующию комнату!" << endl;
						cin.get();
						Hero = Hero + 2;
						d--;
					}
					if (((Hero == mas_mas[4][8]) && (PROVERKA == 'd')) || ((Hero == mas_mas[4][8]) && (PROVERKA == 'D')))
					{
						cout << "Вы перешли в следующию комнату!" << endl;
						cin.get();
						z++;
						Hero = Hero + 2;
					}
					if (((Hero == mas_mas[4][0]) && (PROVERKA == 'a')) || ((Hero == mas_mas[4][0]) && (PROVERKA == 'A')))
					{
						cout << "Вы перешли в следующию комнату!" << endl;
						cin.get();
						z--;
						Hero = Hero - 2;
					}
				}
			}
			system("cls");
			cout << "Уровень: " << LVL << " " << "До следующего: " << 10 * GG - XP << endl;
			cout << "Жизни: " << MAX_HEALS << "/" << HEALS << endl;
			cout << "Очки Безбашенности: " << MAX_BEZBAGH << "/" << BEZBAGH << endl;
			cout << "Мощь: " << MAX_STRONGS << endl;
			cout << "Золото: " << GOLD << endl;
			cout << "Ключи: " << KEYS << endl;
			cout << "Бомбы: " << BOMBS << endl;
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 9; j++)
				{
					for (int k = 0; k < SUMA_SUMA; k++)
					{
						if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
						{
							if (mas_mas[i][j] == arr_FINAL[k])
							{
								wcout << setw(2) << "=" << " ";
								j++;
								continue;
							}
						}
					}
					for (int z = 0; z < SUMATOR_ENEMY; z++)
					{
						if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
						{
							if (mas_mas[i][j] == arr_FINAL_FINAL_ENEMY[z])
							{
								wcout << setw(2) << "#" << " ";
								j++;
								continue;
							}
						}
					}
					for (int z = 0; z < chet_syndyk; z++)
					{
						if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
						{
							if (mas_mas[i][j] == arr_syndyk[z])
							{
								wcout << setw(2) << "?" << " ";
								j++;
								continue;
							}
						}
					}
					for (int z = 0; z < chet_stone; z++)
					{
						if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
						{
							if (mas_mas[i][j] == arr_stone[z])
							{
								wcout << setw(2) << "&" << " ";
								j++;
								continue;
							}
						}
					}
					for (int z = 0; z < chet_treseare; z++)
					{
						if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
						{
							if (mas_mas[i][j] == arr_treseare[z])
							{
								wcout << setw(2) << "$" << " ";
								j++;
								continue;
							}
						}
					}
					if (MAGAZIN == mas_mas[i][j])
					{
						wcout << setw(2) << "M" << " ";
						continue;
					}
					if (KYZNA == mas_mas[i][j])
					{
						wcout << setw(2) << "K" << " ";
						continue;
					}
					if (BARDEL == mas_mas[i][j])
					{
						wcout << setw(2) << "B" << " ";
						continue;
					}
					if (ARENA == mas_mas[i][j])
					{
						wcout << setw(2) << "A" << " ";
						continue;
					}
					if (Chet_Pobed >= Suma_Pobed)
					{
						if (BOSS_MESTO == mas_mas[i][j])
						{
							wcout << setw(2) << "X" << " ";
							continue;
						}
					}
					if ((i == 0 || i == 1 || i == 2 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8) && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4 || j == 5 || j == 6 || j == 7 || j == 8))
					{
						if (mas_mas[i][j] == Hero)
						{
							wcout << setw(2) << "@" << " ";
							continue;
						}
						if (((mas_mas[i][j] == mas_mas[0][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][1]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][2]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][3]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][4]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][5]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][6]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][7]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[0][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[1][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[2][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[3][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[4][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[5][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[6][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[7][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][0]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][1]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][2]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][3]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][4]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][5]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][6]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][7]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[8][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[7][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[6][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[5][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[4][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[3][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[2][8]) && (mas_mas[i][j] != arr_FINAL[j])) || ((mas_mas[i][j] == mas_mas[1][8]) && (mas_mas[i][j] != arr_FINAL[j])))
						{
							wcout << setw(2) << "-" << " ";
							continue;
						}
						else
						{
							wcout << setw(2) << "+" << " ";
							continue;
						}
					}
				}
				wcout << endl;
			}
		} while (true);
	} while (ETAJI != 5);
	system("cls");
	cout << "Вы закончили игру!" << endl;
	if (BRON_1 == 3 && BRON_2 == 3 && BRON_3 == 3 && BRON_4 == 3 && BRON_5 == 3)
	{
		OCHKI += 10;
	}
	if (LVL >= 15)
	{
		OCHKI += 10;
	}
	cout << "Количество ваших очков(очки ставились за победу в сражениях, открытые сундуки, найденные артефакты и полный сет брони треьего уровня, а так же пятнадцатый уровень): " << OCHKI << endl;
	cin.get();
	return 0;
}