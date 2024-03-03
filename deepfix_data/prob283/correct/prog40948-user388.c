#include <stdio.h>
#include <stdlib.h>
void is_ackerman(int);
int main() {
    int k;
    scanf("%d",&k);
    is_ackerman(k);
	return 0; }
int value(int,int);
void is_ackerman(int k) {
    int m,n;
    for(m=0;m<=3;m++) {
        for(n=0;n<=5;n++) {
            if(value(m,n)==k) {
                printf("%d %d",m,n);
                return; } } }
    printf("-1");
    return; }
int value(int m,int n) {
    if(m==0) {
        return n+1; }
    else if(m>0&&n==0) {
        return value(m-1,1); }
    return value(m-1,value(m,n-1)); }