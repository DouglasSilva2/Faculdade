#include <stdlib.h>
#include <stdio.h>




int main() {
	
	// Declaração de Variaveis ....

		int RU_1, RU_2 = 123456;
	
		printf("\n======== DIGITE SEU RU ===== \n");
		// Recebendo o valor digitado pelo usuario.... 
	printf("Digite seu RU: ");
	scanf_s("%d", &RU_1);

	// Declaração de Ponteiros....
	int* pont_RU_1 = &RU_1;
	int* pont_RU2  = &RU_2;

	printf("\n O primeiro numero de RU eh: = %d\n", *pont_RU_1);
	printf("\n O segundo  numero de RU eh: = %d\n", *pont_RU2);


		if (*pont_RU_1 > *pont_RU2) {

			printf("\n O RU 1 eh maior:  \n");

		}
		else {

			printf("\n O RU 2 eh maior: ");
		}



	printf("\n======= END =======\n");

	system ("pause");
	return 0;
}