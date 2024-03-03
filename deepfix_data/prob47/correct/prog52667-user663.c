#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
	    if (n==0)
	        return 1;
	    else
	       return ((2.0*(2*n-1)/(n+1))*catalan(n-1)); }
int main() {
    int j,i,n,sum;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<n;j++) {
        sum=0;
        for(i=0;i<a[j];i++) {
            sum=sum+catalan(i); }
        printf("%d",sum); }
	return 0; }