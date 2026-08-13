#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	
	if(getchar() == 'p')
		printf("Você digitou P");
	else
		printf("Você não digitou ");
}