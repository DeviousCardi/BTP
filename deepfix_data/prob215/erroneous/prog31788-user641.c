#include <stdio.h>
#include <stdlib.h>
int main() {
int n,A[10000],s=0;
scanf("%d",&n);
for(i=0;i<n;i++) {
    t=(n%i);
    if(t==0)
    A[i]=t;
    else continue; }
for(j=0;j<n;j++) {
    s=s+A[j]; }
if(s==n)
printf("YES");
else printf("NO");
	return 0; }