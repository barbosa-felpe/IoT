#include <stdlib.h>
#include <stdio.h>

void sub_rotina3(int seg_totais, int *hrs, int *min, int *seg ){
	
	*hrs = seg_totais / 3600;
	
	int resto = seg_totais % 3600;
	
	*min = resto / 60;
	
	*seg = resto % 60;

}