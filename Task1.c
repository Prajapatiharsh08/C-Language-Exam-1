#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the Character : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("%c is Vowel...",ch);
			break;
			
		default :
			printf("Others are Consonant....");
			break;
								
	}
}
