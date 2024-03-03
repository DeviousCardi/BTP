#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        if(i<n/2) {
            for(j=0; j<n/2; j++) {
                if(j==n || j==n-i-1)
                printf("*");
                else
                printf(" "); } }
        else {
            for( j=0; j<n/2; j++) {
                if(j==n || j==i-n)
                printf("*");
                else
                printf(" "); } } } }