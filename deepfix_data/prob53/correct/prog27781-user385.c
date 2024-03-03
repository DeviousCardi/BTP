#include<stdio.h>
int i=0;
int sum(int n,int a[],int i) {
   if(n==1) {
       return -30; }
   return a[i]-(sum( n-1,a,i+1)); }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    printf("%d",sum(n,a,0));
     return 0; }