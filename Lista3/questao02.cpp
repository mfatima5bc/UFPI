#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int v[10], m;
	int menor = 0;
	for(int i = 0; i<10; i++){
		printf("Digite o valor[%d]: ",i+1);
		scanf("%d",&v[i]);
	}
	
	for(int l =0; l<10; l++){
		if(menor > v[l]){
			menor = v[l];
		}
	}
	printf("Menor elemento: %d",menor);
	
	return 0;
}
