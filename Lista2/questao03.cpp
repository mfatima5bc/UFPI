#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int mes;
	printf("Digite o mes: ");
	scanf("%d",&mes);
	switch(mes){
		case 01: printf("Janeiro tem: 31");break;
		case 02: printf("Fevereiro tem: 28");break;
		case 03: printf("Marco tem: 31");break;
		case 04: printf("Abril tem: 30");break;
		case 05: printf("Maio tem: 31");break;
		case 06: printf("Junho tem: 30");break;
		case 07: printf("Julho tem: 31");break;
		case 8: printf("Agosto tem: 31");break;
		case 9: printf("Setembro tem: 30");break;
		case 10: printf("Outubro tem: 31");break;
		case 11: printf("Novembro tem: 30");break;
		case 12: printf("Dezembro tem: 31");break;
		default: printf("invalido"); 
	}
	return 0;
}
