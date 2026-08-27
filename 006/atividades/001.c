#include <stdio.h>
#include <stdlib.h>

int main(){
	char lojas[8][20], produtos[8][20];
	float precos[8][4];
	int i, j;
	
	for(i=0;i<8;i++){
		printf("Digite o nome da loja %d: \n", i);
		scanf("%s%*c", &lojas[i]);
	}
	
	
	for(i=0;i<4;i++){
		printf("Digite o nome do produto %d: \n", i);
				scanf("%s%*c", &produtos[i]);
		}
	
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("Digite o preco do produto %s na loja %s: \n", produtos[j], lojas[i]);
			scanf("%f*c", &precos[i][j]);
		}
	}
	
	printf("Produto --- Nome da Loja --- Preco \n");
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			if(precos[i][j] < 60){
				printf("%s --- %s --- R$%.2f \n", produtos[j], lojas[i], precos[i][j]);
			}
		}
	}
}