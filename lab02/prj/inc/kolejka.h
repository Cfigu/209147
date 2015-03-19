/*!
	\file kolejka.h
	\brief Plik zawiera definicję klasy Kolejka jako pochodnej klasy Kontener oraz definicje jego metod.
*/
#ifndef KOLEJKA_H
#define KOLEJKA_H

#include "kontener.h"
/*!
	\brief Kolejka, abstrakcyjna struktura danych z buforem typu LIFO
*/
class Kolejka: public Kontener
{
public:
/*!
	\brief Pop kolejki jaki jest, każdy widzi. Usuwa najstarszy element i zwraca wartość przez niego przechowywaną.
*/
	int pop(){ return this->erase(this->size() -1);}
};

#endif
