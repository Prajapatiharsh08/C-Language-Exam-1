#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter the Size of an Array : ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter the Array Elements : \n");
	
	for(i=0;i<n;i++)
	{
		printf("Elements[%d] are : ",i);
		scanf("%d",&a[i]);
	}
	
	int *sqr;
	sqr=&a[i];
	
	for(i=0;i<n;i++)
	{
		sqr = a[i] * a[i];
		printf("Square of Each Elements are : %d\n", sqr);
	}

	
}
