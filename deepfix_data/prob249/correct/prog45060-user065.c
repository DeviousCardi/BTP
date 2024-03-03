#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int n,i,j,l,m,k;
	scanf("%d",&n);
	for (i=1;i<=n;i++) {
	    if (i<=(n+1)/2) {
	        for(j=1;j<=((n+1)/2)-i;j++) {
	            printf(" "); }
	        for(k=1;k<=i;k++) {
	            if(k==1||k==i) {
	                printf("*"); }
	            else {
	                printf(" "); }
	       }printf("\n"); }
	    else {
	        for(l=1;l<=i-((n+1)/2);l++) {
	            printf(" "); }
	        for(m=1;m<=n+1-i;m++) {
	            if(m==1||m==i-((n+1)/2)) {
	                printf("*"); }
	            else {
	                printf(" "); }
	        }printf("\n");
	    }}
	return 0; }