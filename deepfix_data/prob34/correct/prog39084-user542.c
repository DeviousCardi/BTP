#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d\n",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	 int k,l;
	 scanf("%d\n",&k);
	 for(i=1;i<=k;i++) {
	     scanf("%d\n",&l);
	 if(l==n-1) {
	     if(a[n-1]>a[n-2])
	     printf("Yes\n");
	     else
	     printf("No\n"); }
	 else if(l==0) {
	     if(a[0]>a[1])
	    { printf("Yes\n");}
	     else
	    { printf("No\n");} }
	 else {
	    if(a[l]>a[l-1]&&a[l]>a[l+1])
	 printf("Yes\n");
	 else
	 printf("No\n"); } }
	return 0; }