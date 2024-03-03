#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, k, h, l;
	scanf("%d",&n);
	l=h=n/2;
	for(i=1;i<=n;i++) {
	    if(i<=(n/2)+1) {
	        for(j=1;j<=h;j++) {
	            printf(" "); }
	        printf("*");
	        for(k=i-2;k>0;k--) {
	            printf(" "); }
	        if(i!=1) {
	            printf("*"); }
	        h--; }
	    else {
	        for(j=1;j<=l;j++) {
	            printf(" "); }
	        printf("*");
	        for(k=l;k>0;k--) {
	            printf(" "); }
	        if(i!=n) {
	            printf("*"); }
	        l--; }
	    printf("\n"); }
	return 0; }