#include <stdio.h>
int main() {
    int n,i,j,t,k;
    scanf("%d",&n);
    int ar[n];
    for(i=1;i<=n;i++) {
    scanf("%d",&ar[i]); }
    int k=0;
    for(i=1;i<=n;i++) {
    int c=0;
    for(j=1;j<=n);j++) {
    if(ar[i]==ar[j]) {
    t++;
    break; } }
    k++; }
    printf("%d %d",t,k);
    return 0; }