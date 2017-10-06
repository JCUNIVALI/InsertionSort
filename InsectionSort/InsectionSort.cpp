// InsectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


template <typename T>
void InsertionSort(T vetor[], int primeiro, int ultimo) {
	int menor = primeiro, escolha = vetor[primeiro], indice=0;
	while (menor <= ultimo) {
		if (vetor[menor] < escolha) {
			escolha = vetor[menor];
			indice = menor;
		}
		menor++;
	}
	while (indice > primeiro) {
		vetor[indice] = vetor[indice - 1];
		indice--;
	}
	vetor[primeiro] = escolha;
	primeiro++;
	if (primeiro < ultimo)
		InsertionSort(vetor, primeiro, ultimo);
}
int main()
{
	int vetor[9] = { 5,6,8,4,1,2,7,10,-2 };
	InsertionSort(vetor, 0, 8);
	for (int x = 0;x < 9;x++) {
		cout << vetor[x] << "\t";
	}
	return 0;
}