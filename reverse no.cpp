# include<stdio.h>
int main()
{
	int n, reverse=0;
	printf("enter a number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
		}
		
		
		printf("%d\n is a reverse",reverse);

	
	return 0;
}
