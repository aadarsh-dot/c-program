#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number");
	scanf("%d",&n);
	i=2;
	do
	{
		printf("%d\t",i);
		i=i+2;
	}while(i<=n);
	return 0;
}