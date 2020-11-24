# include<stdio.h>
int main()
{
	int n,r=0,temp;
	printf("enter the value of number\n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		r=r*10;
		r=r+temp%10;
		temp=temp/10;
	}
	if(n==r)
			printf("%d is a plindrome number\n",n);

		else
					printf("%d is a not plindrome number\n",n);

	return 0;

}
