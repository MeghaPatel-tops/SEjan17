#include<stdio.h>
main(){
	int start,end,i,ch;
	printf("\n press 1 for forward loop .\n press2 for backward loop");
	printf("\n enter starting and ending value:");
	scanf("%d %d",&start,&end);
	printf("\n Enter your choice");
	scanf("%d",&ch);
	switch(ch){
		case 1:
				for(i=start;i<=end;i++){
				printf("\n i=%d",i);
			}
		break;
		case 2:
				for(i=end;i>=start;i--){
				printf("\n i=%d",i);
			}
		break;
		default:
			printf("\n wrong choice:");
		break;			
	}		
}
