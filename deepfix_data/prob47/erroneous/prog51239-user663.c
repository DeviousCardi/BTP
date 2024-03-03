#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
	    int a=0,i;
	    if (n==0)
	        return 1;
	    else {
	        for(i=0;i<n;i++)
            a=a+catalan(i)*catalan(n-i);
        return a; }
int main() {
    int j,i,n,sum;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<n;j++) {
        for(i+0;i<a[j];i++)
        sum=sum+catalan(i); }
    printf("%d",sum);
	return 0; }