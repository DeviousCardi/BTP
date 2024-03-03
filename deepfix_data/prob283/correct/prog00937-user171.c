#include <stdio.h>
#include <stdlib.h>
int ackerman(int m,int n) {
        if(m==0)
            return n+1;
        if(n==0)
            return ackerman(m-1,1);
        else
            return ackerman(m-1,ackerman(m,n-1)); }
int main() {
    int m,n,k;
    scanf("%d",&k);
    for(m=0;m<4;m++)
        for(n=0;n<6;n++)
            if(k==ackerman(m,n))
            break;
    printf("%d %d",m,n);
	return 0; }