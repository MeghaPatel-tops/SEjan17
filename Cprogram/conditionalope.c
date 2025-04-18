#include<stdio.h>
main(){
	int num,a=10,b=10;
	printf("\n Enter the num:");
	scanf("%d",&num);
	(num > 0)?printf("\n Num is positive"):printf("\n Num is negative");
	(num%2==0)?printf("\n Num is even"):printf("\n Num is odd");
	(a==b)?printf("\n both are equal"):printf("\n both are not equal");
}
