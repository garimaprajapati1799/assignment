#include<stdio.h>
struct Student
{
	char name[25];
	int roll_number;
	int marks;
} s[100];
int i;
int main()
{	struct Student s1,s2,s3;
    strcpy(s1.name,"Aman");//whenever we want to print a string we use this strcpy function
	s1.roll_number= 101;
	s1.marks = 90;
	printf("\nName =%s",s1.name);
	printf("\nroll number =%d",s1.roll_number);
	printf("\nMarks =%d",s1.marks);
	printf("\n");
	strcpy(s2.name,"Garima");//whenever we want to print a string we use this strcpy function
	s2.roll_number= 102;
	s2.marks = 89;
	printf("\nName =%s",s2.name);
	printf("\nroll number =%d",s2.roll_number);
	printf("\nMarks =%d",s2.marks);
	printf("\n");
	strcpy(s3.name,"helly");//whenever we want to print a string we use this strcpy function
	s3.roll_number= 103;
	s3.marks = 91;
	printf("\nName =%s",s3.name);
	printf("\nroll number =%d",s3.roll_number);
	printf("\nMarks =%d",s3.marks);
	printf("\n");
	
	return 0;
}
