#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H


template  <typename T>
void InsertionSort(T vetor[], int primeiro, int ultimo) {
	while (primeiro < ultimo) {
		while (vetor[primeiro+1] < vetor[primeiro]) {
			int aux = vetor[primeiro];
			vetor[primeiro] = vetor[primeiro + 1];
			vetor[primeiro + 1] = aux;
			if (primeiro - 1 >= 0 && vetor[primeiro-1]>vetor[primeiro])
				primeiro--;
		}
		primeiro++;
	}
}

#endif