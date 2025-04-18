#include<stdio.h>
#include<string.h>
main(){
	char str[20],str2[20],str3[20];
	printf("\n enter str");
	gets(str);
	printf("\n enter str");
	gets(str2);
	printf("\n len of string=%d",strlen("Tops"));
	strupr(str);
	printf("\n strupr=%s",str);
	strlwr(str);
	printf("\n strupr=%s",str);
	printf("\n strcmp=%d",strcmp(str,str2));
	strcat(str,str2);
	printf("\n strupr=%s",str);
	strcpy(str3,str);
	printf("\n str3=%s",str3);
	
	
}
