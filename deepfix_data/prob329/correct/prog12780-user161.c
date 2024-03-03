#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a+b>c)&&(b+c>a)&&(c+a>b))
{  if((a>b)&&(a>c)&&(a*a==b*b+c*c))
    {printf("Right Triangle");}
    else if((b>a)&&(b>c)&&(b*b==a*a+c*c))
    {printf("Right Triangle");}
    else if((c>a)&&(c>b)&&(c*c==a*a+b*b))
    {printf("Right Triangle");}
    else printf("Not Right Triangle"); }
else printf("Cannot form a Triangle");
	return 0; }