#include <stdio.h>
#include <stdlib.h>
int main() {
	int ht,b;
	scanf("%d,%d",&ht,&b);
	int i;
	for(i=0;i<ht;i++) {
	    int a=b-((ht-i-1)*2);
	    int j;
	    j=i+1;
	    int k;
	   for(k=ht-(i+1);k>0;k--) {
	       printf(" "); }
	   int k;
	 for(k=0;k<=a;k++) {
	   printf("%d",j)
	   j++; }
	    printf("\n"); }
	return 0; }