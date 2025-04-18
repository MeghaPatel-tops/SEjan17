#include<stdio.h>
main(){
	int a[5];
	int i,sum=0;
	for(i=0;i<5;i++){
		printf("\n Enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		sum+=a[i];
		printf("\na[%d]=%d",i,a[i]);
		
	}
	printf("\n sum=%d",sum);
}
