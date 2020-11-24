# include<stdio.h>
int main()
{
	int n;
	printf("enter the value of year");
	scanf("%d",&n);
	if(n%400==0)
	printf("%d is leap year",n);
	else if(n%100==0)
	printf("%d is not leap year",n);
	else if(n%4==0)
	printf("%d is leap year",n);
	else 
	    printf("%d is not leap year",n);
	    return 0;
}











