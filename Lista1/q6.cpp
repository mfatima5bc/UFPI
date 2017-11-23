#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main(){
	//6. Faça um programa que receba um número inteiro e calcule o resto da divisão por 2.
	int n;
	printf("digite um numero inteiro: ");
	scanf("%d",&n);
	float r;
	r = n %2;
	printf("O resto da divisao eh: %.2f", r);
	
	return 0;
}
