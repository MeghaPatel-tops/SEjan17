#include<stdio.h>
#include<string.h>
/*
struct structurename {
	//member
}
*/
struct Student{
	int enroll;
	char name[20];
	char subject[20];
};
main(){
	struct Student s[3];
	int i;
	for(i=0;i<3;i++){
			printf("\n Enter enroll name subject");
			scanf("%d %s %s",&s[i].enroll,s[i].name,s[i].subject);
	}

	for(i=0;i<3;i++){
		printf("\n enroll=%d name=%s subject=%s",s[i].enroll,s[i].name,s[i].subject);
	}
	
}
