#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, b;
	
	printf("Digite 2 números:");
	scanf("%d %d", &a, &b);
	if(b)
		printf("%f", a/b);
	else
		printf("Não posso dividir");
	
	}
