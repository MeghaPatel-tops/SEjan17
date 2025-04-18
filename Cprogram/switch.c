#include<stdio.h>
/*
switch(choice){
	case 1:
		//block
	break;
	case 2:
		//block
	break
	default:
		//block
	break;		
}
*/
main(){
	int a,b,c,ch;
	printf("\n press 1 for addition");
	printf("\n press 2 for sub");
	printf("\n press 3 for mul");
	printf("\n press 4 for div");
	printf("\n enter the value of and b:");
	scanf("%d %d",&a,&b);
	printf("\n enter your choice");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			c=a+b;
			printf("\n add=%d",c);
		break;
		case 2:
			c=a-b;
			printf("\n sub=%d",c);
		break;
		case 3:
			c=a*b;
			printf("\n mul=%d",c);
		break;
		case 4:
			c=a/b;
			printf("\n div=%d",c);
		break;
		default:
			printf("\n Wrong choice:");
		break;					
	}
}
