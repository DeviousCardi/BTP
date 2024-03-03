#include <stdio.h>
int main() {
    int n,s=0,m,d;
    scanf("%d",&n);
    while(m>0)
        {d=(n%10);
        s=s+d;
        m=n/10; }
        while((n%s)!=0)
            n=n+1;
            printf("%d",n);
    return 0; }