#include <stdio.h>
#include <stdlib.h>
int main() {
int n,A[1000],s=0,i,j,t,k;
scanf("%d",&n);
for(k=0;k<1000;k++) {
    A[k]=0; }
for(i=0;i<n;i++) {
    t=(n%i);
    if(t==0)
    A[i]=i; }
for(j=0;j<n;j++) {
    s=s+A[j]; }
if(s==n)
printf("YES");
else printf("NO");
	return 0; }