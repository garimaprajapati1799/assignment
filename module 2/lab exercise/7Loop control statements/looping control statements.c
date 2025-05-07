#include<stdio.h>
int main()
{
	int i=1,num;
	while(i>0)
	{
		if(i==3)
		{
			i++;
			continue;
		}
		printf("%d ",i);
		if(i==5)
		{
			break;
		}
		i++;
	}
	return 0;
}
