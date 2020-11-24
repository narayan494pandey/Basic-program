# include<stdio.h>
int main()
{
	char s[50];
	int i,v=0,c=0;
	printf("enter the string");
	gets(s);
	while(s[i]!='\0')
	for(i=0;i<50;i++)
	{
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='u'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		v++;
	}
	
	printf("number of vowel in string is %d",v);
    
    return 0;
}
