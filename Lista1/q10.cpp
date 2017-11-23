#include<stdio.h>
#include<stdlib.h>
#include<String.h>

int main(){
	//10. Faça um programa que resolva uma equação do primeiro grau (ax + b = 0).
	//Deve-se pedir para o usuário digitar os coeficientes a e b e, após, calcular x, que é igual a -b/a.
	float x, a, b;
	printf("Digite o valor de a: ");
	scanf("%f",&a);
	printf("Digite o valor de b: ");
	scanf("%f",&b);
	x = (a - b)/ a;
	printf("O valor de x eh: %.2f",x);
	
	return 0;
}
