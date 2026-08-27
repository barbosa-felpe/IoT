#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	 
	int i ,cidade,  n_passeio, n_acidentes, soma_carros, media_carros, soma_acidentes, media_acidentes, c_acidentes, cidade_menor, cidade_maior, menor_i, maior_i;
	
	soma_acidentes = 0;
	soma_carros = 0;
	menor_i = 10000000;
	maior_i = 0;
	c_acidentes = 0;
	
	for(i=1; i<=5; i++){
		printf("Qual eh a cidade: ");
		scanf("%d%*c",&cidade);
		printf("Qual eh a quantidade de veículos de passeio: ");
		scanf("%d%*c",&n_passeio);
		printf("Qual eh o numeros de acidentes: ");
		scanf("%d%*c",&n_acidentes);
		
		soma_carros = soma_carros + n_passeio;
		
		if(n_acidentes<menor_i){
			cidade_menor = cidade;
			menor_i = n_acidentes;
		}
		
		if(n_acidentes>maior_i){
			cidade_maior = cidade;
			maior_i = n_acidentes;
		}
		
		if(n_passeio<2000){
			c_acidentes = c_acidentes + 1;
			soma_acidentes = soma_acidentes + n_acidentes;
		}
	}
	
	media_carros = soma_carros / 5;
	media_acidentes = soma_acidentes / c_acidentes;
	
	printf("A cidade %d tem o menor indice de acidentes de: %d acidentes \n", cidade_menor, menor_i);
	printf("A cidade %d tem o maior indice de acidentes de: %d acidentes \n", cidade_maior, maior_i);
	printf("A media de carros eh: %d \n", media_carros);
	printf("A media de acidentes em cidades menores que 2000 carros eh: %d acidentes", media_acidentes);
}