#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
        if(m==0)
        { return (n+1); }
        else if(m>0 && n==0)
        { return ackermann(m-1,n); }
        else
        {return ackermann((m-1),(ackermann(m,n-1))); } }
int main() {
    int k,m,n,x=0;
    scanf("%d",&k);
    for(m=0;m<=3;m++) {
        for(n=0;n<=5;n++) {
            if(ackermann(m,n)==k) {
                x++; }
            if(x!=0)
            { break; } }
        if(x!=0)
        { break; } }
    if(x==0)
    printf("-1");
    else
    printf("%d %d",m,n);
    return 0; }