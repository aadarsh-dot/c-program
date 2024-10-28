#include<stdio.h>
int main()
{
	int p,r,t;
	printf("enter principal amt");
	scanf("%d",&p);
	printf("enter rate");
	scanf("%d",&r);
	printf("enter time");
	scanf("%d",&t);
	printf("simple interest = %d",p*r*t/100);
	return 0;
	
}

