include <stdio.h>


void main()
{
	printf("please enter string\n");
	reverse();
}

void reverse()
{
	char c;
	
	scanf("%c",c);
	if(c != '\n'){
		reverse();
		printf("%c",c);
	}
}