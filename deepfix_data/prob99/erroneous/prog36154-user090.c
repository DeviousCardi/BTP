#include<stdio.h>
 int max(int x,int y) {
     if(x>y)
     return x;
     else
     return y; }
int main() {
     int n,i,a[20],MaxTill[20],l;
     scanf("%d",&n);
     for(i=0;i<n;i++) {
         scanf("%d",a[i]); }
     for(j=0;j<n-1;j++) {
         for(i=j+1;i<n;i++) {
             if(a[i]>a[j]) {
                 MaxTill[i]=max(max(1+MaxTill[j]),1); }
             else {
                 MaxTill[i]=1; } } }
     for(i=0;i<n;i++) {
         l=max(MaxTill[i],MaxTill[0]); }
     printf("%d",l);
    return 0; }