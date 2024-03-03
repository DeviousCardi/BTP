#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,n,i,j,k,l[100000],m[1000000];
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
	    a=(n%i);
	    if(a==0) {
	        for(j=1;j<=n;j++) {
	            l[j]=a; } } }
	for(j=1;j<n;j++) {
	    for(k=1;k<=j;k++) {
	       if(l[j]!=n||l[k]!=n)
	        {l[j]=l[k+1]+l[k-1];} } }
	if(l[n-1]==n)
	printf("YES");
	else
	printf("NO");
	return 0; }