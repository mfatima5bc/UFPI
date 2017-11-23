#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Data{
	int dia;
	int mes;
	int ano;
}Data;

struct Funcionario{
	char nome[20];
	char civil[20];
	int matricula;
	float salario;
	char ender[35];
	char cargo[20];
	Data dat;
};
int fim, cont;
Funcionario f[20];
void lista(){
	if(fim == 0){
		printf("Nao ah funcionarios cadastrados!\n");
	}
	for(int i = 0; i < fim; i++){
		printf("Nome: %s\nMatricula: %d\n",f[i].nome,f[i].matricula);
		printf("Estado Civil: %s\nEndereco: %s\n",f[i].civil,f[i].ender);
		printf("Cargo: %s\nSalario: %f\nDate de nascimento: %d/%d/%d\n",f[i].cargo,f[i].salario,f[i].dat.dia,f[i].dat.mes,f[i].dat.ano);
		printf("________________________\n");
	}
}

void busc(){
	char nom[20];
	bool achou = false;
	printf("Digite o nome: ");
	setbuf(stdin,NULL);
	gets(nom);
	
	float retorno;
	int t, i;
	t = strlen(nom);
	for(i = 0; i < fim; i++){
		retorno = strncmp(nom,f[i].nome, t);
		if(retorno==0){
			achou = true;
			break;
		}
	}
	
	if(achou){
		printf("Nome: %s\nEndereco: %s\nMatricula: %d\n",f[i].nome, f[i].ender, f[i].matricula);
		printf("Data de nascimento: %d/%d/%d\nSalario: %f\n",f[i].dat.dia,f[i].dat.mes,f[i].dat.ano, f[i].salario);
		printf("Cargo: %s\nEstado civil: %s\n",f[i].cargo,f[i].civil);
	}else{
		printf("Funcionario nao encontrado\n");
	}
}

void excluir(){
	int e;
	printf("digite a posicao que deseja excluir[de 0 a 19]: ");
	scanf("%d",&e);
	if(e<fim){
		for(int l = e; l < fim; l++){
			f[l] = f[l+1];
		}
		fim--;
		printf("Funcionario excluido\n");
	}else{
		printf("Impossivel excluir. Posição invalida\n");
	}
	
}

void alterar(){
	int p;
	printf("digite a posicao que deseja alterar[de 0 a 19]: ");
	scanf("%d",&p);
		
	if(p < fim){
		printf("Nome: %s\nEndereco: %s\nMatricula: %d",f[p].nome, f[p].ender, f[p].matricula);
		printf("Data de nascimento: %d/%d/%d\nSalario: %f",f[p].dat.dia,f[p].dat.mes,f[p].dat.ano, f[p].salario);
		printf("Cargo: %s\nEstado civil: %s\n",f[p].cargo,f[p].civil);
		printf("Digite os novos dados________\n");
		printf("Digite seu nome: ");
		setbuf(stdin,NULL);
		gets(f[p].nome);
		printf("Digite seu estado civil: ");
		setbuf(stdin,NULL);
		gets(f[p].civil);
		setbuf(stdin,NULL);
		printf("Endereco: ");
		gets(f[p].ender);
		setbuf(stdin,NULL);
		printf("Digite seu cargo: ");
		gets(f[p].cargo);
		setbuf(stdin,NULL);
		printf("Digite sua Matricula: ");
		scanf("%d",&f[p].matricula);
		printf("Digite o salario: ");
		scanf("%f",&f[p].salario);
		printf("Digite sua data de nascimento\n dia: ");
		scanf("%d",&f[p].dat.dia);
		printf(" Mes: ");
		scanf("%d",&f[p].dat.mes);
		printf(" Ano: ");
		scanf("%d",&f[p].dat.ano);
	}else{
		printf("Impossivel alterar. Posicaoo nao preenchida\n");
	}
}

int main(){

	int i = 1, op = 1;
	while(op != 0){
		printf("_____________________________Selecione uma operacao_____________________________\n");
		printf(" 01 - Cadastrar Funcionario.                       02 - Buscar Funcionario.\n");
		printf(" 03 - Alterar Funcionario.                         04 - Excluir Funcionario.\n");
		printf(" 05 - Listar todos os Funcionarios                 06 - Sair.\n");
		printf("________________________________________________________________________________\n   ");
		scanf("%d",&op);
		system("cls");
	
		switch(op){
			case 01: 
				if(fim == 19){
					printf("Impossivel cadastrar!");
					break;
				}
				printf("Digite seu nome: ");
				setbuf(stdin,NULL);
				gets(f[fim].nome);
				printf("Digite seu estado civil: ");
				setbuf(stdin,NULL);
				gets(f[fim].civil);
				setbuf(stdin,NULL);
				printf("Endereco: ");
				gets(f[fim].ender);
				setbuf(stdin,NULL);
				printf("Digite seu cargo: ");
				gets(f[fim].cargo);
				setbuf(stdin,NULL);
				printf("Digite sua Matricula: ");
				scanf("%d",&f[fim].matricula);
				printf("Digite o salario: ");
				scanf("%f",&f[fim].salario);
				printf("Digite sua data de nascimento\n dia: ");
				scanf("%d",&f[fim].dat.dia);
				printf(" Mes: ");
				scanf("%d",&f[fim].dat.mes);
				printf(" Ano: ");
				scanf("%d",&f[fim].dat.ano);
				system("cls");	
				fim++;			
				break;
				
			case 02:
				busc();
				break;
			case 03:
				alterar();
				break;
			case 04:
				excluir();
				break;
			case 05:				
				lista();
				break;
			case 06:
				op = 0; 
				break;
		}
	}
	
	return 0;
}
