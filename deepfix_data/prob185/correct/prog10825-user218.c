#include<stdio.h>
int check(int a[],int n,int key,int i,int taken) {
    if(i<n) {
    if(n==0) {
        return 0; }
    else {
        return check(a,n,key-a[i],i+1,taken+1)+check(a,n,key,i+1,taken); } }
  else {
    if(key==0&&taken!=0)
    return 1;
    else
    return 0; } }
int main(){
   int i,n,k,a[10],ans;
   scanf("%d %d\n",&n,&k);
   for(i=0;i<n;i++) {
       scanf("%d ",&a[i]); }
   ans=check(a,n,k,0,0);
   if(ans!=0) {
       printf("YES"); }
   else if(ans==0)
   printf("NO");
    return 0; }