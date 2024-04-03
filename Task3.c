#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter the String : ");
	gets(str);
	
	char rev;
	rev=strrev(str);
	
	printf("Reverse String is : %s",rev);
}
