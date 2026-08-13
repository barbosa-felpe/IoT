#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade;
	
	printf("Digite sua idade:");
	scanf("%d", &idade);
	
	if(idade <= 0)
	printf("Idade inválida");
	else if((idade > 0) && (idade <= 11))
	printf("Você é uma criança");
	else if((idade > 11) && (idade <= 18))
	printf("Você é um adolescente");
	else if((idade > 18) && (idade <= 24))
	printf("Você é um Jovem");
	else if((idade >= 25) && (idade <= 59))
	printf("Você é um adulto");
	else if(idade >= 60)
	printf("Você é um idoso");
}