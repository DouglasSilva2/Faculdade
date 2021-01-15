#include <stdlib.h>
#include <stdio.h>

int main() {

	int x, * y; // Declaração de uma variavel ( x ) e um ponteiro ( *y )

		printf("\n ---------------------------- \n");
		//
		printf("Digite um numero inteiro: ");
		scanf_s("%d", &x);
		//
		printf("\n ===========================\n");

			y = &x;

			printf("O endereco da variavel x eh: %p \n", &x);
			printf("O endereco da variavel x eh: %p \n", y);

			printf("\n =========================\n");
	system("pause");
	return 0;
		}