#include<stdio.h>
int main()
{
	int a,b,max;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	max=(a+b+abs(a-b))/2;
	printf("maximum of %d and %d is %d",a,b,max);
	return 0;
}
