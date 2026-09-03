#include <stdio.h>
#include <string.h>

void sub_rotina1(){
	printf("MOSTRANDO UMA MENSAGEM");
}

void sub_rotina2(){
	int a, b, c;
	printf("Digite o valor de A: ");
	scanf("%d%*c", &a);
	printf("Digite o valor de B: ");
	scanf("%d%*c", &b);
	
	c = a - b;
	
	printf("Resultado = %d", c);
}

int sub_rotina3(int x, int y){
	int res;
	res = x * y;
	return res;
}