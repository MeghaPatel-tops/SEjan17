#include<stdio.h>
main(){
	int a,b,c;
	float ans;
	printf("\n enter the value of a and b:");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("\n addition=%d",c);
	c=a-b;
	printf("\n sub=%d",c);
	c=a*b;
	printf("\n mul=%d",c);
	ans=a/b;
	printf("\n div=%f",ans);
}
