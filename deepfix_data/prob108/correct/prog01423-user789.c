#include <stdio.h>
#include <stdlib.h>
void space(int a) {
    int i;
    for(i=0;i<a-1;i++) {
        printf(" "); } }
int main() {
	int n,i,j,r;
	scanf("%d",&n);
	r=(n+1)/2;
	printf("*\n");
	for(i=1;i<r;i++) {
	    printf("*");
	    for(j=1;j<=i;j++) {
	        space(j); }
	    printf("*\n"); }
    int k;
    k=(n-1)/2;
    for(i=k-1;i>=1;i--) {
        printf("*");
        for(j=1;j<=i;j++) {
            space(j); }
        printf("*\n"); }
    printf("*");
	return 0; }