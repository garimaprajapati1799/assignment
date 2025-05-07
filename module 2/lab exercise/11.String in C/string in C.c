#include<stdio.h>
int main()
{
	char str1[100],str2[100];
	printf("Enter the string 1 : ");
	gets(str1);
	printf("Enter the string 2 : ");
    gets(str2);
	
    printf("\nString before applying the function :%s",str1);
    printf("\nString before applying the function :%s",str2);
    
    strcat(str1,str2);

    printf("\nString after applying the concated function :%s",str1);
    printf("\nLength of concated string : %d",strlen(str1));
	return 0;
}
