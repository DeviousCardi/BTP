#include<stdio.h>
 int max(int x,int y) {
     if(x>y)
     return x;
     else
     return y; }
int main() {
     int n,i,a[20],MaxTill[20],l,j;
     scanf("%d",&n);
     for(i=0;i<n;i++) {
         scanf("%d",&a[i]); }
     for(j=0;j<n;j++) {
         for(i=0;i<j;i++) {
             if(a[j]>a[i]) {
                 MaxTill[j]=max(max(1+MaxTill[i],1+MaxTill[0]),1); }
            else {
                 MaxTill[j]=1; } } }
     for(i=0;i<n;i++) {
         l=max(MaxTill[i],MaxTill[0])+1; }
     printf("%d",l);
    return 0; }