/*
 * Generator danych do przetwarzania. Tworzy plik z ciagiem losowych liczb
 * oddzielonych bialymi znakami. Za pomoca dyrektyw preprocesora mozna
 * ustawic ilosc liczb, ktore maja byc zapisane do pliku oraz przedzial,
 * w jakim maja sie znajdowac.
 *
 * Autor: Mateusz Krawczuk
 */

#include <fstream> 	// ofstream()
#include <iostream>	// cerr, endl
#include <cstdlib>	// exit(), rand()
#include <climits>	// INT_MAX, INT_MIN
#include <ctime>	// rand(), srand()

#define ILOSC 10e6	// ile utworzony plik ma miec w sobie liczb
#define NAJWIEKSZA INT_MAX/2 // najwieksza mozliwa liczba zapisana do pliku
#define NAJMNIEJSZA INT_MIN/2// najmniejsza mozliwa liczba zapisana do pliku
using namespace std;

int main()
{
	ofstream plikwy("dane.dat");

	if(!plikwy)
	{
		cerr << "Blad tworzenia pliku!" << endl;
		exit(1);
	}

	srand( time( NULL ) ); // uzaleznia losowane liczby od stanu zegara

	for(int i = 0; i < ILOSC; ++i)
	{
		plikwy << (rand() % NAJWIEKSZA) + NAJMNIEJSZA << ' ';
	}
}



