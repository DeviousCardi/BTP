#include <stdio.h>
#include <stdlib.h>
int main() {
	int ht;
	scanf("%d",&ht);
	int i,k;
	k=0;
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
	       j=i-(ht/2+1);
	       while(j>=0) {
	          printf(" ");
	          j=j-1; }
	       int c;
	       c=0;
	      while(c<=(ht-2*k)) {
	       printf("*");
	       c=c+1; }
	       k++;
	       printf("\n"); } }
	return 0; }