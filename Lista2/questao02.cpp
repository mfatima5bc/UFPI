#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	float n1, n2, n3;
	float media;
	printf("Digite a nota 1: ");
	scanf("%f",&n1);
	printf("Digite a nota 2: ");
	scanf("%f",&n2);
	printf("Digite a nota 3: ");
	scanf("%f",&n3);
	media = (n1+n2+n3)/3;
	if(media >= 7){
		printf("Aprovado! sua media foi: %.2f",media);
	}else if(media < 7 && media >= 4){
		printf("Prova Final! sua media foi: %.2f",media);
	}else{
		printf("Reprovado! sua media foi: %.2f",media);
	}
	
	return 0;
}
