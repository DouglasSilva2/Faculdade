#include <stdlib.h>
#include <stdio.h>
//declaração da struct com seus membros 
	struct dado
	{
		char nome[50];
		int matricula;
	}; struct dado cadastro;

int main() {

	 cadastro;

	 printf("======= DIOGITE SEUS DADOS DE CADASTRO ======\n");
	 printf("Digite o seu nome: \n");
	 gets(cadastro.nome);

	 printf("\n ----------------------------\n");

	 printf("Digite o sua matricula : \n");
	 scanf_s("%d", &cadastro.matricula);

	 printf("======= DADOS IMPRESSOS ======\n");
// imprimir dados na tela para usuario.....	 
	 printf(" Nome: %s\n", cadastro.nome);
	 printf(" Matricula: %d \n", cadastro.matricula);
// Fim o algoritmo ......
	 printf(" \n ========= END ======== \n");

	 system("pause ");
	 return 0;
}