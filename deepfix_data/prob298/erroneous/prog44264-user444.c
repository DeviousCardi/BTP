#include <stdio.h>
#include <stdlib.h>
int catalan(int n) {
    if(n==0) {
        return(2*((2*n)-1)*catlan(n-1))/(n+1); } }
int check(int n) {
    int i;
    if(k==0) {
        return 0; }
    for(i=1;i<=17;i++) {
        if(catalan(i)==k) {
            return 1; } }
    return 0; }
int main() {
    int t,i,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++) {
        scanf("%d",&k);
        if(check(k)); {
            printf("yes\n"); }
        else {
            printf("no\n"); } }
    return 0; }