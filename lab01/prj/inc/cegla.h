/*!
	\file cegla.h
	\brief Plik zawiera definicję struktury pomocniczej cegla.
*/

#ifndef CEGLA_H
#define CEGLA_H

#include <cstdlib> //NULL
/*!
	\brief Struktura pomocnicza cegla

	Struktura reprezentuje elementarną cząstkę kontenera - zawiera
	daną oraz wskaźnik do kolejnego elementu w kontenerze.
*/
struct cegla
{
	int dana;
	cegla *nastepna;
/*!
	\brief Konstruktor struktury cegla
	
	Inicjalizuje daną przechowywaną w cegiełce wartością przekazaną
	przez argument, czyni wskaźnik nastepna pustym.
*/
	
	
	cegla(int wartosc): dana(wartosc){ nastepna = NULL;}
};

#endif