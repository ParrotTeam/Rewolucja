
#include"pch.h" 
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include"Nag³ówek.h"
using namespace std;
int switch2,switch3;
void hetman()
{
	ifstream plik("txt/hetman.txt");

	if (plik)
	{
		string linia;     

		while (getline(plik, linia))    
		{
			cout << linia << endl; 			  
		}
	}
	else
	{
		cout << "B£¥D: nie mo¿na otworzyæ pliku do odczytu." << endl;
	}

	system("pause");
	system("cls");
	cout << "[SYST]dodano 30000 Dukatów/n ";
	cout << "Po odejœciu kobiety, podchodzi do Ciebie Tadeusz Koœciuszko: "<<endl;
	system("pause");	
	system("cls");
	ifstream plik1("txt/kosciuszko.txt");

	if (plik1)
	{
		string linia;

		while (getline(plik1, linia))
		{
			cout << linia << endl;
		}
	}
	else
	{
		cout << "B£¥D: nie mo¿na otworzyæ pliku do odczytu." << endl;
	}
	cout << "Witam XXX, jak dobrze wiesz jestem gubernatorem Warszawy i bêdê przygl¹da³ siê Twojej pracy." << endl;
	cout << "[1] Witam, w ca³ym moim ¿yciu kieruje siê tylko sprawiedliwoœci¹..."<<endl;
	cout << "[2]Witam, na samym pocz¹tku muszê zg³osiæ próbê oszustwa..." << endl;
	cout << "[3] Przepraszam spieszy mi siê..."<<endl;
	cin >> switch2;
	switch (switch2)
		{
		case 1:
			cout << "ostatnio mowi³ mi dok³adnie to samo poprzedni sêdzia najwy¿szy Najjaœniejszej Rzeczypospolitej, heh" << endl;
			cout << "tak? I co siê z nim sta³o?" << endl;
			cout <<"zawis³ za zdradê ojczyzny,tak czy inaczej zapraszam na pierwsz¹ rozprawê."<<endl;
			break;
		case 2:
			cout << "- jak¹ próbê przekupstwa? O co chodzi? - widzisz przygl¹daj¹c¹ Ci siê wczeœniej kobietê." << endl;
			cout << " [1] - yy niewa¿ne..." << endl;
			cout << " [2] - ta kobieta da³a mi pieni¹dzê, abym s¹dzi³ po ich korzyœci."<<endl;
			cout << " [3] - jednen z przedstawicieli tego stronictwa ofiarowa³ mi pieni¹dzê, abym s¹dzi³ po ich korzyœci(nie wydawaj kobiety)"<<endl;
			cin >> switch3;
				switch(switch3)
			{ 
				case 1:
					cout << "[SYST] -10 pkt zaufanie Koœciuszki" << endl;
					cout << " Koœciuszko robi dziwn¹ minê. - Mam nadziejê, ¿e by³ to tylko nieudany ¿art, za przyjêcie ³apówki grozi panu œmieræ.Zapraszam na rozprawê." << endl;
				case 2:
					cout << "[SYST] +20 zaufanie Koœciuszki, -30 zaufanie stronnictwa Hetmañskiego" << endl;
					cout << " -To skandal! Nale¿y zamkn¹æ t¹ kobietê " << endl;// do rozbudowania
				case 3:
					cout << "[SYST] +20 zaufanie Koœciuszki, -100 zaufanie stronnictwa Hetmañskiego. Stronnictwo Hetmañskie chcê Ciê zabiæ. " << endl;;
					cout << "dobrze ¿e mi o tym mówisz, porozmawiamy o tym po rozprawie." << endl;
						
					break;

				}
				
			break;

		case 3:
			cout <<"rozumiem ¿e spieszy siê panu na rozprawê, proszê za mn¹ oprowadzê pana."<<endl;
			
			break;
		}

}

void patriot()
{
	ifstream plik("folder_na_txt/proba.txt");

	if (plik)
	{
		string linia;

		while (getline(plik, linia))
		{

			cout << linia << endl;

		}
	}
	else
	{
		cout << "B£¥D: nie mo¿na otworzyæ pliku do odczytu." << endl;
	}

	system("pause");
	system("cls");
	cout << "proba";

}

void dworski()
{
	ifstream plik("txt/malachowski.txt");

	if (plik)
	{
		string linia;

		while (getline(plik, linia))
		{

			cout << linia << endl;

		}
	}
	else
	{
		cout << "B£¥D: nie mo¿na otworzyæ pliku do odczytu." << endl;
	}

	system("pause");
	system("cls");
	cout << "proba";

}