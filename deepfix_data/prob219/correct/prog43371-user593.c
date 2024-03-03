#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if (a>b>=c)
    {printf("%d",b);}
    if (a>c>=b)
    {printf("%d",c);}
    if (b>c>=a)
    {printf("%d",c);}
    if (b>a>=c)
    {printf("%d",a);}
return 0; }