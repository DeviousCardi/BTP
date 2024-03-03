#include <stdio.h>
int main() {
   int n,i,j,s=0,s1=0,d=0;
   long int a[30],b[100],c[100];
   scanf("%d",&n);
   for(i=0;i<n;i++) {
       scanf("%ld",&a[i]); }
   for(i=0;i<n;i++) {
       s=s+a[i];
       b[i]=s; }
   for(i=n-1;i>=0;i--) {
       s1=s1+a[i];
       c[n-1-i]=s1; }
   for(i=0;i<n;i++) {
       for(j=0;j<n;j++) {
           if(b[i]==c[j]&&i+j==n-2) {
               d=1; } } }
   if(d==1){printf("YES");}
   else {printf("NO");}
    return 0; }