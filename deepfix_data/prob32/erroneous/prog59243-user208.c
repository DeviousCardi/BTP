#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	if(n==1) {
	    printf("Yes\n");
	    return 0; }
	int a[n],i;
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	int l;
	for(l=1;l<=n-1;l++) {
	      if(a[0]<a[1]) {
	          if ((a[l]>=a[l-1])||(a[l]>=a[l+1])) {
	              printf("No");
	          break; } }
	      if(l=n)
	      printf("Yes");
	return 0; }