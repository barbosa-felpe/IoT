#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota1, nota2, media, soma_classe, media_classe;
	int i, reprovado, exame, aprovado;
		
	i = 1;
	reprovado = 0;
	aprovado = 0;
	exame = 0;
	
	while(i <= 6){
		printf("Digite a 1 nota: \n");
		scanf("%f", &nota1);
		printf("Digite a 2 nota: \n");
		scanf("%f", &nota2);
		
		media = (nota1 + nota2) / 2;
		
		printf("A nota do aluno %d foi: %.2f \n", i, media);
		
		if(media <= 3)
		reprovado++;
		
		if(media > 3 && media < 7)
		exame++;
		
		if(media >= 7)
		aprovado++;
		
		soma_classe = soma_classe + media;
		
		i++;
	}
	
	media_classe = soma_classe / 6;
	
	printf("Total de alunos aprovados: %d \n", aprovado);
	printf("Total de alunos em exame: %d \n", exame);
	printf("Total de alunos reprovados: %d \n", reprovado);
	printf("A media da sala foi de: %.2f \n", media_classe);
	
	
}