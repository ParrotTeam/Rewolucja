#include "pch.h"
#include <windows.h>
#include <iostream>
#include <conio.h>
#include <string>
#include <time.h>
#include "grafika.h"
#include "wstawki.h"
#include "Źródło.h"
using namespace std;
int switch1;
int main()
{
	setlocale(LC_ALL, "");	//polskie znaki
	//
	//
	// okno po kreatorze postaci
	// switche są tymczasowe
	// od razu przyporzadkujemy funkcje do wyniku 
	//
	{
		poczatek();
		cout << "do którego stronictwa została wylosowana twoja postać?" << endl;
			cout << "[1] hetmańskie" << endl;
			cout << "[2] patriotyczne" << endl;
			cout << "[3] dworskie" << endl;
			cin >> switch1;
			
			switch(switch1)
		{
		case 1:
			cout << endl;
			hetman();

			break;
		case 2:
			cout << endl;
			patriot();
			break;

		case 3:
			cout << endl;
			dworski();
			break;
		}
	}
	return 0;
}




