#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
        if(m==0)
        { return (n+1); }
        else if(m>0 && n==0)
        { return ackermann(m-1,1); }
        else
        {return ackermann((m-1),(ackermann(m,n-1))); } }
int main() {
    int k,m,n;
    scanf("%d",&k);
    for(m=0;m<=3;m++) {
        for(n=0;n<=5;n++) {
            if(ackermann(m,n)==k) {
                printf("%d %d",m,n); } } }
    return 0; }