#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,m,a[20],t[20];
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&m);
	for(i=0;i<n;i++) {
	    scanf("%d",&t[i]); }
	for(i=0;i<n;i++) {
	    if(a[t[i]]>a[t[i]-1] && a[t[i]]>a[t[i]+1])
	    printf("Yes");
	    else
	    printf("No"); }
	return 0; }