#include <stdio.h>
int main() {
    int a,b,c,n,i;
    scanf("%d %d %d",&c,&b,&n);
    if(n==1)
    printf("%d",c);
    if(n==2)
    printf("%d",b);
    if(n>2)
    for(i=3;i<=n;i++)
    {   a=b+c-2;
        if(i==n)
        printf("%d",b);
        b=c;b=a; }
    return 0; }