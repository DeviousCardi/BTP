#include <stdio.h>
int main() {
    int n,i,j,c=0;
    scanf("%d",&n);
    int ar[n];
    for(i=1;i<=n;i++) {
    scanf("%d",&ar[i]); }
    for(i=1;i<=n;i++) {
    for(j=1;j<=n;j++) {
    if((ar[i]!=i)&&(ar[i]==ar[j])
    c++; }
    if(c==1)
    printf("%d",ar[i]); }
    return 0; }