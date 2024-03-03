#include <stdio.h>
int promo(long int a[],long int s) {
   int i;
   long int s;
   for(i=0;i<n;i++) {
       s=s+a[i]; }
   if(s<n){
      return 0; } }
int main(){
    int n;
long int a[100],s,k;
scanf("%d",&n);
scanf("%ld",&s);
for(i=0;i<n;i++) {
    scanf("%ld",&a[i]); }
    k=promo(a);
    if(k==0) {
        printf("yes"); }
    return 0; }