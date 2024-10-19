#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,x,y;
	printf("enter first point");
	scanf("%d",&a);
	printf("enter second point");
	scanf("%d",&b);
	printf("enter third point");
	scanf("%d",&x);
	printf("enter fourth point");
	scanf("%d",&y);
	printf("distance between a and b=%f",(sqrt(a-b)*(a-b)+(x-y)*(x-y)));
	return 0;
}
