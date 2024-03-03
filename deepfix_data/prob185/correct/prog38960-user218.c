#include<stdio.h>
int check(long int a[],long int n,long int key,long int i) {
    if(i<=n) {
    if(n==0) {
        return 0; }
    else if(key==0) {
        return 1; }
    else {
        return check(a,n,key-a[i],i+1)+check(a,n,key,i+1); } }
  else
  return 0; }
int main(){
   long int i,n,k,a[10],ans;
   scanf("%f %f\n",&n,&k);
   for(i=0;i<n;i++) {
       scanf("%f ",&a[i]); }
   ans=check(a,n,k,0);
   if(ans!=0) {
       printf("YES"); }
   if(ans==0)
   printf("NO");
    return 0; }