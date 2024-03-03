#include <stdio.h>
#include <stdlib.h>
int Ackermann(int m,int n) {
    if(m==0) return n+1;
    if(m>0&&n==0) {
        return Ackermann(m-1,1); }
    if(m>0&&n>0) {
        return Ackermann(m-1,Ackermann(m,n-1)); } }
int main() {
    int k,i,j;
    int m,n;
    scanf("%d",&k);
    for(i=0;i<=3;i++) {
	    for(j=0;j<=5;j++) {
	        if(Ackermann(i,j)==k) {
	            m=i;
	            n=j;
	            break; } } }
	printf("%d %d",m,n);
	return 0; }