#include <stdlib.h>
#include <stdio.h>
#include "C:\Users\felipe_barbosa153\Desktop\IoT\Sub-rotinas\04/rotina.h"

int main(){
	int i, num[4], maior, menor;
	
	for(i=0;i < 4; i++){
		printf("\nDigite o %d numero: ", i);
		scanf("%d%*c", &num[i]);

	}
	
	sub_rotina4(num, &maior, &menor);
	
	printf("\nO maior numero é: %d", maior);
	printf("\nO menor numero é: %d", menor);
}