#include<stdio.h>
main(){
	int num;
	printf("\n enter num");
	scanf("%d",&num);
	if(num%2==0){
		goto Even;
	}
	else{
		goto Odd;
	}
	
	Odd:{
		printf("\n Num is odd");
		return 0;
	}
	Even:{
		printf("\n Num is Even");
		return 0;
	}
}
