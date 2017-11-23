#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int idade[30];
	int media;
	for(int i = 0; i < 30; i++){
		printf("Digite a idade do aluno [%d]: ",i+1);
		scanf("%d",&idade[i]);
	}
	for(int j = 0; j < 30; j++){
		media += idade[j];
	}
	printf("A media das idades eh: %d",media/30);
	return 0;
}
