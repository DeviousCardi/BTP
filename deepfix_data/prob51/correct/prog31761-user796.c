#include <stdio.h>
int main() {
   int i,n,k,j,b;
   long int a[100000];
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
       scanf("%ld",&a[i]);
   for(i=0;i<n;i++) {
       for(j=i+1;j<n;j++) {
           if(a[i]>a[j]) {
           b=a[j];
           a[j]=a[i];
           a[i]=b; } } }
    for(i=0;i<n;i++) {
    printf("%ld",a[i]); }
    return 0; }