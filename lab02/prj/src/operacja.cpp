/*!
 * \file operacja.cpp
 *
 *  Created on: 11-03-2015
 *      Author: turbowarkocz
 */

#include "../inc/operacja.h"
#include <iostream>
void operacja(std::vector<int> &wektor, unsigned int ilosc_operacji)
{
	Stos sztos;
	Kolejka kolega;
	Kontener lista;

	for(unsigned int i = 0; i < ilosc_operacji; ++i)
		sztos.push(i);
		//kolega.push(i);
		//lista.insert(i,i<5?0:i%5);
}

