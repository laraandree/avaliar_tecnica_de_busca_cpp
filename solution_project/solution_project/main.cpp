#include <iostream>
#include "ArvoreBinariaAVL.h"


//RANDOM NUMBERS GENERATED BY THE 'Linear Congruential Generator' ALGORITHM
static const int A = 9;
static const int C = 1;
static const int M = 28000;

int prev = 1; // To generate random numbers more than once (to abb and bb)

int myrand()
{
	//static int prev = 1; // To generate random numbers more than once
	prev = (A * prev + C) % (M+1);
	return prev;
}

void main() {
	int min = 0;
	int output;

	ArvoreBinariaAVL *tree = new ArvoreBinariaAVL();
	//INSERE ELEMENTOS ALEATORIOS NA ABB - armazena tempo de indexacao
	for (int i = 0; i < 1000; i++) {
		output = min + (rand() % (M - min + 1));
		tree->insere_elemento(output);
	}

	//BUSCA ELEMENTOS ALEATORIOS NA ABB - armazena tempo de busca
	for (int i = 0; i < 1000; i++) {
		int existe = tree->existe_elemento_int(myrand());

		if (existe != -1)
			std::cout << "Existe: [" << i << "]" << existe << std::endl;

	}
	
}