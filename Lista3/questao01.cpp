#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	float v[10], m;
	
	for(int i = 0; i<10; i++){
		printf("Digite o valor[%d]: ",i+1);
		scanf("%f",&v[i]);
	}
	
	for(int l =0; l<10; l++){
		m = m + v[l];
	}
	
	printf("A media eh: %.2f",m/10);
	return 0;
}
