#include<stdio.h>
#include<string.h>
 
struct subject
{ 
int code ;
char sname[20];
};
union Student{
	int enroll;
	char name[20];
	struct subject sub ;
};
main(){
	union Student s1,s2;
	printf("\n Enter enroll name ");
	scanf("%d %s",&s1.enroll,s1.name);
	printf("\n subject code and subject name ");
	scanf("%d %s",&s1.sub.code,s1.sub.sname);

	printf("\n enroll=%d name=%s code=%d subject=%s",s1.enroll,s1.name,s1.sub.code,s1.sub.sname);
	
}
