#include <stdio.h>
int main() {
   int n,k,i,j;
   scanf("%d %d\n",&n,&k);
   long int a[n],temp;
   for(i=0;i<n;i++){
       scanf("%ld ",&a[i]); }
    for(i=0;i<k;i++){
        for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            i++; } } }
   printf("%ld",a[n-k]);
   return 0; }