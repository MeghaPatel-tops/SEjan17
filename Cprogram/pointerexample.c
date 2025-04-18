#include<stdio.h>
main(){
	int a=10;
	int *p;
	p=&a;
	printf("\n value of ptr=%d and address=%p",*p,p);
	*p=90;
	printf("\n a=%d",a);
}
