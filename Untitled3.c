#include<stdio.h>
int main()
{
	int n,a;
	printf("enter age");
	scanf("%d",&n);
	if(n>=18)
	{
		printf("enter opt 1 or 2 or 3 = ");
		scanf("%d",&a);
		switch(a)
		{
			case1:
				printf("opt a");
				break;
			case 2:
				printf("opt b");
				break;
			case 3:
				printf("opt c");
				break;
			default:
				printf("neither 1 or 2 or 3");
				break;
		}
    }
	else
	{
		printf("not elkgible");
	}
		return 0;
	
}
