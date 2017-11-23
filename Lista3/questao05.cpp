#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char nome[15], sobrenome[20];
	printf("Digite seu primeiro nome: ");
	scanf("%s",&nome);
	printf("Digite seu sobrenome: ");
	scanf("%s",&sobrenome);
	strcat(nome, " ");
	strcat(nome, sobrenome);
	printf("%s",nome);
	
	
	return 0;
}
