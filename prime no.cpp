# include<stdio.h>
int main()
{
	int c=2,n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(c=2;c<=n-1;c++)
	{
		if(n%c==0)
		{
		printf("%d is a not prime number",n);
		break;
	   }
	}
	if(c==n)
			printf("%d is a not prime number",n);

	return 0;
}
