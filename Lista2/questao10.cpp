#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int cont;
	float p, t, a = 5000000, b = 7000000;
	
	for(int i = 0; i<300; i++){
		a += (a*0.03);
		b += (b*0.02);
		cont++;
		if(a>b){
			break;
		}		
	}
	printf("O pais A levara %d anos para ultrapasar o pais B!",cont);
	
	return 0;
}
