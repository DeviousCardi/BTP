#include<stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else return b; }
int Max(int x[],int n) {
    if(n=1) return 1;
    return max(Max(x,n-1),1+x[n]); }
int main() {
   int i,n,j,a[20];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
      int MaxTill[n];
   MaxTill[0]=1;
        for(j=n-1;j>=0;j--) {
            if(a[j]<a[n-1]) {
                MaxTill[n-1]=max(Max(MaxTill,j+1),1); } }
    return 0; }