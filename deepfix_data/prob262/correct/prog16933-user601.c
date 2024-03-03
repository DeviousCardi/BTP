#include<stdio.h>
#include<strings.h>
int main() {
    int n,i,c=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        c++; }
   for(i=0;i<c/2;i++) {
       k=a[i];
       a[i]=a[c-1-i];
       a[c-i-1]=k; }
    for(i=0;i<n;i++) {
        printf("%d ",a[i]); }
    return 0; }