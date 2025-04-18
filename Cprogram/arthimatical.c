#include<stdio.h>
main(){
	int a,b,ans,x=10;
	printf("\n enter the value of a and b:");
	scanf("%d %d",&a,&b);
	ans = a%b;
	printf("\n reminder=%d",ans);
	x++;//increment by 1 
	printf("\n x=%d",x);
}
