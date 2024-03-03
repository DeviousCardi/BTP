#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n],check[n+1];
    int i,j;
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]); }
    check[0]=0;
    for(i=1;i<=n;i++) {
        for(j=0;j<n;j++) {
            if(i==array[j]) {
                check[i]++; } } }
    for(i=1;i<=n;i++) {
        if(check[i]==2) {
            printf("%d\n",i);
            break; } }
        for(i=1;i<=n;i++) {
        if(check[i]==0) {
            printf("%d",i);
            break; } }
    return 0; }