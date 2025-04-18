#include<stdio.h>
main(){
	//datatype arrayname[size][size]
	int a[2][3]={1,2,3,4,5,6};
	int i,j;
	
	//00 01
	//10 11
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("\t a[%d][%d]=%d",i,j,a[i][j]);
		}
		printf("\n");
	}
	
}
