#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main(){
	//4. Faça um programa que crie três variáveis para receber as três notas
	// de um aluno e calcule e imprima a média desse aluno.
	float n1, n2, n3;
	printf("Digite a nota 1: ");
	scanf("%f",&n1);
	printf("Digite a nota 2: ");
	scanf("%f",&n2);
	printf("Digite a nota 3: ");
	scanf("%f",&n3);
	float m;
	m = n1 + n2 + n3 /3;
	printf("sua media eh: %.2f",m);
	
	return 0;
}
