#include <stdio.h>
#include <stdlib.h>
int main() {
	int ht;
	scanf("%d",&ht);
	int i;
	for(i=0;i<ht;i++) {
	    if(i<=ht/2) {
	       int j;
	       j= (ht/2)-i;
	       while(j>0) {
	          printf(" ");
	          j=j-1; }
	       int k;
	       k=0;
	       while(k<2*i+1) {
	           printf("*");
	           k=k+1; }
	       printf("\n"); }
	   if(i>(ht/2)) {
	       int j;
	       j=i-5;
	       while(j>0) {
	          printf(" ");
	          j=j-1; }
	       int k;
	       k=0;
	       while(k<(9-(2*j+1))) {
	           printf("*");
	           k=k+1; }
	       printf("\n"); } }
	return 0; }