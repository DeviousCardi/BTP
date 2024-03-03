#include <stdio.h>
#include <stdlib.h>
int s=0,g=0;
int han(int n,int k);
int main() {
	int n,k,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&k);
	    han(300,k);
	    if(g==1||k==0||k==1)
	    printf("yes\n");
	    else
	    printf("no\n");
	    g=0; }
	return 0; }
int han(int n,int k) {
    if(n==1||n==0)
    return n;
    s=han(n-1,k*2);
    if(s==k+1)
    g=1;
    return s; }