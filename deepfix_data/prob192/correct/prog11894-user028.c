#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,i,j,t,k,l,p,r,q,x,s;
	scanf("%d",&n);
	m=(n+1)/2;
	for(i=1;i<=m;i++) {
	    for(j=1;j<=m-i;j++) {
	        printf(" "); }
	  t=i+(n-1)/2;
	    for(k=t;k>m-i;k--) {
	         printf("*"); }
	   printf("\n"); }
	   l=(n+3)/2;
	 for(p=l;p<=n;p++) {
	       r=p-(n+1)/2;
	     for(q=1;q<=r;q++) {
	          printf(" "); }
	    x=(3*n+2)/2-p;
	      for(s=x;s>r;s--) {
	           printf("*"); }
	   printf("\n"); }
	return 0; }