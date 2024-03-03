#include <stdio.h>
int main() {
   int n,k,i,j,temp;
   scanf("%d %d\n",&n,&k);
   long int a[n];
   for(i=0;i<n;i++){
       scanf("%ld ",&a[i]); }
    for(i=0;i<k;i++){
        for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
            i++; } } }
   for(i=0;i<n;i++) printf("%ld ",a[i]);
   printf("\n%ld",a[k]);
   return 0; }