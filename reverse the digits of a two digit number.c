#include<stdio.h>
int main()
{
	int n,rev;
	printf("enter two digit number :");
	scanf("%d",&n);
	rev=(n%10)*10+(n/10);
	printf("reversed number is %d",rev);
	return 0;
}
