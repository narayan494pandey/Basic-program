# include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the limits");
	scanf("%d", &n);
	for(i=n;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("*");

		}
		printf("\n");
	}
	return 0;
}
