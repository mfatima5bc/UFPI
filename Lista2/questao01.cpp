#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char data[12];
	char data2[12] = "treze";
	int r;
	printf("digite um numero: [ex: dois]    ");
	scanf("%s",&data);
	r = strcmp(data, data2);
	if(r == 0){
		printf("NUMERO CORRETO");
	}else{
		printf("NUMERO INCORRETO");
	}
	return 0;
}
