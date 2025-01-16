#include<stdio.h>
#include<string.h>
main()
{
	char str[100],rev[100];
	int c;
	printf("Enter a word: ");
	gets(str);
	strcpy(rev,str);
	strrev(rev);
	c=strcmp(str,rev);
	if (c==0)
	{
		printf("%s is palindrome",str);
	}
	else{
		printf("%s is not palindrome",str);
	}
}
