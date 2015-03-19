#ifndef STOS_ARR_H
#define STOS_ARR_H

#include <cstdlib> // NULL
class Stos_a
{
	// Przechowuje adres do pierwszego elementu stosu
	int *tablica;
	int rozmiar_stosu;
	int pojemnosc_stosu;
/*!
	\brief Metoda zwiększa dwukrotnie pojemnosć stosu.
*/
	void rozszerz_x2();
/*!
	\brief Metoda zwiększa pojemnosć stosu o 1.
*/
	void rozszerz_1();

public:
/*! 
	\brief Konstruktor domyślny klasy Stos_a. 
*/
	Stos_a(): tablica(NULL), rozmiar_stosu(0), pojemnosc_stosu(0){}
/*!
	\brief Konstruktor kopiujący klasy Stos_a.
	
	Bezużyteczny dla trzeciego zadania, ale na pewno kolega się ucieszy.
*/
	Stos_a(const Stos_a &lewy);
/*!
	\brief Destruktor klasy Stos_a.
*/
	~Stos_a();
/*!
	\brief Wrzuca element na szczyt stosu.
*/
	void push(int val);
/*!
	\brief Zdejmuje najmłodszy element ze stosu.
*/
	int pop();
/*!
	\brief Sprawdza, czy stos jest pusty.
*/
	bool empty();
};

#endif