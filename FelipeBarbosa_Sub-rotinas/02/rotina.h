#include <stdlib.h>
#include <stdio.h>

int sub_rotina2(int a, int b){
	int i, res;
	res = 0;
	if(a<b || a==b){
		return 0;
	}else{
		for(i=a;i <= b;i++){
		res = res + i;
	}
}
	
	
	return res;
}