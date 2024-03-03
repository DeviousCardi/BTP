#include <stdio.h>
#include <stdlib.h>
int cat(int n) {
    int l;
    int ans = 0;
    if(n==0) return 1;
    if(n==1) return 1;
    else {
        l = cat(n-1);
        ans = (4*n-2)*l/(n+1);
        return ans; } }
int main() {
	int e=0;
	int t,n,i,k;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    e=0;
	    scanf("%d",&k);
	    for(n=0;n<17;n++){
	        if(k==cat(n)) e=1; }
	    if(e==1) printf("yes\n");
	    else printf("no\n"); }
	return 0; }