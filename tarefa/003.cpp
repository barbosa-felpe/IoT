#include <stdio.h>
#include <locale.h>

/*
Faça um programa que receba o valor de um depósito e o 
valor da taxa de juros, calcule e mostre o valor do 
rendimento e o valor total depois do rendimento.
*/

int main(){
    setlocale(LC_ALL, "Portuguese")
    
    float rendimento, salario, taxa;
    
    printf("Digite o valor do depósito: \n");
    scanf("%f%*c", &salario);
    
    printf("Digite o valor da taxa de juros: \n");
    scanf("%f%*c", &taxa);
    
    rendimento = salario + salario * taxa;
    
    printf("O valor do depositado foi: %.2f", salario);
    printf("O valor depositado rendido é: %.2f", rendimento);
        
}
