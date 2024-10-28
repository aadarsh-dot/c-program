#include<stdio.h>
void main()
{
	char n;
	printf("Enter character");
	scanf("%c",&n);
	if(n=="a"||"e"||"i"||"o"||"u"||"A"||"E"||"I"||"O"||"U")
	{
		printf("IT IS VOWEL");
	}
	else
	{
		printf("charcter not found");
	}
	return 0 ;
}
