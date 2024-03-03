#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++)
    a[j]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&k);
        a[k-1]=a[k-1]+1; }
    for(j=0;j<n;j++) {
    if(a[k]>=j) {
    printf("Yes");
    break; }
    else {
    if(a[k]<=j)
    printf("No");
    break; } }
    return 0; }