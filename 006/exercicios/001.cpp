#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i, j ,vetor[9], e_primo;
	
	for(i=0; i<9; i++){
		printf("Digite o numero da posicao %d \n", i);
		scanf("%d%*c", &vetor[i]);
		
	}
	
	for(i=0; i<9;i++){
		if(vetor[i] > 1){
			if(vetor[i] != 2){
				for(j = 2; j <= (int)sqrt(vetor[j]); j++){
					if(vetor[j] % j == 0){
						e_primo++;
					}
				}
			}else{
				printf("O numero 2 da posicao %d eh primo \n", i);
			}
		}	
		
		if(e_primo == 0){
			printf("O numero %d da posicao %d eh primo \n", vetor[i], i);
		}
	}
	
}