#include <stdio.h>

int main(void)
{
	int n;
	char c;
printf("\nenter the char");
scanf(" %c",&c);
n=(int)c;
if((n>=65 && n<=96)||(n>=97 && n<=122))
{
	printf("%c this is character",c);
}
else
{
	printf("%c this is not character",c);
}
return 0;
}
