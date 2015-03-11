/*
 * !!!!!!!! UWAGA
 * !!!!!!!! PLIK "dane.dat" MUSI SIED ZNAJDOWAC W KATALOGU .../lab01
 *  Created on: 11-03-2015
 *      Author: turbowarkocz
 */
#include <fstream> 	// ifstream()
#include <iostream> // cout, cerr, endl
#include <vector> 	// vector<int>, vector::push_back(), vector::size()
#include <ctime>    // clock(), clock_t, CLOCKS_PER_SEC
#include <cstdlib>	// exit()

#define ILOSC_POWTORZEN 10

using namespace std;

void operacja(vector<int> &);

int main()
{
	clock_t zegar; 		// czas w tickach procesora
	double czas_w_s;	// czas w sekundach
	double tab_wynikow[ILOSC_POWTORZEN];
	int temp; 			// zmienna pomocnicza do wczytywania danych z pliku
	double srednia = 0;
	vector<int> dane;

	ifstream plikwe("dane.dat");

	if(!plikwe)
	{
		cerr << "Blad otiwerania pliku!" << endl;
		exit(1);
	}
	// Wczytuj liczby z pliku do pojawienia sie EOF
	while(plikwe >> temp)
		dane.push_back(temp);

	for(int i = 0; i < ILOSC_POWTORZEN; ++i)
	{
		zegar = clock();
		// 	operacja
		operacja(dane);

		zegar = clock() - zegar;

		czas_w_s = (double)zegar/CLOCKS_PER_SEC;
		tab_wynikow[i] = czas_w_s;
		srednia += czas_w_s;
	// KONIEC PETLI
	}
	cout << "Sredni czas wykonania operacji: " << srednia/ILOSC_POWTORZEN;
	cout << endl;
}


void operacja(vector<int> &wektor)
{
	for(unsigned int i = 0; i < wektor.size(); ++i)
		wektor[i] *= 2;
}
