# include<stdio.h>
# include<math.h>
int main()
{
	float a,b,c,d;
	double r1,r2;
	printf("enter the value of coefficient of quadrtic eqution");
-	scanf("%f%f%f",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d>0)
	{
		printf("roots are real");
		r1=((-b+sqrt(d))/(2.0*a));
		r2=((-b-sqrt(d))/(2.0*a));
		printf("root1=%2f",r1);
		printf("root2=%2f",r2);
	}
	else if(d==0)
	{
		printf("roots are real and equal");
		r1=-b/(2.0*a);
		r2=-b/(2.0*a);
		printf ("roots are equal %2f",r1,r2);
	}
	else
	{
		printf("roots are imaginary");
	}
	return 0;
	
}



























































































































