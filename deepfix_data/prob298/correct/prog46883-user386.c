#include <stdio.h>
#include <stdlib.h>
int cat(int n);
int main() {
	int t,k,i,j,a[17];
	scanf("%d",&t);
	while(t!=0) {
	    scanf("%d",&k);
	    for(i=0;i<17;i++) {
	        a[i]=cat(i); }
	    for(j=0;j<17;j++) {
	        if(k==a[j]) {
	            printf("yes\n");
	            break; } }
	    if(j==17) {
	        printf("no\n"); }
	    t--; }
	return 0; }
int cat(int n) {
    if(n==0)
    return 1;
    else
    return (2*((2*n)-1)/(n+1) *cat(n-1)); }