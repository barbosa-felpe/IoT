#include <stdio.h>
#include <stdlib.h>

int main(){
	int x[3][4], i, j, k;
	
	for(k=0;k<12;k++){
		for(i=0;i<3;i++){
			for(j=0;j<4;j++){
				x[i][j] = k;
			}
		}
	}
	
	
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<4;j++){
			printf("%d", x[i][j]);
		}
	}
}