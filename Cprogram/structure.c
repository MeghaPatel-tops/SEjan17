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
	struct Student s1,s2;
	printf("\n Enter enroll name subject");
	scanf("%d %s %s",&s1.enroll,s1.name,s1.subject);

	printf("\n enroll=%d name=%s subject=%s",s1.enroll,s1.name,s1.subject);
	
}
