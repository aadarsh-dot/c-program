#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   while(1)
   {
   	srand(time(NULL));
    int random=(rand()%10)+1;
    int n;
    printf("enter the number between 1 and 10 : ");
    scanf("%d",&n);
    if(n==random)
    {
    	printf(" %d is same as %d",n,random);
	}
	else
	{
		printf("%d not same as %d",n,random);
	}
	int a;
	printf("\ndo you want to continue. \n if yes type 1 or else type 2");
	scanf("%d",&a);
	if(a==2)
	{
		break;
	}
   } 
   return 0;
}
  


             


