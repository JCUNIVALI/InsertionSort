#ifndef GERA_VETOR_H
#define GERA_VETOR_H
#include <iostream>
#include <time.h>
#include "InsertionSort.h"


template <typename T> 
void Teste_Insertion_Sort(T vetor, int tamanho) {
	srand(time(NULL));
	for (int x = 0;x < tamanho;x++) {
		vetor[x] = rand() % 300;
		cout << vetor[x] << "\t";
	}
	cout << endl << endl;
	InsertionSort(vetor, 0, tamanho-1);
	for (int x = 0;x < tamanho;x++) {
		cout << vetor[x] << "\t";
	}

}






#endif