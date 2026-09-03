#include <stdio.h>
#include "C:\Users\felipe_barbosa153\Desktop\IoT\Sub-rotinas/rotinas.h"

int main(){
	int num1, num2, res;
	sub_rotina1();
	sub_rotina2();
	
	printf("digite um numero: ");
	scanf("%d%*c", &num1);
	printf("Digite outro numero: ");
	scanf("%d%*c", &num2);
	res = sub_rotina3(num1, num2);
	printf("resultado = %d", res);
	getchar();
	return 0;
}