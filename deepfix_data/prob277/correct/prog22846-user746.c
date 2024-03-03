#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>0;i-=2) {
        for(j=i;j<n;j+=2) {
            printf(" "); }
        for(j=i;j>0;j--) {
            printf("*"); }
        printf("\n"); }
    for(i=3;i<=n;i+=2) {
        for(j=i;j>=0;j-=2) {
            printf(" "); }
        for(j=0;j<i;j++) {
            printf("*"); } }
return 0; }