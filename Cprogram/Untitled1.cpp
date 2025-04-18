#include<stdio.h>
main(){
	int num;
	printf("\n enter num");
	scanf("%d",&num);
	if(num%2==0){
		goto Even;
	}
	else{
		goto odd;
	}
	
	odd:{
		printf("\n Num is odd");
	}
	Even:{
		printf("\n Num is Even");
	}
}
