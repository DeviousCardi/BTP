#include<stdio.h>
int main() {
    int a,b,c,x,n,m;
    scanf("%d,%d,%d",&a,&b,&c);
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
   printf("%d,%d,%d",x,m,n);
    if((a<b+c)&&(b<c+a)&&(c<a+b))
    printf("ACUTE");
    else if(((a>b+c)||(b>c+a)||(c>a+b)))
    printf("OBTUSE");
    else
    if((a=b+c)||(b=c+a)||(c=a+b))
    return 0; }