#include<stdio.h>
int main() {
   int a[20],ar[20],i,j,n,count,p;
   scanf("%d\n",&n);
   for(i=0;i<n;i++) {
       scanf("%d",&a[i]); }
   for(i=0;i<n;i++) {
       count =1;
       for(j=i+1;j<n;j++) {
           if(a[i]<a[j])
              count=count+1; }
       ar[i]=count; }
   for(i=0;i<n;i++) {
     printf("%d\n",ar[i]); }
    return 0; }