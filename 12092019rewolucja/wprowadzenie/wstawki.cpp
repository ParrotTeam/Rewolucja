/*************************************************************************************
*                              miejsce na wstawki fabularne                          *
*                                                                                    *
*                                                                                    *
*                                                                                    *
*                                                                                    *
*                                                                                    *
**************************************************************************************
*/
#include"pch.h" 
#include"grafika.h"
#include"wstawki.h"
#include"tekst.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <cstdlib>
#include <fstream>
using namespace std;
int wswitch1, wswitch2, wswitch3;// tutaj zmienne do switcha deklarujemy od "w" poniewa� switche bez "W" zadeklarowane s� ju� w wporowadzeniu.obj   
int moneta = 0;
void poczatek()
{

	ekranpowitalny();
	Sleep(5000);
	system("cls");

	cout << "14 maja 1793 rok. �azienki warszawskie.  " << endl;
	cout << " - Dziadku, dziadku, zobacz! Ju� je wida�! jakie ogromne!" << endl;
	cout << " - Gdzie? " << endl;
	cout << " - No tu na prawo!" << endl;
	cout << " -  Powiedz mi synu, czy wy postracali�cie zmys�y w tym sejmie?" << endl;
	cout << " Jeszcze miesi�c temu podnie�li�cie podatek na sformowanie 24 dywizji, a dzi� wysy�acie cz�owieka w powietrze ? " << endl;

	cout << endl;
	cout << endl;
	cout << "[1] [sarkastycznie] to nasz mi�o�ciwy kr�l Stanis�aw Poniatowski" << endl;
	cout << "[2] jeste�my winni co� narodowi polskiemu. " << endl;
	cout << "[3] Jestem marsza�kiem, nie skarbnikiem RP." << endl;
	cin >> wswitch1;
	switch (wswitch1)
	{
	case 1:

		cout << "To nasz mi�o�ciwie panuj�cy nam kr�l i jego masoneria! Po tym wszystkim co dziej� si� w naszym kraju doskonale wida� kto jest kim!" << endl;
		cout << "Tak? A To nie Ty jeste� przypadkiem gubernatorem Warszawy?" << endl;
		break;

	case 2:
		cout << "Wszystko rozplanowane jest wedle, my�li naszego Kr�la, z my�l� o mieszkancach Warszawy.  Bud�et jest dopi�ty na ostatni guzik." << endl;
		cout << "Tak? A To nie Ty jeste� przypadkiem gubernatorem Warszawy?" << endl;
		break;

	case 3:
		cout << " Jestem marsza�kiem, nie skarbnikiem RP. Moj� rol� jest s�dzenie, nie zarz�dzanie finansami." << endl;
		cout << "Tak? A To nie Ty jeste� przypadkiem gubernatorem Warszawy?" << endl;
		break;
	}
	cout << "Tu� przy wej�ciu do bramy stoi z�otnik, sprzedaj�cy monety upami�tniaj�ce wydarzenie pierwszego lotu balonem w Europie Wschodniej..." << endl;
	cout << " - tato! tato! Kup mi taki!" << endl;
	cout << " - synu, nie widz� potrze.. " << endl;
	cout << " - no nie b�d� taki! To dla ma�ego wielkie wydarzenie! Dla mnie zreszt� te�, pomimo tego, �e kwestionuje sens takiego wydatku dla pa�stwa." << endl;
	cout << " Podchodzi do sprzedawcy/n - dobrze, wi�c za ile ta moneta? " << endl;
	cout << " -tylko 300 dukat�w- odpowiada szczerz�c si� z�otoz�bny podstarza�y dziad. - wprost z mennicy polskiej." << endl;
	cout << endl;
	cout << endl;
	cout << "[1]dobrze synu kupi�, ale musisz by� grzeczny." << endl;
	cout << "[2] Nie ma mowy, do widzenia." << endl;
	cin >> wswitch2;

	switch (wswitch2)
	{
	case 1:
		cout << " - poprosz�, wi�c jedn�. Sta� dostaje z�ot� monet� z wygrawerowanym na przodzie kr�lem Rzeczypospolitej i ty�em z podobizn� prototypu balona nap�dzanego ciep�ym powietrzem." << endl;
		moneta = moneta + 1;
		break;

	case 2:
		cout << "do widzenia, synu ta moneta nie jest tego warta." << endl;
		break;

	}
	if (moneta ==1)
	{
		txtmoneta1();
	}
	else

	{
		txtmoneta0();
	}
	txtbalon();
	cout << " Widzisz";

		//switch (wswitch3)
		//{
		//case 1:
		//}

		//okladka();
	
}