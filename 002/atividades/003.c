#include <stdio.h>
#include <stdlib.h>

main(){
	int a, b;
	
	printf("Digite dois numeros \n");
	scanf("%d %d", &a, &b);
	
	if(a>b)
	printf("A ordem dos números é: %d %d", b, a);
	else if(b>a)
	printf("A ordem dos números é: %d %d", a, b);
	else if(a==b)
	printf("Os numeros são iguais");
}