#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,j,i,a[n],s;
	scanf("%d ",&s);
     for(i=0;i<n;i++) {
         for(j=n-1;j>i;j--) {
             if(a[i]+a[j]==s)
             printf("%d,%d",a[i],a[j]); } }
	return 0; }