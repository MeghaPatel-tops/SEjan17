#include<stdio.h>
main(){
	FILE* fp;
	char str[20];
	fp= fopen("studentlist.txt","w");
	fprintf(fp,"%s","hello student");
	fclose(fp);
	
	//======Reading file======
	fp = fopen("studentlist.txt","r");
	//fscanf(fp,"%s",str);
	fgets(str,20,fp);
	printf("\n str=%s",str);
	fclose(fp);
}
