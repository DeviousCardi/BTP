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
    if (y+z<=x)
    printf("INVALID");
    else printf("valid");
    return 0; }