#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0)
    return 1;
    else
    return (2*(2*n-1)/(n+1.0))*catalan(n-1); }
int main() {
    int t,k,i,j;
    int a[17];
    scanf("%d\n",&t);
    for(i=0;i<17;i++) {
        a[i]=catalan(i); }
    for(i=0;i<t;i++) {
        scanf("%d\n",&k);
        for(j=0;j<17;j++) {
            if(a[j]==k) {
                printf("yes\n");
                break; }
            else {
                printf("no\n");
                continue; } } }
    return 0; }