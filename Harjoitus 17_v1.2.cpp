/*Muokkaa edellist� ohjelmaa siten, ett� edell� m��ritelty� tietuetyyppi� k�ytet��n my�s kahden muun "koululaisen" tietojen tallentamiseen.
N�iden kahden muun koululaisen tiedot alustetaan ao.muuttujien m��rittelyn yhteydess�.
Ainoastaan yhden koululaisen tiedot kysyt��n k�ytt�j�lt� edellisen teht�v�n tapaan.
Tulosta kolmen koululaisen tiedot koulumatkan mukaisessa suuruusj�rjestyksess�(pienimm�st� suurimpaan) n�yt�lle*/
//******************
//Tapio Pekkarinen
//Harjoitus 17
//13.11.2014
//versio 1.1
#include <iostream>
using namespace std;
#include <cstring>
struct hl�t
{
	char etunimi[20];
	int kengannumero;
	char sukunimi[15];
	float koulumatka;
	char osoite[30];
	int postinumero;

};
int main()
{
	hl�t i[4] = {
			{ "Mikki", 33, "Hiiri", 5.4, "Hiirikatu 2", 40200 },
			{ "Mestari", 44, "Mies", 10.4, "Mestarinkatu", 40400 }
	};
	cout << "Anna kaikki Etunimesi, kengannumero, sukunimi, koulumatkan pituus, osoite ja postinumero.""(Etunimien/etunimen ja osoitteen j�lkeen, paina ENTER, muulloin v�lily�nti�)";

	cin.get(i[2].etunimi, 20)
		>> ws >> i[2].kengannumero
		>> ws >> i[2].sukunimi
		>> ws >> i[2].koulumatka;
	cin.get(i[2].osoite, 30)
		>> ws >> i[2].postinumero;

	if (i[0].koulumatka > i[1].koulumatka)
	{
		i[3] = i[0];
		i[0] = i[1];
		i[1] = i[3];
	}
	if (i[0].koulumatka>i[2].koulumatka)
	{
		i[3] = i[0];
		i[0] = i[2];
		i[2] = i[3];
	}
	if (i[1].koulumatka>i[2].koulumatka)
	{
		i[3] = i[1];
		i[1] = i[2];
		i[2] = i[3];
	}

	cout << "\nTiedot suuruusj�rjestyksess�: " << endl;

	cout << "\nNimesi " << i[0].etunimi << " " << i[0].sukunimi;
	cout << "\nKengannumero " << i[0].kengannumero;
	cout << "\nKoulumatkan pituus " << i[0].koulumatka;
	cout << "\nOsoitteesi " << i[0].osoite;
	cout << "\nPostinumero " << i[0].postinumero << endl;

	cout << "\nNimesi " << i[1].etunimi << " " << i[1].sukunimi;
	cout << "\nKengannumero " << i[1].kengannumero;
	cout << "\nKoulumatkan pituus " << i[1].koulumatka;
	cout << "\nOsoitteesi " << i[1].osoite;
	cout << "\nPostinumero " << i[1].postinumero<< endl;

	cout << "\nNimesi " << i[2].etunimi << " " << i[2].sukunimi;
	cout << "\nKengannumero " << i[2].kengannumero;
	cout << "\nKoulumatkan pituus " << i[2].koulumatka;
	cout << "\nOsoitteesi " << i[2].osoite;
	cout << "\nPostinumero " << i[2].postinumero << endl;


	

	return 0;
}