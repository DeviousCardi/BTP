#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    for(j=0;j<n;j++)
    a[j]=0;
    for(i=0;i<n;i++) {
        scanf("%d",&k); }
    for(j=0;j<n;j++) {
    if(a[j]>=6) {
    printf("Yes"); }
    else {
    if(a[j]<n)
    printf("No");
    break; } }
    return 0; }