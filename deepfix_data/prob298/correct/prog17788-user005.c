#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    if(n==0)
    return 1;
    else return (2*((2*n-1)*catalan(n-1))/(n+1)); }
int main () {
    int n, i, j, count=0;
    scanf("%d", &n);
    int a[n];
    for(i=0;i<n;i++) {
        count=0;
        scanf("%d", &a[i]);
        for(j=0;j<17;j++) {
            if(a[i]==catalan(j))
            count++; }
        if(count)
        printf("yes\n");
        else printf("no\n"); }
    return 0; }