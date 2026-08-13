#include <stdio.h>
#include <stdlib.h>

main() {
	int dia, mes;
	
	printf("Digite seu dia e mês de nascimento:");
	scanf("%d %d", &dia, &mes);
	
	if((mes == 2) && (dia > 28))
		printf("Fevereiro tem somente 28 dias");
	else if(mes <= 7){
		if((mes % 2 == 1) && (dia > 31))
		printf("O mês %c não tem mais que 31 dias", mes);
		else
		printf("O mês %c não tem mais que 30 dias", mes);
	else{
		if((mes % 2 == 0) && (dia > 31))
		printf("O mês %c não tem mais que 31 dias", mes);
		else
		printf("O mês %c não tem mais que 30 dias", mes);
	}
	
	switch(dia, mes){
		case(dia >= 1 && < 2){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
		case(){
			break;
		}
	}
}