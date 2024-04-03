#include<stdio.h>
struct cars
{
	int no_of_cars;
	char model[100];
	int year;
	int price;
};

int main()
{
	int n,i;
	printf("Enter the Number of Cars : ");
	scanf("%d",&n);
	
	struct cars c1[n];
	
	for(i=0;i<n;i++)
	{
		
		printf("Enter the No. of Car : ");
		scanf("%s",&c1[i].no_of_cars);
		
		printf("Enter the Model of Car : ");
		scanf("%s",&c1[i].model);
		
		printf("Enter the Year of Car : ");
		scanf("%d",&c1[i].year);
		
		printf("Enter the Price of Car : ");
		scanf("%d",&c1[i].price);
	}
	
	for(i=0;i<n;i++)
	{
		
		printf("\nEnter the Detail of Car : %d\n",i+1);
		
		printf("Model of Car is : %s\n",c1[i].model);
		
		printf("Year of Car is : %d\n",c1[i].year);
		
		printf("Price of Car is : %d\n",c1[i].price);
		
	}
}
