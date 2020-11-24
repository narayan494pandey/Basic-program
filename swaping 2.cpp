# include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value of two number");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the swap number is %d,%d",a,b);
	return 0;
}
