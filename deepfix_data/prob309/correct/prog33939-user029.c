#include <stdio.h>
int main() {
 int n,a[100],b,c=0,count=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++) {
     scanf("%d",a[i]);
     scanf(","); }
 for(int i=0;i<n;i++) {
     b=a[i];c=0;
     for(int x=0;x<n;x++) {
         if(b==a[x])
         c++; }
     if(c==b)
     count++; }
 if(count==n)
 printf("Yes");
 else
 printf("No");
    return 0; }