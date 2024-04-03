#include<stdio.h>
int main()
{
	int i,j,square;
	
	printf("Below Pattern of Nested Loop.....\n\n");
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			square = i * i;
			printf("%d ",square);
		}
		printf("\n");
	}
}
