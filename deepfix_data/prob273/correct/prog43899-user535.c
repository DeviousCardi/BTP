#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,k,m,n,p;
	scanf("%d",&m);
	n=m/2+1;
	p=n;
	for (i=1;i<=p;i++) {
	    for(j=1;j<n;j++) {
	     printf(" "); }
	    for (k=1;k<=i-1;k++) {
	     printf("%d",(p-i+k)%10); }
	    printf("%d",p);
	    n--;
	    printf("\n"); }
	n=p-2;
	for(i=1;i<=m/2;i++) {
	    for(j=1;j<=i;j++) {
	        printf(" "); }
	    for(k=1;k<=n;k++) {
	        printf("%d",(i+k)); }
	    printf("%d",p%10);
	    n--;
	    printf("\n"); }
	return 0; }