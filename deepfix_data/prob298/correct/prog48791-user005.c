#include <stdio.h>
#include <stdlib.h>
int catalan(int n, int k){
    int c;
    if(n==0){return 1;}
    else if(k>0){
    c=((n+k)*catalan(n, k-1))/k; }
    return c; }
int main() {
	int n,i, count, j;
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++) {
	    count =0;
	    scanf("%d", &a[i]);
	  for(j=0;j<=17;j++) {
	      if(a[i]==catalan(j,j))
	      count++; }
	  if(count)
	  printf("yes");
	  else printf("no"); }
	return 0; }