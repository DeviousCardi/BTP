#include <stdio.h>
int check(int[],int,int);
int main() {
   int n,k,a[100];
   scanf("%d%d",&n,&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
    check(a,n,k);
    return 0; }
int check(int a[100],int n,int k) {
    if(k==0) {
        printf("YES");
        return 1; }
    else {
        for(i=0;i<n-1;i++) {
            check(a,n,k-a[i]); }
        return; } }