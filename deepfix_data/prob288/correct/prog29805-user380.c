#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k, g;
    scanf("%d",&n);
    g=n;
    for(i=1;i<=n+1;i++,g--) {
        for(j=1;j<=g;j++) {
            printf(" "); }
        for(k=j+1;k<=n+2;k++) {
            if((i+k)%2==0) {
                printf("x"); }
            else {
                printf("*"); } }
        printf("\n"); }
    for(i=1;i<=n+1;i++,g--) {
        for(j=1;j<=i;j++) {
            printf(" "); }
        for(k=j+2;k<=n+2;k++) {
            if((i+k)%2==0) {
                printf("x"); }
            else {
                printf("*"); } }
        printf("\n"); }
    return 0; }