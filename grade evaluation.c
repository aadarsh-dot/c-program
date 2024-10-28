#include<stdio.h>
int main()
{
	int c;
	printf("enter number");
	scanf("%d",&c);
	if(c<=25)
	{
		printf("D");
	}
	else if(c<=50)
	{
		printf("C");
	}
	else if(c<=75)
	{
		printf("B");
	}
	else if(c<=100)
	{
		printf("A");
	}
	return 0;
	
}
