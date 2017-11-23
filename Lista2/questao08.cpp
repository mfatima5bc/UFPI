#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int l;
	while(l != 4){
		printf("_______________________Escolha uma opcao___________________________\n");
		printf("  1 - Cadastrar   ");
		printf("  2 - Alterar    ");
		printf("  3 - Excluir   ");
		printf("  4 - Sair\n");
		printf("___________________________________________________________________\n");
		scanf("%d",&l);
		
		system("cls");
		
		switch(l){
			case 01: printf("opcao escolhida foi Cadastrar!\n\n");break;
			case 02: printf("opcao escolhida foi Alterar!\n\n");break;
			case 03: printf("opcao escolhida foi Excluir!\n\n");break;			
		}
		
	}
	
	return 0;
}
