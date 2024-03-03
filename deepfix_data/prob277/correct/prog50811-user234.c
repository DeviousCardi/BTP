#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n,j;
    scanf("%d",&n);
    for(i=n;i>0;i-2) {
        for(j=0;j<i;j++) {
            printf("*");
            printf("\n"); } }
    for(i=3;i<n+1;i+2) {
        for(j=0;j<i;j++) {
            printf("*");
            printf("\n"); } }
	return 0; }