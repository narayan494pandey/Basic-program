# include<stdio.h>
main()
{
	int a[10]={1,6,7,8,5,9,};
	int n;
	int count=0;
	printf("enter the number");
	scanf("%d",&n);
	int i=0;
	while(a[5])
	{
		if(a[i]==n)
		{
		count++;
		break;			
		}
		i++;
	}
	printf("%d is position\n",i);
	if(count>0)
		{
		 printf("hello");	
		}
    else{
    	printf(" not hello");
    	
	}
	
	
	
}

