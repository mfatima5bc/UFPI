#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int n, num;
	printf("Digite um numero: ");
	scanf("%d",&n);
	num = n;
	for(int i = 1; i < n; i++){
		num = num * i;		
	}
		
	printf("%d",num);
	return 0;
}
