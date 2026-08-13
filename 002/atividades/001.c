#include <stdio.h>
#include <stdlib.h>

main(){
	int a, b, c, maior;
	printf("Digite 3 numeros diferentes: \n");
	scanf("%d %d %d", &a, &b, &c);
	
	maior = 0;
	
	if(a<maior){
		maior = a;
	}else{
		maior = a;
		if (b>maior){
			maior = b;		
		}else{
			maior = b;
			if (c>maior){
				maior = b;	
			}else{
				maior = c;
			}
		}
	}
	
	printf("O maior numero é o %d", maior);
}