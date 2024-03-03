#include <stdio.h>
#include <stdlib.h>
int A(int m, int n) {
    if(m==0) {
        return n+1; }
    if(m>0 && n==0) {
        return A(m-1,1); }
    if(m>0 && n>0) {
        return A(m-1,A(m,n-1)); }
    return -1; }
int main() {
	int k,m,n;
	scanf("%d",&k);
	for(m=0;m<1000;m++) {
	    for(n=0;n<1000;n++) {
	        if(k==A(m,n)) {
	        if(m<=3 && n<=5)
	        printf("%d %d",m ,n);
	        else
	        printf("-1"); }
	        else
	        printf("-1"); } }
	return 0; }