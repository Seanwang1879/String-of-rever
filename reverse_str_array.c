#include <stdio.h>

void reversa_str(char *str)
{
	int i,j;
	int length=0;
	char temp;

	while(str[i++]!='\0'){
		length++;
	}
	
	for(i=length-1; i>=0; i--){
		temp = str[i];
		for(j=length-2; j>=length-i-1; j--){
			sty[j+1] = str[j];
		}
		str[length-i-1] = temp;
	}
	
	return ;
}

void main()
{
	int i;
	int length = 10;
	char str[];

	for(i=0; i<length; i++){
		scanf("%d", &str[i]);
	}
	reversa_str();
	
	return ;
}