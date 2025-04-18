#include<stdio.h>
int x=10;//global scope
main(){
	
	int x=20;//inside main
	{
		
	int x=10;//within block	//local scope
	printf("\n x=%d",x);
	}
	printf("\n x=%d",x);
}
