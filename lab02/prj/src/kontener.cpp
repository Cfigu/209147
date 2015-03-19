 /*!
	\file kontener.cpp
	\brief Plik zawiera definicje metod klasy Kontener.
*/
#include "../inc/kontener.h"

void Kontener::push(int wart)
{
	cegla *nowa = new cegla;
	nowa->dana = wart;
	nowa->nastepna = this->alfa;
	alfa = nowa;
}

void Kontener::insert(int wart, int indeks)
{
	if(indeks == 0) this->push(wart);
	else
	{
		cegla *starsza = this->alfa;	
		cegla *mlodsza = this->alfa;
		// ... od nowo dodawanej
		cegla *nowa = new cegla;

		nowa->dana = wart;
		if(indeks > 0 && indeks < this->size())
		{	// Pomiędzy 'starsza' a 'mlodsza' wejdzie
			// nowa cegiełka
			for(int i = 0; i < indeks; ++i)
			{	// Zapisanie adresu nowszej cegiełki
				if (i == indeks - 1)
					mlodsza = starsza;
				starsza = starsza->nastepna;
			}
		}
	// Nowa cegiełka wskazuje na starszą od siebie
	nowa->nastepna = starsza;
	// Młodsza cegiełka wskazuje na nowo utworzoną
	mlodsza->nastepna = nowa;
	}
}

int Kontener::size()
{
	int wielkosc = 0;
	cegla *temp = this->alfa;

	if(this->alfa) // Warunek spelniony jezeli wskaznik niepusty 
		while(temp)
		{
			temp = temp->nastepna;
			++wielkosc;
		}

	return wielkosc;
}

int Kontener::erase(int indeks)
{
	cegla *usuwany = this->alfa; // pomocniczy na usuwaną cegłę
	// pomocniczy na cegłę o 1 młodszą	
	cegla *przed_usuwanym = this->alfa;
		
	int usuneli_mnie = 0; // wartość przechowywana w usuwanej cegle

	if(indeks == 0)
	{
		usuneli_mnie = usuwany->dana;
		this->alfa = usuwany->nastepna; 
	}
	if(indeks > 0 && indeks < this->size())
	{
		// Podróż wskaźnika w stronę usuwanej cegiełki
		for(int i = 0; i < indeks; ++i)
		{
			// Zapisanie adresu nowszej cegiełki
			if (i == indeks - 1)
				przed_usuwanym = usuwany;
			usuwany = usuwany->nastepna;
		}
		// Teraz wskaźnik 'usuwany' wskazuje odpowiednią cegłę
		// Przystępujemy do usuwania cegiełki
		usuneli_mnie = usuwany->dana;
		przed_usuwanym->nastepna = usuwany->nastepna;
	}
	delete usuwany;

	return usuneli_mnie;
}

int Kontener::find(int wartosc)
{
	cegla *temp = this->alfa;
	int indeks = 0;
		
	if(temp) // jeżeli kontener niepusty
	{
		for(int i = 0; i < this->size(); ++i)
		{
			if(temp->dana == wartosc) break;
			temp = temp->nastepna;
			++indeks;
		}
	}
	return indeks;
}

void Kontener::show()
{
	cegla *temp = this->alfa;

	if(this->alfa) // Warunek spelniony jezeli wskaznik niepusty 
		while(temp)
		{
			std::cout << temp->dana << std::endl;
			temp = temp->nastepna;
		}
}
