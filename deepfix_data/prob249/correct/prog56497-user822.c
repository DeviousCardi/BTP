#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i=1;i<=n/2+1;i++) {
        for(j=1;j<=n/2+1;j++) {
            if(i+j==n/2+2||j==n/2+1) {
                printf("*"); }
            else {
            printf(" "); } }
        printf("\n"); }
    for(i=n/2+2;i<=n;i++) {
        for(j=1;j<=n/2+1;j++) {
            if(i-j==n/2||j==n/2+1) {
                printf("*"); }
            else {
            printf(" "); } }
        printf("\n"); }
	return 0; }