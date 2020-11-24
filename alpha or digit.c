#include<stdio.h>
#include<ctype.h>
void main()

{
	char character;

	printf("press a key\n");
	character = getchar();
	if(isalpha(character)>0)
	printf("it is an alphabet\n");
	else
	if(isdigit(character)>0)
	printf("it is a digit");
	else
	printf("it is not alphanumeric");

		
}
