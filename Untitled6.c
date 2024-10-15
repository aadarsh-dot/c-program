#include<stdio.h>
int main()
{
	int i=0;
	while(1)
	{
		printf("before increment i=%d\n",i);
		if(++i==3)
		{
			printf("i=%d\n",i);
			break;
		}
	}
	printf("final i=%d\n",i);
	return 0;
}
