#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,b,i;
	scanf("%d",&b);
    scanf("%d",&n);
	int fact(int r) {
	    for(i=0;i<r;i++) {
	        r = r*i; }
	 return r; }
	int B(n,k) {
	    if(n<k)
	    printf("0");
	    if(n==0 && k==0)
	    printf("1");
	    if(k==0)
	     printf("1");
	    if(b==fact(n)/fact(n-k)/fact(n))
    printf("%d%d",n,k);
    else return
    B(n-1,k)+B(n-1,k-1); }
	return 0; }