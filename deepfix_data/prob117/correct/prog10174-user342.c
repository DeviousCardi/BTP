#include <stdio.h>
#include <stdlib.h>
int sum=0,f=0;
int hanoi(int n,int k) {
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    sum=hanoi(n-1,k)*2;
     if(sum-1==k)
    f=1;
    return sum; }
int main() {
	int k;
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&k);
	    hanoi(1000,k);
	    if(f==1)
	    printf("yes\n");
	    else
	    printf("no\n");
	    f=0; }
	return 0; }