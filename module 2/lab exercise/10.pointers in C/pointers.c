#include<stdio.h>
int main()
{
int a=15;
printf("\nThe original value of a is : %d",a);
int *ptr=&a;
printf("\nEnter the new value of a : ");
scanf("%d",&a);
printf("The new value of a is : %d",*ptr);
return 0;
}
