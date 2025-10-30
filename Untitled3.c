#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a&b&c&d values");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c&&a>d)
	printf ("a in big");
	else if (b>c&&b>d)
	printf("b in big");
	else if(c>d)
	printf ("c in big");
	else
	printf ("d in big");
	return 0;
}
