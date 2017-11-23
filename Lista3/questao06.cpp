#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int m;
	char nome[15];

	printf("Digite seu nome: ");
	scanf("%s",&nome);	
	m = strlen(nome);
	
	printf("palavra investida: ");
	for(int l = m;l >= 0; l--){
		printf("%c",nome[l]);
	}
	
	return 0;
}
