#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i=0,j=0,h=0,i1=1;
	scanf("%d",&h);
	for(i=1;i<=h/2+1;i++) {
	    for(j=0;j<abs(h/2+1-i);j++) {
	        printf(" "); }
	    if(i<=(h/2+1)) {
	        for(j=abs(h/2+1-i);j<=abs(h/2+1-i)+2*i-2;j++) {
	            printf("%d",(j+1)%10); } }
	    printf("\n"); }
	for(i=1;i<=h/2;i++) {
	    for(j=0;j<i;j++) {
	        printf(" "); }
	    for(j=i+1;j<=h-i;j++) {
	        printf("%d",j%10); }
	    printf("\n"); }
	return 0; }