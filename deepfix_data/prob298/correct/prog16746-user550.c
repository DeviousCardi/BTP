#include <stdio.h>
#include <stdlib.h>
long int choose(int n,int k) {
    if(n<k) return 0;
    if(n==1||k==0) return 1;
    else return choose(n-1,k)+choose(n-1,k-1); }
long int catalan(int n) {
    if(n==0) return 1;
    else return choose(2*n,n)/(n+1); }
int main() {
	long int t,k;
	scanf("%d",&t);
	int i,j,c=0;
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    for(j=1;j<=17;j++) {
	        if(k==catalan(j)) {
	            printf("yes\n");
	            c++;
	            break; } }
	    if(c==0) printf("no\n"); }
	return 0; }