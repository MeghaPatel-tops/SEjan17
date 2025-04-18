#include<stdio.h>
//with return type with parmeter
int square(int l){
	int result;
	result = l*l;
	return result;
}
//with return without parmeter
float areaOfCircle(){
	int r;
	float area;
	printf("\n enter radius");
	scanf("%d",&r);
	area = 3.14*r*r;
	return area;
}
//without return type without parameter
void display(){
	printf("\n hello world");//Function Definition
}
//without return type with parameter
void add(int x,int y){
	int c=x+y;
	printf("\n addition of %d and %d=%d",x,y,c);
}
main(){
	int l=90,ans;
	ans=square(l);
	printf("\n square of %d=%d",l,ans);
	printf("\n area of circle =%f",areaOfCircle());
	display();
	add(1200,23);
}
