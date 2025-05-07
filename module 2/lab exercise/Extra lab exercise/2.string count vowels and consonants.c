#include<stdio.h>
int main()
{
   char str[100];
   int vowels=0,consonants=0,digits=0,special_characters=0,i;
   printf("\nEnter the string : ");
   gets(str);
   for(i=0;str[i]!='\0';i++)
   {
   	if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
   	{
   		if(str[i]=='a' || str[i]=='A' || str[i]=='I' || str[i]=='i' 
	   || str[i]=='E' || str[i]=='e' || str[i]=='O' || str[i]=='o'
	   ||  str[i]=='U' || str[i]=='u')
	      {
	   	vowels++;
	      }
        else 
	      {
	      	consonants++;
		  }
	}
	else if(str[i]>=48 && str[i]<=57)
	{
		digits++;
	}
    else if((str[i]>=0 && str[i]<=47) || (str[i]>=58 && str[i]<=64) || (str[i]>=91 && str[i]<=96) || (str[i]>=123 && str[i]<=127))
     	{
		special_characters++;
     	}
}


  	printf("\nNumber of vowels : %d",vowels);
   	printf("\nNumber of consonants : %d",consonants);
   	printf("\nNumber of special characters : %d",special_characters);
    printf("\nNumber of digits : %d",digits);
   return 0;
}
