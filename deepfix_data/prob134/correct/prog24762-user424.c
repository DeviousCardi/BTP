#include <stdio.h>
#include <stdlib.h>
int B(int n,int k){
    if(n<k) return 0;
    else if((n==0)&&(k==0)) return 1;
    else if(k==0) return 1;
    else return B(n-1,k)+B(n-1,k-1); }
int main() {
	int b;
	scanf("%d",&b);
	int n=1,k=1;
	if(b==0) printf("0 1");
	else if(b==1) printf("0 0");
	else{
	    while(B(n,k)<b){
	       while(B(n,k)<b){
	          n=n+1; }
	       k=k+1;
	       n=k; }
	if(B(n,k)==b) printf("%d %d",n,k);
	else printf("-1"); }
	return 0; }