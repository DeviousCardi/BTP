#include <stdio.h>
#include <stdlib.h>
int cat(int n,int k);
int main() {
	int t,k,i;
	scanf("%d",&t);
	while(t!=0) {
	    scanf("%d",&k);
	    for(i=0;i<=17;i++) {
	        if(k==(cat(2i,i))/i+1) {
	            printf("yes");
	            break; } }
	    if(i==18)
	    printf("no");
	    t--; }
	return 0; }
    int cat(int n,int k) {
    if(n<k)
    return 0;
    else if(n==0 && k==0)
    return 1;
    else if(k==0)
    return 1;
    else return cat(n-1,k) + cat(n-1,k-1); }