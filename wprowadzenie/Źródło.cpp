
#include"pch.h" 
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <fstream>
#include"Nag��wek.h"
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
		cout << "B��D: nie mo�na otworzy� pliku do odczytu." << endl;
	}

	system("pause");
	system("cls");
	cout << "[SYST]dodano 30000 Dukat�w/n ";
	cout << "Po odej�ciu kobiety, podchodzi do Ciebie Tadeusz Ko�ciuszko: "<<endl;
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
		cout << "B��D: nie mo�na otworzy� pliku do odczytu." << endl;
	}
	cout << "Witam XXX, jak dobrze wiesz jestem gubernatorem Warszawy i b�d� przygl�da� si� Twojej pracy." << endl;
	cout << "[1] Witam, w ca�ym moim �yciu kieruje si� tylko sprawiedliwo�ci�..."<<endl;
	cout << "[2]Witam, na samym pocz�tku musz� zg�osi� pr�b� oszustwa..." << endl;
	cout << "[3] Przepraszam spieszy mi si�..."<<endl;
	cin >> switch2;
	switch (switch2)
		{
		case 1:
			cout << "ostatnio mowi� mi dok�adnie to samo poprzedni s�dzia najwy�szy Najja�niejszej Rzeczypospolitej, heh" << endl;
			cout << "tak? I co si� z nim sta�o?" << endl;
			cout <<"zawis� za zdrad� ojczyzny,tak czy inaczej zapraszam na pierwsz� rozpraw�."<<endl;
			break;
		case 2:
			cout << "- jak� pr�b� przekupstwa? O co chodzi? - widzisz przygl�daj�c� Ci si� wcze�niej kobiet�." << endl;
			cout << " [1] - yy niewa�ne..." << endl;
			cout << " [2] - ta kobieta da�a mi pieni�dz�, abym s�dzi� po ich korzy�ci."<<endl;
			cout << " [3] - jednen z przedstawicieli tego stronictwa ofiarowa� mi pieni�dz�, abym s�dzi� po ich korzy�ci(nie wydawaj kobiety)"<<endl;
			cin >> switch3;
				switch(switch3)
			{ 
				case 1:
					cout << "[SYST] -10 pkt zaufanie Ko�ciuszki" << endl;
					cout << " Ko�ciuszko robi dziwn� min�. - Mam nadziej�, �e by� to tylko nieudany �art, za przyj�cie �ap�wki grozi panu �mier�.Zapraszam na rozpraw�." << endl;
				case 2:
					cout << "[SYST] +20 zaufanie Ko�ciuszki, -30 zaufanie stronnictwa Hetma�skiego" << endl;
					cout << " -To skandal! Nale�y zamkn�� t� kobiet� " << endl;// do rozbudowania
				case 3:
					cout << "[SYST] +20 zaufanie Ko�ciuszki, -100 zaufanie stronnictwa Hetma�skiego. Stronnictwo Hetma�skie chc� Ci� zabi�. " << endl;;
					cout << "dobrze �e mi o tym m�wisz, porozmawiamy o tym po rozprawie." << endl;
						
					break;

				}
				
			break;

		case 3:
			cout <<"rozumiem �e spieszy si� panu na rozpraw�, prosz� za mn� oprowadz� pana."<<endl;
			
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
		cout << "B��D: nie mo�na otworzy� pliku do odczytu." << endl;
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
		cout << "B��D: nie mo�na otworzy� pliku do odczytu." << endl;
	}

	system("pause");
	system("cls");
	cout << "proba";

}