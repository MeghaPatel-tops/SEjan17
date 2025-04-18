#include<stdio.h>
int factFind(int num){
	int f;
	if(num==1){
		return 1;
	}
	else{
		f = num*factFind(num-1);	
	}
	
}
main(){
	printf("\n factorial=%d",factFind(3));
}
