#include <stdio.h>
#include <stdlib.h>
int ackerman(int m,int n) {
        if(m==0)
            return n+1;
        if(n==0 && m>0)
            return ackerman(m-1,1);
        if(m+n>0)
            return ackerman(m-1,ackerman(m,n-1)); }
int main() {
    int m,n,k,f=0;
    scanf("%d",&k);
    for(m=0;m<=3;m++)
        for(n=0;n<=5;n++)
            if(k==ackerman(m,n)) {
                    f=1;
                    break; }
    if(f==0)
        printf("-1");
    else
        printf("%d %d",m,n);
	return 0; }