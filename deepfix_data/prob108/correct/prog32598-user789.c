#include <stdio.h>
#include <stdlib.h>
void space(int a) {
    int i;
    for(i=0;i<a;i++) {
        printf(" "); } }
int main() {
	int n,i,j,r;
	scanf("%d",&n);
	r=(n+1)/2;
	for(i=1;i<=r;i++) {
	    printf("*");
	    for(j=1;j<=i;j++) {
	        space(j-1); }
	    printf("*\n"); }
    int k;
    k=(n-1)/2;
    for(i=k;i>=1;i--) {
        printf("*");
        for(j=1;j<=i;j++) {
            space(j-2); }
        printf("*\n"); }
	return 0; }