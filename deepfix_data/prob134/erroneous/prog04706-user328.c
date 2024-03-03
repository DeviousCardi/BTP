#include <stdio.h>
#include <stdlib.h>
int binomial(int n,int k) {
    int b;
    if(n<k) {
        b=0; }
    else if(n==0 && k==0) {
        b=1; }
    else if(k==0) {
        b=1; }
    else {
        b=binomial(n-1,k)+binomial(n-1,k-1); }
    return b; }
int main() {
	int b,i,j,m,temp=0;
	scanf("%d\n",&b);
	for(i=0;i<=20;i++) {
	    for(j=0;j<=20;j++) {
	        m=binomial(i,j);
	        if(m==b) {
	            temp++;
	            printf("%d %d",i,j);
	            break; } }
	    if(temp==1)
	    break; }
	if(temp==0) {
	    printf("-1";) }
	return 0; }