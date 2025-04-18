#include<stdio.h>
main(){
	char str1[20],str2[20];
	int i=0,j=0,flag=0;
	printf("\n enter str");
	//scanf("%s",str1);
	gets(str1);
	printf("\n str=");
	puts(str1);
	
	while(str1[i] != '\0'){
		printf("\n str1[%d]=%c",i,str1[i]);
		i++;
	}
	printf("\n length of str1=%d",i);
	i--;
	while(i >= 0){
		printf("\n %d=%c",i,str1[i]);
		str2[j]=str1[i];
		j++;
		i--;
	}
	printf("\n str2=%s\n",str2);
	i=0;
	while(str1[i]!='\0'){
		if(str1[i]!=str2[i]){
			flag=1;
		}
		i++;
	}
	(flag==0)?printf("yes"):printf("No");
}
