#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	char a[15],b[15];
	int k,c,i,inv=0;
	c=getchar();
	for(k=0;k<15&&c!=EOF;) {
	    a[k]=c;
	    c=getchar();
	    k++; }
	for(i=k;i>=0;i--) {
	  b[k-i]=a[i]; }
	for(i=0;i<=k;i++) {
    for(i=0;i<=k;i++) {
       inv=inv+pow(10,i)*(b[i]-48); }
    int x='5'-48;
    printf("%d",x);
	return 0; }