#include <stdio.h>

int main() 
{
	int a, b;
	
	printf("a = ");
	scanf("%i", &a);
	printf("b = ");
	scanf("%i", &b);
	
	if (a > b)
	{
		printf("A more");
	}
	else if (a == b)
	{
		printf("A equals B");
	}
	else 
	{
		printf("B less");
	}
}
