#include<stdio.h>
#include<string.h>
main()
{
	char s1[100],s2[100],s3[100],n1,n2,res;
	printf("Enter Two String :\n");
	gets(s1);
	gets(s2);
	n1=strlen(s1); n2=strlen(s2);
	res=strcmp(s1,s2);
	strcat(s1,s2);
	strcpy(s3,s1);
	strrev(s3);
	printf("The String Comparison : %d",res);
	printf("\nThe Length Of The String : %d & %d",n1,n2);
	printf("\nThe Concated String : %s",s1);
	printf("\nThe Copied & Reversed String : %s",s3);
}
