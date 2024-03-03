#include <stdio.h>
int main() {
    int a,b,c,n,i=0;
    scanf("%d %d %d",&c,&b,&n);
    if(n==1)
    printf("%d",c);
    if(n==2)
    printf("%d",b);
    if(n>2)
    while(i<=n)
    {   a=b+c-2;
        c=b;a=b;
        if(i==n)
        printf("%d",a);
        i=i+1; }
    return 0; }