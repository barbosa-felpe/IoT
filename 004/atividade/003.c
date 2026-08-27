#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int criancas, i, vida, meninos, meninas, vidas_menos, crianca_menos, porc_meninos, porc_meninas, porcento; 
	char sexo;
	
	vidas_menos = 0;
	meninas = 0;
	meninos = 0;
		
	printf("Escreva a quantidade de criancas nascidas no periodo: \n");
	scanf("%d%*c", &criancas);
	
	for(i = 0; i < criancas; i++){
		printf("A crianca é um menino ou menina? (M ou F)");
		scanf("%c%*c", &sexo);
		printf("Qual é o tempo de vida da crianca? (Meses)");
		scanf("%d%*c", &vida);
		
		if(vida < 24)
		vidas_menos++;
		
		if(sexo == 'M')
		meninos++;
		
		if(sexo == 'F')
		meninas++;
		
	}
	
	crianca_menos = vidas_menos * 100 / criancas;
	porc_meninos = meninos * 100 / criancas;
	porc_meninas = meninas * 100 / criancas;
	
	printf("porcentagem de MENINOS mortos: %d%% \n", porc_meninos);
	printf("porcentagem de MENINAS mortas: %d%% \n", porc_meninas);
	printf("porcentagem de criancas que morreram com menos de 24 MESES de vida: %d%%", crianca_menos);
	
	return 0; 
}