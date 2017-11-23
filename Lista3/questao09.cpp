#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int m[3][3], soma;
	
	for(int i = 0; i <=3; i++){
		for(int l = 0; l <=3; l++){
			printf("Digite o elemento da posicao [%d] [%d]: ", i, l);
			scanf("%d", &m[i][l]);
		}
	}
	
	for(int i = 0; i <=3; i++){
		for(int l = 0; l <=3; l++){
			soma += m[i][l];
		}
	}
	
	printf("Soma total: %d",soma);
	
	return 0;
}
