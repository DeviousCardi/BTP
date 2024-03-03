#include <stdio.h>
#include <stdlib.h>
int ackermann(int m,int n) {
    if(m==0)
    return n+1;
    if(n==0 && m>0)
    return ackermann(m-1,1);
    return ackermann(m-1,ackermann(m,n-1)); }
int main() {
    int k;
    scanf("%d",&k);
    int m=0, n=0;
    int count =0;
    for(m=0;m<4;m++) {
        for(n=0;n<6;n++) {
            if(k==ackermann(m,n)) {
                printf("%d %d",m,n);
                count++;
                break; } }
        if(count>0)
        break; }
    if (count==0)
    printf("-1");
	return 0; }