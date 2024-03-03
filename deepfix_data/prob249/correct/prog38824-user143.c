#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, i, j, k, h, l, m;
	scanf("%d",&n);
	l=h=n/2;
	m=1;
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
	        for(j=1;j<=m;j++) {
	            printf(" "); }
	        printf("*");
	        for(k=1;k<l;k++) {
	            printf(" "); }
	        if(i!=n) {
	            printf("*"); }
	        l--;
	        m++; }
	    printf("\n"); }
	return 0; }