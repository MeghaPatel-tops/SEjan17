#include<stdio.h>
/*
nested if statement
  if(cond1){
  	if(cond2){
  		//block1
  	}
  	else{
  		//block
  	}
	}
*/
main(){
	int maths,phy,chem,total,subtotal;
	printf("\n Enter the maths phy  chem marks");
	scanf("%d %d %d",&maths,&phy,&chem);//66 56 51
	if(maths >=65 && phy>=55 && chem >=50){//173 ==107
		total = maths+phy+chem;
		subtotal=maths+phy;
		if(total>=190 || subtotal>=140){
			printf("\n Eligible for admision");
		}
		else{
				printf("\n inner Not Eligible for admision");
		}
	}
	else{
		printf("\n Not Eligible for admision");
	}
	
}	
