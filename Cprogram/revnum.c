#include<stdio.h>
main(){
	int num,i,rem,rev=0;
	printf("\n enter the num");
	scanf("%d",&num);//init
	while(num != 0){
		rem=num %10;
		rev=rev*10+rem;
		num = num/10;
	}
	printf("\n Rev num=%d",rev);//

}
