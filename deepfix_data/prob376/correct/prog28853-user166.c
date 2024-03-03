#include <stdio.h>
#include <stdlib.h>
int combination(int n , int r) {
    if(n<r) {
        return 0; }
    else if(r==0 && r==n) {
        return 1; }
    else combination(n-1 , r)+combination(n-1 , r-1); }
int main() {
	int t,n,i;
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&n);
	    if(n==0) {
	        printf("1\n"); }
	    else if(n>0) {
	        int C=combination(2*n , n)/(n+1);
	        printf("%d\n",C); } }
	return 0; }