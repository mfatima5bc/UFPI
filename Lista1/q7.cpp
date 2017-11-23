#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main(){
	//7. Faça um programa que receba o nome e o sobrenome de uma pessoa e imprima o nome completo em uma linha.
	char nome1[15], nome2[15];
	printf("Digite seu primeiro nome: ");
	scanf("%s",&nome1);
	printf("Digite seu segundo nome: ");
	scanf("%s",&nome2);
	
	printf("Seu nome completo eh: %s %s", nome1, nome2);
	return 0;
}
