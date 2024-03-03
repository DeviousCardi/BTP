#include <stdio.h>
#include <stdlib.h>
int main() {
	int h;
	scanf("%d",&h);
	int k,i,j,l;
	k=(h+1)/2;
	for(i=k;i>=1;i--) {
	    for(l=i-1;l>=0;l--) {
	   printf(" ") ; }
	    for(j=i;j<=k;j++) {
	    printf("%d",j%10); }
	      printf("\n"); }
	int m,n,p;
	for(m=k;m<=h;m++) {
	    for(p=h-k-m;p>=0;p--) {
	        printf(" "); }
	    for(n=m;n>k;n--) {
	        printf("%d",n%10); }
	    printf("\n"); }
	return 0; }