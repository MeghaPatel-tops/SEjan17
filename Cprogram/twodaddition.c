#include<stdio.h>
int i,j;
void getArray(int a[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void printArray(int a[2][2]){
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}
main(){
	int a[2][2],b[2][2],c[2][2];
	getArray(a);
	getArray(b);
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n==================\n");
	printArray(a);
	printf("\n==================\n");
	printArray(b);
	printf("\n==================\n");
	printArray(c);
	
	
}
