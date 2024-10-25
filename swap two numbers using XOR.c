#include<stdio.h>
int main()
{
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	a=a^b;
	b=b^a;
	a=a^b;
	printf("\nNEW a=%d \nNEW b=%d",a,b);
	return 0;
}
