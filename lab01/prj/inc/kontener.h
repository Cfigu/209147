/*!
	\file kontener.h
	\brief Plik zawiera definicję klasy Kontener oraz deklaracje metod tej klasy.
*/

#ifndef KONTENER_H
#define KONTENER_H

#include "cegla.h"

class Kontener
{
	cegla *pierwsza;
public:

/*!
	\brief Wrzuca nową cegiełkę na początek kontenera.

*/
	void push(int);
/*!
	\brief Zwraca wielkość kontenera.
*/
	int size();
};

#endif
