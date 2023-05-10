#include<stdio.h>
int main()
{
	int a[100];
	int i,se,n;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("enter the search elements");
	scanf("%d",&se);
	for(i=0;i<n;i++)
	{
		if(se==a[i])
		printf("%d%d",se,i);
		else
		if(i==n)
		printf("no such element");
	}
	return 0;
}