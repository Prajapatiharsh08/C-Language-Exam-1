#include<stdio.h>
int main()
{
	FILE *ptr;
	ptr=fopen(data.txt,"r");
	
	if(ptr==NULL)
	{
		printf("File Does not Exists...");
	}
	
}
