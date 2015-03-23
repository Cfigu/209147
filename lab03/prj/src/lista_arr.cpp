#include "../inc/lista_arr.h"

bool arr::Lista::empty()
{
	return(this->rozmiar_ls == 0);
}

int arr::Lista::erase(int indeks)
{
	int zwracana = this->tablica[indeks];

	// Zmniejszanie indeksu częśći elementów o 1
	for(int i = indeks; i < this->rozmiar_ls; ++i)
		tablica[i] = tablica[i+1];
	--this->rozmiar_ls;

	return zwracana;
}

void arr::Lista::insert(int value, int indeks)
{
	// W razie braku miejsca na nowy element - rozszerzyć listę.
	if(this->rozmiar_ls == this->pojemnosc_ls)
		this->rozszerz_1();
	// Specjalne traktowanie na wypadek, gdy pusta
	if(this->empty())
	{
		tablica[0] = value;
		++this->rozmiar_ls;
	}	
	else
	{
		// Podnoszenie indeksu częśći elementów o 1
		for(int i = this->rozmiar_ls; i >= indeks; --i)
			tablica[i+1] = tablica[i];

		// Wstawianie nowej wartości w odpowiednie miejsce
		tablica[indeks] = value;

		++this->rozmiar_ls;
	}
}

void arr::Lista::rozszerz_x2()
{
	// Rezerwacja nowego bloku pamięci
	int *temp = new int[this->rozmiar_ls*2];
	// Kopiowanie dotychczas przechowywanych elementów
	for(int i = 0; i < this->rozmiar_ls; ++i)
		temp[i] =this->tablica[i];
	// Zwalnianie dotychczas używanej pamięci
	delete [] this->tablica;
	// Teraz tablica wskazywać będzie na nowy obszar
	this->tablica = temp;
	// Aktualizowanie wartości pojemności stosu	
	this->pojemnosc_ls *= 2;	
}

void arr::Lista::rozszerz_1()
{
	// Rezerwacja nowego bloku pamięci
	int *temp = new int[this->rozmiar_ls + 1];
	// Kopiowanie dotychczas przechowywanych elementów
	for(int i = 0; i < this->rozmiar_ls; ++i)
		temp[i] =this->tablica[i];
	// Zwalnianie dotychczas używanej pamięci
	delete [] this->tablica;
	// Teraz tablica wskazywać będzie na nowy obszar
	this->tablica = temp;
	// Aktualizowanie wartości pojemności stosu	
	++this->pojemnosc_ls;
}