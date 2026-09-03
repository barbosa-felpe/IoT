#include <stdlib.h>
#include <stdio.h>
#include "C:\Users\felipe_barbosa153\Desktop\IoT\Sub-rotinas\01\rotina.h"

int main(){
	int num, res;
	
	printf("Digite um numero: ");
	scanf("%d%*c", &num);	
	res = sub_rotina1(num);
	
	if(res == 1){
		printf("Numero Positivo");
	}else{
		printf("Numero Negativo");
	}
		
	
}