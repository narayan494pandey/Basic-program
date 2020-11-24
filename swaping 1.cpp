# include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of two number");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the swap number is %d,%d",a,b);
	return 0;
	
}
