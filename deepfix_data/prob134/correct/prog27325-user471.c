#include <stdio.h>
#include <stdlib.h>
int B(int n, int k) {
    if(n<k)
    return 0;
    else if(n==0 && k==0)
    return 1;
    else if(k==0)
    return 1;
    else
    return (B(n-1,k)+B(n-1,k-1)); }
int main() {
    int b=0,i,n,k;
    scanf("%d",&b);
    for(i=0;;i++) {
        if(b==B(n,k))
        printf("%d %d\n",n,k); }
	return 0; }