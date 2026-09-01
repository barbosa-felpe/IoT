#include <stdio.h>
#include <string.h>
#include <locale.h>

int soma(int a, int b){
	return a + b;
}

int main(){
	int a, b, s;
	
	printf("\nDigite o primeiro: ");
	scanf("%d%*c", &a);
	printf("\nDigite o segundo: ");
	scanf("%d%*c", &b);
	
	s = soma(a ,b);
	printf("\nSoma = %d", s);
	getchar();
	return 0;
}