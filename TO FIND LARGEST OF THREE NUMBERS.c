#include<stdio.h>
int main()
{
	int a,b,c,l;
	printf("enter value for a");
	scanf("%d",&a);
	printf("enter value for b");
	scanf("%d",&b);
	printf("enter the value for c");
	scanf("%d",&c);
	if(a==b && b==c)
	{
		printf("all values r same");
		return 0;
	}
	else if(a==b)
	{
		printf("values of a and b are same\n");
	}
	else if(a==c)
	{
		printf("values of a and c are same\n");
	}
	else if(b==c)
	{
		printf("values of b and c are same\n");
	}
	l=(a>b)?(a>c?a:c):(b>c?b:c);
	printf("largest number is %d",l);
	return 0;	
}
