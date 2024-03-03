#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%d",&n);
	for(i=0;i<(n/2)+1;i++) {
	    for(j=0;j<(n/2)-i;j++) {
	        printf("n"); }
	    printf("*");
	    if(i) {
	        for(j=0;j<i;j++) {
	            printf("*"); }
	        printf("*"); } }
	for(i=0;i<(n/2);i++) {
	    for(j=0;j<=i;j++) {
	        printf("n"); }
	    printf("*");
	    if(i!=n) {
	        for(j=0;j<(n/2);j++) {
	            printf("n"); }
	        printf("*"); } }
	return 0; }