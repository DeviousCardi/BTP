#include <stdio.h>
#include <stdlib.h>
int a(int m, int n) {
    if(m==0) {
        return n+1; }
    if(m>0 && n==0) {
        return a(m-1,1); }
    if(m>0 && n>0) {
        return a(m-1,a(m,n-1)); }
    return -1; }
int main() {
	int k,m,n,p;
	scanf("%d",&k);
	for(m=0;m<=3;m++) {
	    for(n=0;n<=5;n++) {
	        p=a(m,n);
	        if(k==p)
	        printf("%d %d",m ,n);
	        else
	        printf("-1"); } }
	return 0; }