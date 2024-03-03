#include<stdio.h>
int sum(int n,int a[],int i) {
   if(i==0) {
       return -a[0]; }
   return a[i]+sum(n,a,i-1); }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    printf("%d",sum(n,a,n-1));
     return 0; }