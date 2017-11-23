#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n;
	printf("Digite um numero: ");
	scanf("%d",&n);
	if(n % 2 == 0){
		printf("Numero Par");
	}else{
		printf("Numero Impar");
	}
	return 0;
}
