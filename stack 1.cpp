# include<stdio.h>
# include<stdlib.h>
int push();
int pop();
int display();
int stack[5];
int top=-1;
int main()
{
	int choice;
	int ch;
	do
	{
		printf("\n1.push");
		printf("\n2.pop");
		printf("\n3.display");
		printf("\n4.exit");
		printf("\nenter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : push();
			        break;
		    case 2 : pop();
		         break;
		    case 3 : display();
		          break;
		     case 4 : exit(0);
	    }
	}
	   while (choice !=4);
     return 0;
}
  int push()
  {
  	int item;
  	if(top==4)
  	printf("\n the stack is full");
  	else
  	{
  		printf ("enter the element to be inserted");
  		scanf("%d",&item);
  		top=top+1;
  		stack[top]=item;
	  }
	  return (item);
  }
	  int pop()
	  {
	  	int item;
	  	if(top==-1)
	  	printf("\n the stack is empty");
	  	else 
	  	 {
	  	 	item=stack[top];
	  	 	top=top-1;
		   }
		   return (item);
	  }
       int display ()
	   {
	   	int i;
	   	if(top==-1)
	   	printf("\n the stack is empty");
	   	else
	   	{
	   		for(i=top;i>=0;i++)
	   		{
	   			printf("\n%d",stack[i]);
			   }
		   }
		   return 0;
		 }  

