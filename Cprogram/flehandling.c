#include<stdio.h>
main(){
	int i,m1,m2,m3;
	char name[30],email[30];
	FILE* fp;
	char ch,html[200];
	fp= fopen("marksheet1.csv","w");
	fprintf(fp,"%s","No,Name,Email,marks1,marks2,marks3");
	for(i=1;i<=3;i++){
		printf("\n Enter name and email");
		scanf("%s %s",name,email);
		printf("\n Enter m1 m2 m3 marks");
		scanf("%d %d %d",&m1,&m2,&m3);
		fprintf(fp,"\n%d,%s,%s,%d,%d,%d",i,name,email,m1,m2,m3);
	}
	fclose(fp);
	
	fp= fopen("marksheet1.csv","r");
	while((ch=fgetc(fp))!=EOF){
		if(ch==','){
			printf("\t");
			
		}
		putchar(ch);
	}
	fclose(fp);
}
