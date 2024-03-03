#include<stdio.h>
int main() {
    int a,b,c,x,n,m;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {x=a;
    m=b;
    n=c;}
    else
    if(b>a&&b>c)
    {x=b;
    m=c;
    n=a;}
    else
    if(c>a&&c>b)
    {x=c;
    m=a;
    n=b; }
    x=x*x;
    m=m*m;
    n=n*n;
    if(x==(m+n))
    printf("RIGHT");
    else
    if(x<(m+n))
    printf("ACUTE");
    else
    if(x>(m+n))
    printf("OBTUSE");
    else
    if((a>=b+c)||(b>=a+c)||(c>=a+b))
    printf("INVALID");
    return 0; }