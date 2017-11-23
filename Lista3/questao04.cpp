#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float v[10], n;
	
	for(int i = 0; i<10; i++){
		printf("Digite um valor: ",i+1);
		scanf("%f",&v[i]);
	}
	
	system("cls");
	
	printf("Digite o valor a ser encontrado: ");
	scanf("%f",&n);
	for(int l =0; l<10; l++){
		if(v[l] == n){
			printf("\nEncontrado na posicao: %d\n",l);
			break;
			system("pause");
		}else if(n != v[l]){
			printf("\nvalor nao encontrado\n");
		}
	}
	
	
	return 0;
}
