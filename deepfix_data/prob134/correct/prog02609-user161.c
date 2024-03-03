#include <stdio.h>
#include <stdlib.h>
int bino(int n,int k) {
    if(n<k) return 0;
    else if(n==0&&k==0) return 1;
    else if(k==0) return 1;
    else return bino(n-1,k)+bino(n-1,k-1); }
int main() {
	int b,n,k,i=0;
	scanf("%d",&b);
	for(n=0;n<20;n++) {
	    for(k=0;k<i;k++) {
	        if(bino(n,k)==b) {
	            printf("%d %d\n",n,k);
	            i++; } } }
	if(i==0){printf("-1");}
	return 0; }