#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3, soma, media;
	
	printf("Digite o numero 1: \n");
	scanf("%d", &n1);
	printf("Digite o numero 2: \n");
	scanf("%d", &n2);
	printf("Digite o numero 3: \n");
	scanf("%d", &n3);
	
	soma = n1 + n2 + n3;
	
	media = soma / 3;
	
	printf("A média dos 3 numeros postos foi: %d", media);
}