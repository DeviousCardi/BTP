#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[500],b[500],max,c,d,i;
	scanf("%d%d",&c,&d);
	if(c>=d) {
	    max=c; }
	    else {
	    max=d; }
	i=0;
	while(i<c) {
	   scanf("%1d",&a[i]);
	   i++; }
	i=0;
	while(i<d) {
	    scanf("%1d",&b[i]);
	    i++; }
	for(i=1;i<=max;i++) {
	    k[i-1]=a[c-i]+b[d-i]; }
	for(i=max;i>0;i--) {
	    printf("%d",k[i]); }
     return 0; }