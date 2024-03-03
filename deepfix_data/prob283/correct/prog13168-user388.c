#include <stdio.h>
#include <stdlib.h>
int ackerman(int,int);
int main() {
    int k,n=0,m=0,count=0;
    scanf("%d",&k);
    for(n=0;n<=5;n++) {
        for(m=0;m<=3;m++) {
            if(ackerman(m,n)==k) {
                printf("%d %d",m,n);
                count++; } } }
    if(count==0) {
        printf("-1"); }
	return 0; }
int ackerman(int m,int n) {
    if(m==0) {
        return n+1; }
    else if(m>0&&n==0) {
        return ackerman(m-1,1); }
    return ackerman(m-1,ackerman(m,n-1)); }