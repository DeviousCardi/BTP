#include <stdio.h>
#include <math.h>
int main() {
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
     if (a>=b && a>=c)
    {z=a;x=b;y=a;}
    else if (b>=c && b>=a)
    {z=b;x=c;y=a;}
    else  {z=c;x=a;y=b;}
    if ((!(a+b>c) && (b+c>a) && (c+a>b))
    {printf("Cannot form a Triangle");}
    else
    {if (pow(z,2)>pow(x,2)+pow(y,2))
    printf("Obtuse Triangle");
    else
    printf("Not Obtuse Triangle");}
    return 0; }