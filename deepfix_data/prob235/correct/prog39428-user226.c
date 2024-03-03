#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i=0,j=0,h=0;
	scanf("%d",&h);
	for(i=1;i<=h;i++) {
	    for(j=0;j<abs(h/2+1-i);j++) {
	        printf(" "); }
	    if(i<=(h/2+1)) {
	        for(j=abs(h/2+1-i);j<=abs(h/2+1-i)+2*i-2;j++) {
	            printf("%d",(j+1)%10); } }
	    else {
	        for(j=abs((h+1)/2-i);j<=h-2*(abs((h+1)/2-i));j++) {
	            printf("%d",(j+1)%10); } }
	    printf("\n"); }
	return 0; }