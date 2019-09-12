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
int wswitch1, wswitch2, wswitch3;// tutaj zmienne do switcha deklarujemy od "w" poniewa¿ switche bez "W" zadeklarowane s¹ ju¿ w wporowadzeniu.obj   
int moneta = 0;
void poczatek()
{

	ekranpowitalny();
	Sleep(5000);
	system("cls");

	cout << "14 maja 1793 rok. £azienki warszawskie.  " << endl;
	cout << " - Dziadku, dziadku, zobacz! Ju¿ je widaæ! jakie ogromne!" << endl;
	cout << " - Gdzie? " << endl;
	cout << " - No tu na prawo!" << endl;
	cout << " -  Powiedz mi synu, czy wy postracaliœcie zmys³y w tym sejmie?" << endl;
	cout << " Jeszcze miesi¹c temu podnieœliœcie podatek na sformowanie 24 dywizji, a dziœ wysy³acie cz³owieka w powietrze ? " << endl;

	cout << endl;
	cout << endl;
	cout << "[1] [sarkastycznie] to nasz mi³oœciwy król Stanis³aw Poniatowski" << endl;
	cout << "[2] jesteœmy winni coœ narodowi polskiemu. " << endl;
	cout << "[3] Jestem marsza³kiem, nie skarbnikiem RP." << endl;
	cin >> wswitch1;
	switch (wswitch1)
	{
	case 1:

		cout << "To nasz mi³oœciwie panuj¹cy nam król i jego masoneria! Po tym wszystkim co dziejê siê w naszym kraju doskonale widaæ kto jest kim!" << endl;
		cout << "Tak? A To nie Ty jesteœ przypadkiem gubernatorem Warszawy?" << endl;
		break;

	case 2:
		cout << "Wszystko rozplanowane jest wedle, myœli naszego Króla, z myœl¹ o mieszkancach Warszawy.  Bud¿et jest dopiêty na ostatni guzik." << endl;
		cout << "Tak? A To nie Ty jesteœ przypadkiem gubernatorem Warszawy?" << endl;
		break;

	case 3:
		cout << " Jestem marsza³kiem, nie skarbnikiem RP. Moj¹ rol¹ jest s¹dzenie, nie zarz¹dzanie finansami." << endl;
		cout << "Tak? A To nie Ty jesteœ przypadkiem gubernatorem Warszawy?" << endl;
		break;
	}
	cout << "Tu¿ przy wejœciu do bramy stoi z³otnik, sprzedaj¹cy monety upamiêtniaj¹ce wydarzenie pierwszego lotu balonem w Europie Wschodniej..." << endl;
	cout << " - tato! tato! Kup mi taki!" << endl;
	cout << " - synu, nie widzê potrze.. " << endl;
	cout << " - no nie b¹dŸ taki! To dla ma³ego wielkie wydarzenie! Dla mnie zreszt¹ te¿, pomimo tego, ¿e kwestionuje sens takiego wydatku dla pañstwa." << endl;
	cout << " Podchodzi do sprzedawcy/n - dobrze, wiêc za ile ta moneta? " << endl;
	cout << " -tylko 300 dukatów- odpowiada szczerz¹c siê z³otozêbny podstarza³y dziad. - wprost z mennicy polskiej." << endl;
	cout << endl;
	cout << endl;
	cout << "[1]dobrze synu kupiê, ale musisz byæ grzeczny." << endl;
	cout << "[2] Nie ma mowy, do widzenia." << endl;
	cin >> wswitch2;

	switch (wswitch2)
	{
	case 1:
		cout << " - poproszê, wiêc jedn¹. Staœ dostaje z³ot¹ monetê z wygrawerowanym na przodzie królem Rzeczypospolitej i ty³em z podobizn¹ prototypu balona napêdzanego ciep³ym powietrzem." << endl;
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