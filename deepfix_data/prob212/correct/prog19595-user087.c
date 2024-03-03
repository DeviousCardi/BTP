#include <stdio.h>
int main() {
    int n=2016,s=0,m,d;
    scanf("%d",&m);
    while(m>0)
        {d=(m%10);
        s=s+d;
        m=(m/10); }
        while((n%s)!=0)
            n=n+1;
            printf("%d",n);
    return 0; }