#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H


template <typename T>
void InsertionSort(T vetor[], int primeiro, int ultimo) {
	int menor = primeiro, escolha = vetor[primeiro], indice = 0;
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
#endif