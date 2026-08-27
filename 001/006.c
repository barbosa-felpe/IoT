#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3, peso1, peso2, peso3, soma_ponderada, soma_pesos, media;
	
	printf("Digite o numero 1: \n");
	scanf("%d", &n1);
	printf("Digite o peso 1: \n");
	scanf("%d", &peso1);
	printf("Digite o numero 2: \n");
	scanf("%d", &n2);
	printf("Digite o peso 2: \n");
	scanf("%d", &peso2);
	printf("Digite o numero 3: \n");
	scanf("%d", &n3);
	printf("Digite o peso 3: \n");
	scanf("%d", &peso3);
	
	
	soma_ponderada = n1 * peso1 + n2 * peso2 + n3 * peso3;
	soma_pesos = peso1 + peso2 + peso3;
	media = soma_ponderada / soma_pesos;

	printf("A média ponderada é: %d", media);	
	
}