#include <stdlib.h>
#include <stdio.h>
#include "C:\Users\felipe_barbosa153\Desktop\IoT\Sub-rotinas\03/rotina.h"

int main(){
	int seg_totais, seg, min, hrs;
	
	printf("Digite os segundos totais: ");
	scanf("%d%*c", &seg_totais);
	
	sub_rotina3(seg_totais, &hrs, &min, &seg);
	
	printf("\n%d segundo(s) equivale(m) a %d hora(s), %d minuto(s) e %d segundo(s).", seg_totais, hrs, min, seg);
}