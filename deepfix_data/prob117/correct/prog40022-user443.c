#include <stdio.h>
#include <stdlib.h>
int rec(int n) {
    if(n==1)
    return 2;
    else
    return 2*rec(n-1); }
int main() {
	int n,k,p,a;
	scanf("%d\n",&n);
	for(p=0;p<n;p++) {
    scanf("%d",&k); }
   a=rec(5)-1;
   printf("%d",a);
	return 0; }