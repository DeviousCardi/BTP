#include <stdio.h>
#include <stdlib.h>
int main() {
	int h,b,i,j;
	scanf("%d,%d",&h,&b);
	void printout(int a, int l) {
	    a=a%10;
	    for(i=a;i<a+l;i=i+1){printf("%d"),i%10;} }
	for(i=1;i<h+1;i=i+1) {
	    for(j=0;j<(b-i);j=j+1){printf(" ");}
	    printout(i,(b-2*h+2*i));
	    for(j=0;j<(b-i);j=j+1){printf(" ");}
	    printf("\n"); }
	return 0; }