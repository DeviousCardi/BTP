#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,j;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
	 if (i<=(n/2)) {
	     for(j=1;j<=(n/2-i+1);j++) {
	         printf(" "); }
	     for(j=1;j<=(2*i-1);j++) {
	         printf("*"); } }
	 if(i==(n/2+1)) {
	     for(j=1;j<=n;j++) {
	         printf("*"); } }
	 if (i>(n/2+1)) {
	     for(j=1;j<=(i-(n/2+1));j++) {
	         printf(" "); }
	     for(j=1;j<=(n-(2*(i-n/2)-1));j++) {
	         printf("*"); } }
	 printf("\n"); }
	return 0; }