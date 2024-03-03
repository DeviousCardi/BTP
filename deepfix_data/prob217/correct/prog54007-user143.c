#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,a[10000];
	scanf("%d\n",&n);
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]);
	  for(j=0;j<i+1;j++)
	   scanf("%d",&a[j]);
	  int t,s;
	  if(a[j]+a[i+1]==s)
	   t = (a[j],a[i+1]); {
	      printf("%d\n",t); } }
	return 0; }