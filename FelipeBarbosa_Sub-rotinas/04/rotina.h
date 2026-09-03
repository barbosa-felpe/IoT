#include <stdlib.h>
#include <stdio.h>

void sub_rotina4(int num[], int *maior, int *menor){
	
	int i, maior_num, menor_num;
	
	maior_num = 0;
	menor_num = num[0];
	
	for(i = 0; i < 4; i++){
		if(maior_num < num[i]){
			maior_num = num[i];
		}
		
		if(menor_num > num[i]){
			menor_num = num[i];
		}
	}
	
	*maior = maior_num;
	*menor = menor_num;
}