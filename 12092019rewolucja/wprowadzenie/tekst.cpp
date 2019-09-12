#include"pch.h" 
#include"èrÛd≥o.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <fstream>
using namespace std;
void txthetman()
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
}

void txtbalon()
{
	ifstream plik("txt/balon.txt");

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
}
void txtmoneta0()
{
	ifstream plik("txt/moneta0.txt");

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
}

void txtmoneta1()
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
}