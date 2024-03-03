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
    if(a[j]>n+1) {
    printf("Yes"); }
    else {
    if(a[j]<10)
    printf("No");
    break; } }
    return 0; }