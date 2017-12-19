#include <stdio.h>

void main()
{
	char *s;
	int len,i;
	
	printf("\nENTER A STRING: ");
	gets(s);
	len=strlen(s);
	printf("\n REVERSE:");
	for(i=len;i>=0;i--)
		printf("%c",*(s+i));
	
}
