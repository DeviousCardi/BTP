#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int ar[n];
    for(i=1;i<=n;i++) {
    scanf("%d",&ar[i]); }
    for(i=1;i<=n;i++) {
    int c=0;
    for(j=1;j<=n;j++) {
    if((i!=ar[i])&&(ar[i]==ar[j]))
    c++; }
    if(c==1)
    printf("%d",ar[i]); }
    return 0; }