#include <stdio.h>
#include <stdlib.h>

	typedef float num01;
	typedef int num02;


int main() {

	//Declaração das variaveis 
			num01 a = 56.5; // float pois foi alterada o tipo por typedef
			num02 b = 30; // int
			char caract = 'D';

	// declaração de ponteiros m...

			num01 *pont_a = &a;
			num02 *pont_b = &b;
			char *pont_caract = &caract;

	// imprimir os valores na tela..

			printf("Primeiro numero: %f \n\n", a);
			printf("Primeiro numero: %d \n\n", b);
			printf("Primeiro caracterio: %c \n\n", caract);
			
			*pont_b = 15;
			*pont_a = 16.5;
			*pont_caract = 'T';

			printf("Primeiro numero: %f \n\n", a);
			printf("Primeiro numero: %d \n\n", b);
			printf("Primeiro caracterio: %c \n\n", caract);

	system("pause");
	return 0;
}