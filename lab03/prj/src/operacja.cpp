/*!
 * \file operacja.cpp
 *
 *  Created on: 11-03-2015
 *      Author: turbowarkocz
 */

#include "../inc/operacja.h"
#include <iostream>

clock_t operacja(std::vector<int> &wektor, unsigned int ilosc_operacji)
{
	clock_t czas;
	arr::Stos sztos;
	for(unsigned int i = 0; i < ilosc_operacji; ++i)
		sztos.push(wektor[i]);
	// Zapisanie czasu wykonywania operacji
	czas = clock();
	// Zwalnianie pamięci, nie liczone przez zegar.
	//for(int i = sztos.size(); i > 0; --i)
	//	sztos.erase(0);

	return czas;
}

