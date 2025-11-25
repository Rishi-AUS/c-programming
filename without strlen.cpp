#include<stdio.h>
int main ()
{
	char s[20];
	int l,i;
	printf("enter string name");
	gets(s);
	for(i=0;s[i]!='\0';i++);
	l=i;
	printf("length of string name =%d",l);
	return 0;
}
