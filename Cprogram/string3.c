#include<stdio.h>
main(){
	char str1[20];
	int i=0;
	printf("\n enter str");
	//scanf("%s",str1);
	gets(str1);
	printf("\n str=");
	puts(str1);
	
	while(str1[i] != '\0'){
		i++;
	}
	printf("\n length of str1=%d",i);
}
