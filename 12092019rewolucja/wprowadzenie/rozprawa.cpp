#include "pch.h" 
#include "�r�d�o.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <fstream>
using namespace std;

// (Sprawiedliwizowane) http://www.fupp.org.pl/down/symulacja.pdf  a konkretniej rzecz ujmuj�c st�d mo�na po�ci�ga�
//  nawet �ywcem cz�� rozpraw jak na przyk�ad "Morderstwo w pubie" czy "Wypadek drogowy"
int rswitch1, rswitch2;
void rozprawa()
{
	// prosz� powsta� przed Wysokim S�dem (zmienna gracz.imi�)
	// - Dzi�kuj�, prosz� usi���. W dniu dzisiejszym przed s�dem odpowiada� b�dzie (pozwany) w sprawie wytoczonej
	// przez (pow�d/pow�dka)

	//dobra trutututu nie ja tu od fabu�y, kto� co� m�wi, teraz jako s�dzia pasowa�oby dopyta� o spraw�,
	//zapozna� si� z dowodami i ew. dopyta� o co� pozwanego lub �wiadk�w czy co�
	cin >> rswitch1;
	switch (rswitch1)
	{
	case 1:

	case 2:

	default:
		cout << "Podano b��dny numer, pon�w wyb�r";
		break;
	}//helo�

}
