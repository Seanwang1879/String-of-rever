#include <stdio.h>
int temp;

void main()
{
	printf("please enter string\n");
	reverse();
	printf("\n");
	return ;
}

void reverse()
{
	char c;
	
	scanf("%c",&c);
	if(c != '\n'){
		reverse();
		printf("%c",c);
	}
	return ;
}
