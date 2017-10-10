#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H


template  <typename T>
int InsertionSort(T vetor[], int primeiro, int ultimo) {
	if (vetor[primeiro] > vetor[primeiro + 1]) {
		int aux = vetor[primeiro];
		vetor[primeiro] = vetor[primeiro + 1];
		vetor[primeiro + 1] = aux;
		if (primeiro - 1 >= 0)
			return InsertionSort(vetor, primeiro - 1, ultimo);
	}
	primeiro++;
	if (primeiro< ultimo)
		return InsertionSort(vetor, primeiro, ultimo);

}

#endif