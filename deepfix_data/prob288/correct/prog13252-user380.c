#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, k, g;
    scanf("%d",&n);
    g=n;
    for(i=1;i<=g+1;i++,n--) {
        for(j=1;j<=n;j++) {
            printf(" "); }
        for(k=1;k<=i;k++) {
            if(k%2==0) {
                printf("x"); }
            else {
                printf("*"); } }
        printf("\n"); }
    i-=2;
    for(;i>0;i--) {
        for(j=i;j<=5;j++) {
            printf(" "); }
        for(k=i;k>0;k--) {
            if(k%2==0) {
                printf("x"); }
            else {
                printf("*"); } }
        printf("\n"); }
    return 0; }