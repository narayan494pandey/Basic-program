//# include<stdio.h>
# include<math.h>
int main()
{
	int r,h;
	float A,V,p=3.14;
	printf("enter the value of radius and height");
	scanf("%d%d", &r,&h);
	A=2*p*r*(r+h);
	V=p*r*r*h;
	printf("the area of cylinder is %f",A);
	printf("the volume of cylinder is %f",V);
	return 0;
}

