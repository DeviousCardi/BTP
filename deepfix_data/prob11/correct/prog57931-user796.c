#include <stdio.h>
int promo(long int a[],long int s) {
   int i,n;
   long int sum;
   for(i=0;i<n;i++) {
       sum=sum+a[i]; }
   if(sum<s){
      return 0; } }
int main(){
    int n,i;
long int a[100],s,k;
scanf("%d",&n);
scanf("%ld",&s);
for(i=0;i<n;i++) {
    scanf("%ld",&a[i]); }
    k=promo(a,s);
    if(k==0) {
        printf("NO"); }
    return 0; }