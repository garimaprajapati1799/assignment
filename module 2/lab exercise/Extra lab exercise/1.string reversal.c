#include<stdio.h>
void string_rev(char arr[]);
int main()
{
	char str[100];
	printf("\nEnter the string : ");
	gets(str);
	string_rev(str); 
	return 0;
} 
void string_rev(char arr[])
{
	int len=0,i;
	for(i=0;arr[i]!='\0';i++)
	{
		len++;
	}
	char temp;
	printf("\nLength of the string is : %d",len);
	for(i=0;i<len/2;i++)
	{
		 temp=arr[i];
		arr[i]=arr[len-i-1];
		arr[len-i-1]=temp;
	}
	printf("\nString after reversed is %s",arr);

}
