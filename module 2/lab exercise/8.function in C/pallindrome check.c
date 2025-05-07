#include<stdio.h>
void pallindrome(int n);
void pallindrome(int n)
{
	int temp=n,rev=0,rem;
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
	}
	if(rev==temp)
	{
		printf("\n%d is a pallindrome number",temp);
	}
	else{
		printf("\n%d is not a pallindrome number",temp);
	}
	return 0;
}
void string_check();
void string_check()
{
	char str[100],copy[100];
	int i;
	printf("\nEnter the string : ");
	scanf("%s",&str);
	strcpy(copy,str);
	char temp;
	int len=strlen(str);
	for(i=0;i<=len/2;i++)
	{
		char temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
	int result=strcmp(str,copy);
	if(result==0)
	{
		printf("\nString is a pallindrome ");
	}
	else
	{
		printf("\nString is not a pallindrome");
	}
	
	return result;
}
int main()
{
	int num;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	pallindrome(num);
    string_check(); 
   
return 0;
}
