#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
    int a,b,c;
    int x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    if((a>=(b+c))||(b>=(a+c))||(c>=(a+b)))
    printf("Cannot form a Triangle");
    else if(a>=b && a>=c)
    {x=a*a;y=b*b;z=c*c;}
    else if(b>=a && b>=c)
    {x=b*b;y=a*a;z=c*c;}
    else if(c>=a && c>=b)
    {x=c*c;y=b*b;z=c*c;}
    if(x>(y+z))
    printf("Obtuse Triangle");
    else
    printf("Not Obtuse Triangle");
    return 0; }