#include <stdio.h>
#include <stdlib.h>
void printout(int a, int l) {
	    a=a%10;int i;
	    for(i=a;i<a+l;i=i+1){i=i%10;printf("%d",i);} }
int main() {
	int h,b,i,j;
	scanf("%d,%d",&h,&b);
	for(i=1;i<h+1;i=i+1) {
	    for(j=0;j<(b-i);j=j+1){printf(" ");}
	    printout(i,(b-2*h+2*i));
	    for(j=0;j<(b-i);j=j+1){printf(" ");}
	    printf("\n"); }
	return 0; }