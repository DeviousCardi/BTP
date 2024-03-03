#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,m,n,p;
	scanf("%d",&h);
	int k,i,j,l;
	k=(h+1)/2;
	for(i=k;i>=1;i--) {
	    for(l=i-1;l>=1;l--) {
	   printf(" ") ; }
	    for(j=i;j<=k;j++) {
	    printf("%d",j%10); }
	      printf("\n"); }
	for(m=k-1;m>=1;m--) {
	    for(p=0;p<=k-m-1;p++) {
	        printf(" "); }
	    for(n=p;n<=k;n++) {
	        printf("%d",n%10); }
	    printf("\n"); }
	return 0; }