#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	int a;
	int b;
	int s;
	int sp1;
	int sp2;
	int i;
	a=(n+1)/2;
	b=(n-1)/2;
	sp1=b;
	sp2=-1;
	for(i=0;i<a;i++) {
	    for(s=1;s<=sp1;s++)
	    printf(" ");
	    sp1--;
	    printf("*");
	    for(s=1;s<=sp2;s++)
	    printf(" ");
	    sp2++;
	    if(i==0) {
	     printf("\n"); }
	     else
	     printf("*\n"); }
	sp1=1;
	sp2=sp2-2;
	for(i=0;i<b;i++) {
	    for(s=1;s<=sp1;s++){
	    printf(" "); }
	    sp1++;
	    printf("*");
	    for(s=1;s<=sp2;s++) {
	    printf(" "); }
	    sp2--;
	    if(i==b-1) {
	    printf("\n"); }
	    else
	    printf("*\n"); }
	    return 0; }