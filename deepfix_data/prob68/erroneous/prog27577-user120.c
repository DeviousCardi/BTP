#include<stdio.h>
int main() {
    int n,t;
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
   t= prod(a);
    return 0; }
int prod(int b[],int i) {
    if(b[i]==0)
    return 0;
   if(b[i]==1)
   return 1;
   return b[i]*prod(b,i+1) }