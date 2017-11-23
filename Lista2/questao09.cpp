#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	for(int i = 1; i <6; i++){
		for(int j = 1; j <= 5; j++){
			printf("%d-%d ",i,j);
		}
		printf("\n");
	}
	return 0;
}
