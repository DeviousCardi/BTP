#include <stdio.h>
#include <stdlib.h>
int ackerman(int,int);
int main() {
    int x,k,n,m;
    scanf("%d",&k);
    int i,j;
    for(n=0;n<=5;n++) {
        for(m=0;m<=3;m++) {
            x=ackerman(m,n);
            if(x==k) {
                printf("%d %d",m,n); }
            else {
                printf("-1"); } } }
	return 0; }
int ackerman(int m,int n) {
    if(m==0) {
        return n+1; }
    else if(m>0&&n==0) {
        return ackerman(m-1,1); }
    return ackerman(m-1,ackerman(m,n-1)); }