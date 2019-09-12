#include"grafika.h"
#include"pch.h"
#include"wstawki.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <fstream>
using namespace std;

void okladka()
{
	ifstream plik("txt/ok³adka.txt");

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
}
void grafkosciuszko()
{
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
}
	void ekranpowitalny()
	{
		ifstream plik2("txt/ekranpowitalny.txt");

		if (plik2)
		{
			string linia;

			while (getline(plik2, linia))
			{
				cout << linia << endl;
			}
		}
		else
		{
			cout << "B£¥D: nie mo¿na otworzyæ pliku do odczytu." << endl;
		}
	}