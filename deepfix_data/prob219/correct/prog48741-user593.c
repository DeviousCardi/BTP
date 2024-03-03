#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
    if ((a>b)&&(b>=c))
    {printf("%d",b);}
    if ((b>c)&&(c>=a))
    {printf("%d",c);}
    if ((a>c)&&(c>=a))
    {printf("%d",c);}
    if ((b>a)&&(a>=c))
    {printf("%d",a);}
    if ((a>b)&&(b>=c))
    {printf("%d",b);}
    if ((c>a)&&(a>=b))
    {printf("%d",a);}
    if ((a==b)&&(b>c))
    {printf("%d",c);}
    if ((b==c)&&(c>a))
    {printf("%d",a);}
    if ((a==c)&&(c>b))
    {printf("%d",b);}
return 0; }