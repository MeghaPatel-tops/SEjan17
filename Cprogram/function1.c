#include<stdio.h>
void display();//function declartion
void add(int x,int y);
main(){
	display();//function calling
	display();	
	add(100,340);
	add(12,56);
}
void display(){
	printf("\n hello world");//Function Definition
}
void add(int x,int y){
	int c=x+y;
	printf("\n addition of %d and %d=%d",x,y,c);
}
