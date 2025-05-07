#include<stdio.h>
struct employee
{
	int id;
	char name[25];
}e[100];
int num,choice,i;
int index=0;
int main()
{
	up:
	printf("\n1.add data");
	printf("\n2.display all");
	printf("\nEnter the choice : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			add_data();
			break;
		case 2:
		    display_data();
			break;	
	}
	char temp;
	printf("\nPress 'Y' to continue and 'N' to exit");
	scanf(" %c",&temp);
	if(temp=='Y' || temp=='y')
	{
		goto up;
	}
return 0;	
}
void add_data();
void add_data()
{
	FILE *fp;
	fp=fopen("employee.txt","a");
	printf("\nEnter the number of employee details to be enter");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\nEnter the details of employee %d",i+1);
		printf("\nId : ");
		scanf("%d",&e[index].id);
		fprintf(fp,"%d\t",e[index].id);
		printf("\nName : ");
		scanf("%s",&e[index].name);
		fprintf(fp,"%s\t",e[index].name);
		printf("\n");
		fprintf(fp,"\n");
		index++;		
	}
	fclose(fp);
}
void display_data();
void display_data()
{
	FILE *fp;
	fp=fopen("employee.txt","r");
	char str[100];
	printf("\nId      name");
	printf("\n-------------");
	while(fgets(str,sizeof(str),fp))
	{
		printf("\n%s",str);
	}
	fclose(fp);
}
