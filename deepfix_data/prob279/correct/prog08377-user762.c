#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        if(a[i]!=i+1) {
            printf("%d\n",i);
            break; } }
    for(j=i;j<n;j++) {
        if(a[j]!=j) {
            printf("%d",j);
            break; } }
    if(j==n) {
        if(j==i) {
        printf("%d",j); } }
    return 0; }