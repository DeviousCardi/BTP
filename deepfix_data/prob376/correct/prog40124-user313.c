#include <stdio.h>
#include <stdlib.h>
int fac(int n) {
    int i,p=1;
    for(i=2;i<=n;i++)
        p=p*i;
    return p; }
int cat(int k) {
    if(k<=0) return 1;
    return 3*cat(k-1)-fac(k/2); }
int main() {
	int t,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    printf("%d\n",cat(k-1)); }
    return 0; }