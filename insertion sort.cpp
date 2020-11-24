# include<stdio.h>
int main()
{
	int a[10];
	int i,j,temp,n,n1;
	printf("enter the number of element");
		scanf("%d",&n);
		printf("enter the element of array");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			
			  temp=a[j];
			  a[j]=a[j+1];
			  a[j+1]=temp;
		    }
		}
	}
	   printf("enter the elements to be inserted:");
	   scanf("%d",&n1);
	   printf("in the sorted array");
	   for(i=0;i<n;i++)
	   printf("%d\t",a[i]);
	   return 0;
}
