/*!	\file operacja.h
	\brief Plik zawiera deklarację funkcji operacja().
*/ 
#ifndef OPERACJA_H
#define OPERACJA_H

#include <vector>
#include <cassert>

#include "stos.h"
#include "kolejka.h"

/*! \brief Wykonuje operację na wczytanym ciągu danych.
 *
 * Funkcja odpowiada za wykonanie porządanej operacji na ciągu danych.
 *
 * \param[in] wektor Referencja do wczytanego ciąg danych.
 * \param[in] ilosc_operacji Określa na ilu pierwszych elementach wektora wektor ma zostać wykonana operacja.
 */
void operacja(std::vector<int> &wektor, unsigned int ilosc_operacji);

#endif
