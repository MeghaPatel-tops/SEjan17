#include<stdio.h>
/*
else if ladder
if(cond1){
}
else if(cond2){
}
else if(cond3){
}
else{
}
*/
main(){
	int x,y;
	printf("\n enter the value of x and y");
	scanf("%d %d",&x,&y);
	if(x >0 && y>0){
		printf("\n first");
	}
	else if(x<0 && y>0){
		printf("\n Sec");
	}
	else if(x<0 && y<0){
		printf("\n third");
	}
	else if(x>0 && y<0){
		printf("\n forth");
	}
	else {
		printf("\n center line");
	}
}
