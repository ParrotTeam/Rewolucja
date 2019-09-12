
#include"pch.h" 
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include"èrÛd≥o.h"
#include"grafika.h"
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
		cout << "B£•D: nie moøna otworzyÊ pliku do odczytu." << endl;
	}

	system("pause");
	system("cls");
	cout << "[SYST]dodano 30000 DukatÛw/n ";
	cout << "Po odejúciu kobiety, podchodzi do Ciebie Tadeusz Koúciuszko: "<<endl;
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
		cout << "B£•D: nie moøna otworzyÊ pliku do odczytu." << endl;
	}
	cout << "Witam XXX, jak dobrze wiesz jestem gubernatorem Warszawy i bÍdÍ przyglπda≥ siÍ Twojej pracy." << endl;
	cout << "[1] Witam, w ca≥ym moim øyciu kieruje siÍ tylko sprawiedliwoúciπ..."<<endl;
	cout << "[2]Witam, na samym poczπtku muszÍ zg≥osiÊ prÛbÍ oszustwa..." << endl;
	cout << "[3] Przepraszam spieszy mi siÍ..."<<endl;
	cin >> switch2;
	switch (switch2)
		{
		case 1:
			cout << "ostatnio mowi≥ mi dok≥adnie to samo poprzedni sÍdzia najwyøszy Najjaúniejszej Rzeczypospolitej, heh" << endl;
			cout << "tak? I co siÍ z nim sta≥o?" << endl;
			cout <<"zawis≥ za zdradÍ ojczyzny,tak czy inaczej zapraszam na pierwszπ rozprawÍ."<<endl;
			break;
		case 2:
			cout << "- jakπ prÛbÍ przekupstwa? O co chodzi? - widzisz przyglπdajπcπ Ci siÍ wczeúniej kobietÍ." << endl;
			cout << " [1] - yy niewaøne..." << endl;
			cout << " [2] - ta kobieta da≥a mi pieniπdzÍ, abym sπdzi≥ po ich korzyúci."<<endl;
			cout << " [3] - jednen z przedstawicieli tego stronictwa ofiarowa≥ mi pieniπdzÍ, abym sπdzi≥ po ich korzyúci(nie wydawaj kobiety)"<<endl;
			cin >> switch3;
				switch(switch3)
			{ 
				case 1:
					cout << "[SYST] -10 pkt zaufanie Koúciuszki" << endl;
					cout << " Koúciuszko robi dziwnπ minÍ. - Mam nadziejÍ, øe by≥ to tylko nieudany øart, za przyjÍcie ≥apÛwki grozi panu úmierÊ.Zapraszam na rozprawÍ." << endl;
					break;
				case 2:
					cout << "[SYST] +20 zaufanie Koúciuszki, -30 zaufanie stronnictwa HetmaÒskiego" << endl;
					cout << " -To skandal! Naleøy zamknπÊ tπ kobietÍ " << endl;// do rozbudowania
					break;
				case 3:
					cout << "[SYST] +20 zaufanie Koúciuszki, -100 zaufanie stronnictwa HetmaÒskiego. Stronnictwo HetmaÒskie chcÍ CiÍ zabiÊ. " << endl;;
					cout << "dobrze øe mi o tym mÛwisz, porozmawiamy o tym po rozprawie." << endl;
					break;

				}
				
			break;

		case 3:
			cout <<"rozumiem øe spieszy siÍ panu na rozprawÍ, proszÍ za mnπ oprowadzÍ pana."<<endl;
			
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
		cout << "B£•D: nie moøna otworzyÊ pliku do odczytu." << endl;
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
		cout << "B£•D: nie moøna otworzyÊ pliku do odczytu." << endl;
	}

	system("pause");
	system("cls");
	cout << "proba";

}