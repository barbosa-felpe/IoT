#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	double salario, porcentagem;
	int ano, ano_atual;
	
	ano=2020;
	porcentagem = 0.015;
	salario = 1000.00;
	
	printf("Digite até que ano o usuário receberá aumento: \n");
	scanf("%d%*c", &ano_atual);
	
	while(ano < ano_atual){
		salario = salario + salario * porcentagem;
		
		porcentagem = porcentagem * 2;
		ano++;
	}
	
//	for(ano=2018;ano < ano_atual; ano++){
//		salario = salario + salario * porcentagem;
//		
//		porcentagem = porcentagem * 2;
//	}
	
	printf("O salário atual é de: %.2f", salario);
}