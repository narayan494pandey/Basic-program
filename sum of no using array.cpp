# include<stdio.h>
int main()
{
	int a[50],n,i,sum=0;
	printf("enter the value of element\t");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	for(i=0;i<n;i++)
	sum=sum+a[i];
	printf("the sum is %d\t",sum);
	return 0;
}
