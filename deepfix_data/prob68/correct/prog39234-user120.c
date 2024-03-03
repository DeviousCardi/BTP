#include<stdio.h>
int main() {
    int n,t;
    while(n>=2)
    scanf("%d\n",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
   t= prod(a,0);
    printf("%d",t);
    return 0; }
int prod(int b[],int i) {
   if(b[i]!=0) {
       return b[i]*prod(b,++i); } }