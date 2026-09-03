#include <stdlib.h>
#include <stdio.h>
#include "C:\Users\felipe_barbosa153\Desktop\IoT\Sub-rotinas\02\rotina.h"

int main(){
	int num1, num2, res;
	
	printf("Digite o numero 1: ");
	scanf("%d%*c", &num1);
	
	printf("Digite o numero 2: ");
	scanf("%d%*c", &num2);
	
	res = sub_rotina2(num1, num2);
	
	printf("A SOMA DE TODOS OS NUMEROS INTEIROS ENTRE %d e %d = %d", num1, num2, res);
}