#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int res, i;
    if(n==0)
    return 1;
    else
    for(i=0;i<=n;i++) {
        res+=catalan(i)*catalan(n-i); }
    return res; }
int main () {
    int n, i, j, count=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
        for(j=0;j<17;j++) {
            if(a[i]==catalan(j))
            count++; }
        if(count)
        printf("yes\n");
        else printf("no\n"); }
    return 0; }