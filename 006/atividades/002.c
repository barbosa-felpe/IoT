#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[18], mat[3][6], i,j,k, cont;
	
	cont=0;
	
	for(i=0;i<18;i++){
		printf("Digita o numero %d do vetor: \n", i);
		scanf("%d%*c", &vet[i]);
	}
	
	
	for(j=0;j<3;j++){
		for(k=0;k<6;k++){
			
			mat[j][k] = vet[cont];
			cont++;
			
		}
	}
	
	for(i=0;i<3;i++){
		
		printf("\n");
		for(j=0;j<6;j++){
			printf(" %d ", mat[i][j] );
		}
	}
}
