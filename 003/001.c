#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, res;
	char operacao;
	
	printf("Escolha o número 1 para a operação: \n");
	scanf("%d", &n1);
	printf("Escolha o número 2 para a operação: \n");
	scanf("%d", &n2);
	
	printf("Digite a operação (+, -, *, /)");
	scanf(" %c", &operacao);
	
	switch(operacao){
		case '+':
			res = n1 + n2;
			printf("%d + %d = %d", n1, n2, res);
			break;
		case '-':
			res = n1 - n2;
			printf("%d - %d = %d", n1, n2, res);
			break;
		case '*':
			res = n1 * n2;
			printf("%d X %d = %d", n1, n2, res);
			break;
		case '/':
			res = n1 / n2;
			printf("%d / %d = %d", n1, n2, res);
			break;
		default:
			printf("Operação Desconhecida.");
			break;
		
	}
}