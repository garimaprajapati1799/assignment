#include<stdio.h>
int main ()
{
	char str[100];
	int i,wordcount=0,maxWordLen=0,count=0;
	printf("\nEnter the string : ");
	gets(str);
	int len=strlen(str);
	printf("\nlength of the string is :%d",len);
    for(i=0;i<=len;i++)
    {   
    
    	if(str[i]==' ' || str[i]=='\0')
    	{
    		wordcount++;
    		if(maxWordLen<count)
    		{
    			maxWordLen=count;
    		
			}
			count=0;
			
		}
		else
		{ count++;
		}
		
	}
	printf("\nThe total words in the string are : %d",wordcount);
	printf("\nThe length of longest word is %d",maxWordLen);
return 0;	
}
