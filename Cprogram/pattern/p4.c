#include<stdio.h>
main(){
	int i,j;
	for(j=1;j<=10;j++){
		for(i=1;i<=5;i++){
		printf("\t %d*%d=%d",i,j,j*i);
		}
		printf("\n");
	}

}
