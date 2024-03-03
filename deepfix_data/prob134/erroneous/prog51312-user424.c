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
	int n,k;
	for(k=0;)
	return 0; }