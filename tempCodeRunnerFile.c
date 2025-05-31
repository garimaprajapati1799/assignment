#include<stdio.h>
struct Student
{
	int id;
	char name[25];
	float percentage; 
}s[100];
int choice,num,i;
int block=0;
int main()
{
	up:
	printf("\n1 Add data");
	printf("\n2 Display all");
	printf("\nEnter the choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add_data();
		    break;
		case 2:
			display_all();
			break;
			
	}
		char temp;
		printf("\nPress 'Y' to continue or Press 'N' to exit = ");
		scanf(" %c",&temp);
		if(temp=='Y' || temp=='y')
		{
			goto up;
		}
		return 0;
	}
	void add_data()
	{
		FILE *fp;
		fp=fopen("student.txt","a");
		printf("\nEnter the number of students = ");
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			printf("\nEnter the detail of student %d : ",i+1);
			printf("\nid = ");
			scanf("%d",&s[block].id);
		 	fprintf(fp," %d\t",s[block].id);
		 	printf("\nName = ");
		 	scanf("%s",&s[block].name);
		 	fprintf(fp,"%s\t",s[block].name);
		 	printf("\npercentage = ");
		 	scanf("%f",&s[block].percentage);
		 	fprintf(fp,"%.2f\t",s[block].percentage);	
			printf("\n");
		 	fprintf(fp, "\n");
			block++;
		}
		fclose(fp);
	}
	void display_all()
	{
		FILE *fp;
		fp=fopen("student.txt","r");
		char str[100];
			printf("\nThe details of the student is :");
			printf("\nId       Name       Percentage");
			while(fgets(str,sizeof(str),fp))
	     	{
			printf("\n%s",str);
          	}
     	fclose(fp);
	}
