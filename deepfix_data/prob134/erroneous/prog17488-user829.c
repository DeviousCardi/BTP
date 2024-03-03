#include <stdio.h>
#include <stdlib.h>
int B(int m, int k) {
    if(n<k) {
        return 0; }
    if(k==0 && n==0) {
        return 1 ; }
    if(k==0) {
        return 1; }
    else {
        return B(n-1,k)+B(n-1,k-1); } }
int main() {
	int b,k,n;
	scanf("%d",&b);
	for(n=0;n<=20;n++) {
	    for(k=0;k<=n;k++) {
	        if(b==B(n,k))
	        {printf("%d %d",n ,k);
	        exit(0);} } }
	printf("-1");
	return 0; }