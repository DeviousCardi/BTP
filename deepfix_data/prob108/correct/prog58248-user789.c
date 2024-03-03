#include <stdio.h>
#include <stdlib.h>
void space(int a) {
    int i;
    for(i=0;i<a;i++) {
        printf(" "); } }
int main() {
	int n,i,r;
	scanf("%d",&n);
	r=(n+1)/2;
	printf("*\n");
	for(i=1;i<r;i++) {
	    printf("*");
	    space(i-1);
	    printf("*\n"); }
    int k;
    k=(n-1)/2;
    for(i=k;i>=1;i--) {
        printf("*");
        space(i-1);
        printf("*\n"); }
    printf("*");
	return 0; }