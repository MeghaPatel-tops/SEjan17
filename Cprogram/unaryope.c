#include<stdio.h>
main(){
	int x=10,y,z;
	y=x++;//post increament
	//post iccraement first x original value assign to y
	//then x increment by itsself
	z=++x;
	//pre increment
	//first variable increment by itsself 
	//then assign to other variable
	printf("\n y=%d x=%d z=%d",y,x,z);
}
