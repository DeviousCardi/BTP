#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a<=b) {
    if(a==b)
    {if(a>c)
    printf("%d",c);
    else printf("%d",a); }
else
{if(a>c)
printf("%d",a);
else
{if(c<b)
printf("%d",c);
else
printf("%d",b); } } }
else
{if(b>c)
printf("%d",b);
    else
{if(a>c)
printf("%d",c);
else
printf("%d",a); } }
	return 0; }