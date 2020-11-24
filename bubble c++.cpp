# include<iostream>
using namespace std;
int bubble_sort(int n,int a[]);
int main()
{
    int n,a[100];
	cout<<"enter the value of n"<<endl;
	cin>>n;
	cout<<"enter"<<"n"<<"elements"<<endl;
    for(int i=0;i<n;i++)
	cin>>a[i];
	bubble_sort(n,a);
	cout<<"the sorted elements"<<endl;	
	 for(int i=0;i<n;i++)
	cout<<a[i];
	return 0;
	
	
}
int bubble_sort(int n,int a[])
{
	for(int j=0;j<n-1;j++)
	{
		for(int i=0;i<n-j;i++)
		{
			if(a[i]>a[i+1])
			{
				int temp;
				 temp=a[i];
				 a[i]=a[i+1];
				 a[i+1]=temp;
			}
		}
		return 0;
	}
}
