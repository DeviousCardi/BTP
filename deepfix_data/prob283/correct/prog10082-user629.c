#include <stdio.h>
#include <stdlib.h>
int Ackerman(int m,int n) {
    if(m==0)
    return n+1;
    else if(m>0 && n==0)
    return Ackerman(m-1,1);
    else
    return Ackerman(m-1,Ackerman(m,n-1)); }
int main() {
    int k,i,j;
    scanf("%d",&k);
    for(i=0;i<=3;i++) {
        for(j=0;j<=5;j++) {
            if(Ackerman(i,j)==k)
            break; } }
    if(i==4 && j==6)
    printf("%d",-1);
    else
    printf("%d %d",i,j);
	return 0; }