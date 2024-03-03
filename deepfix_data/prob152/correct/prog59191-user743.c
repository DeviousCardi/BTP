#include <stdio.h>
int s=0;
 void fun(int a[],int p,int i,int t,int n) {
   printf("sum %d\n",p);
   if(i==n)return;
    if(p==t) {
        printf("YES"); }
    if(p!=t) {
        fun(a,p+a[i],i+1,t,n);
        fun(a,p,i+1,t,n);
        return; } }
int main() {
   int n;
   scanf("%d",&n);
   int a[n];
   int sum=0;
   for(int i=0;i<n;i++) {
   scanf("%d",&a[i]);
    sum=sum+a[i]; }
    if(sum%2!=0)printf("NO");
    else {
        fun(a,0,0,sum/2,n); }
    return 0; }