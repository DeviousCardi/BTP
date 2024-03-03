#include<stdio.h>
int main() {
    int a,b,c;
    int x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    if (b<=a&&c<=a)
    {x=a;y=b;z=c; }
    else if (c<=b&&a<=b)
    {x=b;y=a;z=c; }
    else if (a<=c&&b<=c)
    {x=c;y=a;z=b; }
    if (y+z<=x||x*y*z==0)
    {printf("INVALID"); }
    else {
        if (x*x==y*y+z*z)
        printf("RIGHT");
        else if (x*x>y*y+z*z)
        printf("ACUTE");
        else printf("OBTUSE");
    return 0; }