#include<stdio.h>
int ans=0;
int count(n) {
    if(n==0)
    { ans++;
      return 1; }
    if(n<0)
    return 0;
    temp=(count(n-1) || count(n-3) || count(n-5)); }
int main() {
    int n,i;
    scanf("%d",&n);
    i=count(n);
    printf("%d",ans);
    return 0; }