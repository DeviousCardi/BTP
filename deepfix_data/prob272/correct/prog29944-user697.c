#include <stdio.h>
int main() {
    int a,b,c,n,i;
    scanf("%d %d %d",&c,&b,&n);
    if(n==1)
    printf("%d",c);
    if(n==2)
    printf("%d",b);
    for(i=3;i<=n;i++)
    {   a=b+c-2;
        b=a;b=c;
        if(i==n)
        printf("%d",a); }
    return 0; }