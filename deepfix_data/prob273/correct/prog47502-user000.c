#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int i,j,k,m,l,p;
	for(i=1;i<=(n+1)/2;i++) {
	    for(j=i;j<=(n-1)/2;j++) {
	        printf(" "); }
	    for(k=(n+1)/2-i+1;k<=(n+1)/2;k++) {
	        printf("%d",k%10); }
	    printf("\n"); }
	for(p=2;p<=(n+1)/2;p++) {
	    for(m=1;m<=p-1;m++) {
	        printf(" "); }
	    for(l=p;l<=(n+1)/2;l++) {
	     printf("%d",l); }
	printf("\n"); }
	return 0; }