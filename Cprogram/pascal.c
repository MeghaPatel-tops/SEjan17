#include<stdio.h>
main(){
	int i,j,c=1,k;
	for(i=0;i<5;i++){
		for(k=5;k>=i;k--){
			printf("-");
		}
		for(j=0;j<=i;j++){
			if(j==0 || i==0){
				c=1;		
			}
			else{
				 c=c*(i-j+1)/j;
				 		
			}
			printf(" %d",c);
		}
		printf("\n");
	}
}
