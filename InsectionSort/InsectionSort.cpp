// InsectionSort.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "InsertionSort.h"
#include "Gera_Vetor.h"
#define tamanho 100000
using namespace std;

int main()
{
	int vetor[tamanho];
	Teste_Insertion_Sort(vetor, tamanho);
	
	system("pause");
	return 0;
}