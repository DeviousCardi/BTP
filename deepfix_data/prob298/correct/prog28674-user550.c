#include <stdio.h>
#include <stdlib.h>
int choose(int n,int k) {
    if(n<k) return 0;
    if(n==1||k==0) return 1;
    else return choose(n-1,k)+choose(n-1,k-1); }
int catalan(int n) {
    if(n==0)
        return 1;
    long int res=0,i;
    for(i=0;i<n;i++)
        res=res+catalan(i)*catalan(n-i-1);
    return res; }
int main() {
	int t,k;
	scanf("%d",&t);
	int i,j,c=0;
	for(i=0;i<t;i++) {
	    scanf("%d",&k);
	    for(j=0;j<17;j++) {
	        if(k==catalan(j)) {
	            printf("yes\n");
	            c++;
	            break; } }
	    if(c==0) printf("no\n"); }
	return 0; }