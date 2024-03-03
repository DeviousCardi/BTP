#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int i,j;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++) {
        for(j=1;j<=n+1;j++) {
            if(i+j>=n+2||j==n+1) {
                if((i+j)%2==0) {
                    printf("*"); }
                else {
                    printf("x"); } }
            else {
                printf(" "); } }
        printf("\n"); }
    for(i=n+2;i<=2*n+1;i++) {
        for(j=1;j<=n+1;j++) {
            if(i-j<=n||j==n+1) {
                if((i+j)%2==0) {
                    printf("*"); }
                else {
                    printf("x"); } } }
        printf("\n"); }
	return 0; }