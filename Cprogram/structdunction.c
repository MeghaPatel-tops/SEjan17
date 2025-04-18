#include<stdio.h>
#include<string.h>

struct Student{
	int enroll;
	char name[20];
	char subject[20];
};
void getData(struct Student* s1){
	printf("\n Enter enroll name subject");
	scanf("%d %s %s",&s1->enroll,s1->name,s1->subject);
}
void display(struct Student* s1){
	printf("\n enroll=%d name=%s subject=%s",s1->enroll,s1->name,s1->subject);
}
main(){
	struct Student s1,s2;
	getData(&s1);
	display(&s1);	
	getData(&s2);
	display(&s2);
	
}

