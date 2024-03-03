#include<stdio.h>
int i=0;
int sum(int n,int a[n],int i) {
   if(n==1) {
       return a[0]; }
   return a[i]-sum(int n-1,int a[n-1],int i+1); }
int main() {
    int n,i;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    printf("%d",sum(n,a[n],0));
     return 0; }