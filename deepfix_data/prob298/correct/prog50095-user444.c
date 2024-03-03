#include <stdio.h>
#include <stdlib.h>
int calc_catalan(int n) {
    if(n==0) {
        return 1; }
        return(2*(((2*n)-1)*calc_catalan(n-1))/(n+1)); }
int check_catalan(int k) {
    int i;
    if(k==0) {
        return 0; }
    for(i=1;i<=17;i++) {
        if(calc_catalan(i)==k) {
            return 1; } }
    return 0; }
int main() {
    int n,i,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&k);
        if(check_catalan(k)==1) {
            printf("yes\n"); }
        else {
            printf("no\n"); } }
    return 0; }