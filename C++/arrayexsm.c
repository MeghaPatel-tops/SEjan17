#include<stdio.h>
//data type arrayname[size]
main(){
	int i,j,temp;
	int a[2][2],b[2][2],c[2][2];	
	printf("\n enter Matrix value");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Enter a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
	printf("\n enter Matrix value");
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Enter a[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n");	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t c[%d][%d]=%d",i,j,c[i][j]);
		}
		printf("\n");
	}
	
}
