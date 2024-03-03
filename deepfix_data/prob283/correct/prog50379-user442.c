#include <stdio.h>
#include <stdlib.h>
int ack(int m, int n) {
    if(m==0)
        return (n+1);
    else if(m>0 && n==0)
        return ack(m-1, 1);
    return ack(m-1,n-1); }
int main() {
    int m, n, k, out1, out2, flag=0;
    scanf("%d",&k);
    for(m=3; m>=0; m--) {
        for(n=5; n>=0; n++) {
            if(ack(m,n)==k) {
                flag=1;
                out1=m;
                out2=n;
                break; } }
        if(ack(m,n)==k)
        break; }
    if(flag==1)
    printf("%d, %d",out1,out2);
    else
    printf("-1");
	return 0; }