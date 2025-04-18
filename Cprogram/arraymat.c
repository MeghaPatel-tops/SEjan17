#include<stdio.h>
int i,j;
void getMatrix(int a[3][3]){
	printf("\n enter matrix value:");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\n Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void printMatrix(int a[3][3]){
	printf("\n ======== matrix =========\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}

main(){
	int a[3][3],b[3][3],c[3][3];
	getMatrix(a);
	getMatrix(b);
	printMatrix(a);
	printMatrix(b);
	printf("\n addition of two matrix ========");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printMatrix(c);
	
}
