#include <stdio.h>
#include <stdlib.h>
int main() {
	int ht,b;
	scanf("%d%d",&ht,&b);
	int i;
	for(i=0;i<ht;i++) {
	    int a=b-((ht-i-1)*2);
	    int j;
	    j=i+1;
	    int k;
	   for(k=ht-(i+1);k>0;k--) {
	       printf(" "); }
	 for(k=0;k<a;k++) {
	   if(j<=9)
	       printf("%d",j);
	   else
	       printf("%d",j%10);
	   j++; }
	    printf("\n"); }
	return 0; }