#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char palavra1[20];
	char palavra2[20];
	
	printf("Digite a primeira palavra: ");
	scanf("%s",&palavra1);
	printf("Digite a segunda palavra: ");
	scanf("%s",&palavra2);
	
	strcat(palavra1, palavra2);
	printf("Palavra concatenada: %s\n",palavra1);
	printf("\nQuantidade decaracteres: %d\n",strlen(palavra1));
	
	
	return 0;
}
