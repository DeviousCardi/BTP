#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k, g;
    scanf("%d",&n);
    g=n;
    for(i=n;i>0;i--,g--) {
        for(j=1;j<=i;j++) {
            printf(" "); }
        for(k=1;k<=i;k++) {
            if((j+2)%2==0) {
                printf("*"); }
            else {
                printf("x"); } }
        printf("\n"); }
    for(i=n+1;i>0;i--) {
        for(j=i;j<=5;j++) {
            printf(" "); }
        for(k=i;k>0;k--) {
            if((i+j)%2==0) {
                printf("x"); }
            else {
                printf("*"); } }
        printf("\n"); }
    return 0; }