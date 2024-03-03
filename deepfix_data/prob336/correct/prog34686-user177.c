#include <stdio.h>
int main() {
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b&&a>=c)
    {z=a;x=b;y=c;}
    else if(b>=a&&b>=c)
    {z=b;x=a;y=c;}
    else
    {z=c;x=a;y=b;}
    if(x+y>z)
    {if(x*x+y*y>z*z)
    printf("Acute Triangle");
    else
    printf("Not Acute Triangle"); }
    else
    printf("Cannot form a Triangle");
    return 0; }