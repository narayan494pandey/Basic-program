# include<stdio.h>
# include<math.h>
int main()
{
	
	int r;
	float A,V,p=3.14;
	printf("enter the value of radius");
	scanf("%d", &r);
	A=4*p*r*r;
	printf("the area is %f",A);
	V=4/3*(p*r*r*r);
	printf("the volume is %f",V);
	return 0;

}
