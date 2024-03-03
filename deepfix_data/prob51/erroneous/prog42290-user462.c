#include <stdio.h>
int max(int a[],int n){
    int i,d;
    d=a[0]
    for(i=0;i<n;i++){
        if(d<a[i]){
            d=a[i]; } }
    return d; }
int main() {
   int n,k,i,count=0,min,d;
   scanf("%d %d",&n,&k);
   int a[n];
   for(i=0;i<n;i++){
       scanf("%d",&a[i]); }
   min=a[0];
   for(i=0;i<n;i++){
       if(a[i]<a[0]){
           min=a[i]; } }
   for(i=1;i<k;i++){
       max(a,n);
       d=min;
       count++;
       if(count!=k){
           max(a,n); }
       else{
           printf("%d",max); } }
    return 0; }