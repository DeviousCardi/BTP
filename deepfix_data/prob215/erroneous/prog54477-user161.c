#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	int sum=0;
	scanf("%d",&n);
	int a[(n/2)+1];
	for(i=1;i<n/2+1;i++) {
	    (n%i==0)?a[i]=i;:a[i]=0;; }
	for(i=1;i<n/2+1;i++) {
	    sum=sum+a[i]; }
	(sum==n)?printf("YES");:printf("NO");;
	return 0; }