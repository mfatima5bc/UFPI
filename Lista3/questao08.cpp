#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char string1[20], string2[20], string[20];
	
	printf("Digite a String 1: ");
	scanf("%s",&string1);
	printf("Digite a String 2: ");
	scanf("%s",&string2);
	
	
	for(int i = strlen(string1); i <=0; i++){
		for(int l = strlen(string2); l <=0; l++){
			string[l] = string1[i];			
			string1[i] = string2[l];
			string2[l] = string[l];
		}
	}
	
	printf("A string 1 agora eh: %s\n", string2);
	printf("A string 2 agora eh: %s", string1);
	
	return 0;
}
