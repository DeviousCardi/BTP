#include <stdio.h>
#include <stdlib.h>
int ack(int m, int n) {
    if(m==0)
        return n+1;
    else if(m>0 && n==0)
        return ack(m-1, 1);
    return ack(m-1, ack(m, n-1)); }
int main() {
    int m, n, k, flag=0;
    scanf("%d",&k);
    for(m=0; m<=3; m++) {
        for(n=0; n<=5; n++) {
            if(ack(m,n)==k) {
                flag=1;
                break; } }
        if(ack(m,n)==k)
        break; }
    if(flag==1)
    printf("%d %d",m, n);
    else
    printf("-1");
	return 0; }