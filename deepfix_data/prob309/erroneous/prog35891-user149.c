#include <stdio.h>
int main() {
    int n,i;
    scanf("%d",&n)
    int ar[n];
    int c=0;
    for(i=1;i<=n;i++) {
    scanf("%d",&ar[i]); }
    for(i=1;i<=n;i++) {
    int c=0;
    for(j=1;j<=n;j++) {
    if(ar[i]==ar[j])
    c++; } }
    if (c==ar[i])
    printf("Yes");
    else
    printf("No")
    return 0; }