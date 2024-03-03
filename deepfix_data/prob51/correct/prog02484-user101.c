#include <stdio.h>
int main() {
   int n,k,j,t,i,p;
   scanf("%d",&n);
   scanf("%d",&k);
   int a[n];
   for(i=0;i<n;i++){
       scanf("%d",&a[i]); }
   t=0;
   for(i=0;i<n;i++){
       for(j=i;j<n;j++){
            if(a[j]>a[t]){
                t=j; } }
       p=a[t];
       a[t]=a[i];
       a[i]=p;
       t=i+1; }
   printf("%d",a[k-1]);
    return 0; }