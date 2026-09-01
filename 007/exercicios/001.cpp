#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i, j, vetor[9], e_primo;

    for(i = 0; i < 9; i++){
        printf("Digite o numero da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 9; i++){

        e_primo = 1;

        if(vetor[i] < 2){
            e_primo = 0;
        }
        else{

            for(j = 2; j <= sqrt(vetor[i]); j++){

                if(vetor[i] % j == 0){
                    e_primo = 0;
                    break;
                }
            }
        }
        if(e_primo == 1){
            printf("O numero %d da posicao %d eh primo\n",
                   vetor[i], i);
        }
    }

    return 0;
}
