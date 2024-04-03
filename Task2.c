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
	
	int large;
	large=a[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i] > large)
		{
			large=a[i];
		}
	}
	printf("Largest Element of Array are : %d",large);
}
