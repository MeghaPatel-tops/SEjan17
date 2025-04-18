#include<stdio.h>
main(){
	int num,rem,n1,n2,num1=0;
	printf("\n enter num");
	scanf("%d",&num);
	while(num !=0){
		rem= num%2;
		printf("\n division=%d",rem);
		num1=num1*10+rem;
		num=num/2;
	}
	printf("\n binary=%d",num1);
}
