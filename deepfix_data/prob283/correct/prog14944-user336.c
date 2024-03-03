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
	int k,m,n,p;
	scanf("%d",&k);
	for(m=0;m<=3;m++) {
	    for(n=0;n<=5;n++) {
	        p=A(m,n); } }
	if(p==-1)
	printf("-1");
	else if(k==p)
	printf("%d %d",m ,n);
	return 0; }