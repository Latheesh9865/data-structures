#include<stdio.h>
int main()
{
	int a[100];
	int element,i,j,loc,n;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position to insert the elements");
	scanf("%d",&loc);
	loc--;
	for(i=n-1;i>=n;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=element;
	printf("array after insertion");
	for(i=0;i<n+1;i++)
	{
		printf("%d",a[i]);
		}	
		printf("enter elements to delete");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			if (a[i]==n)
			{
				for(j=1;j<(n-1);j++)
				{
					a[j]=a[j+1];
				}
				break;
			}
		}
	return 0;
}
