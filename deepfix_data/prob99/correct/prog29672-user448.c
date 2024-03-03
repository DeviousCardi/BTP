#include<stdio.h>
int n;
int a[1000];
int Maxtill( a,n){
    if (n==1){
        return 1; }
    return Maxtill(1+a,n-1); }
int main() {
   int i,j;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++){
       scanf("%d",&a[i]); }
   j=Maxtill(a,n);
   printf("%d",j);
    return 0; }