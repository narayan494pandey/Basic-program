# include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float div(int a,int b);
  	int add(int x,int y)
  	{
  		int e;
  		e=x+y;
  		return e;
	  }
      	int sub(int x,int y)
      	{
      		int f;
      		f=x-y;
      		return f;
		  }
	     	int mul(int x,int y)
	     	{
	     		int d;
	     		d=x*y;
	     		return d;
			 }
			 
	     	float div(int x,int y)
	     	{
	     		float g;
	     		g=x/y;
	     		return g;
			 }

     int main()
     {
     	int e,f,d,x,y;
     	float g;
       	e = add ( 5000, 60000);
     	f = sub ( 180, 120);
     	d = mul ( 12, 4);
     	g = div ( 12 , 4);
     	printf("%d %d %d %f\n",e,f,d,g);
        return 0;
	 }



