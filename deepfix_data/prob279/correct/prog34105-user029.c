#include <stdio.h>
int main() {
 int n,a[100],c=0,b,y;
 scanf("%d",&n);
 for(int i=0;i<n;i++) {
     scanf("%d",&a[i]); }
 for(int i=0;i<n;i++) {
     c=0;
     for(int x=1;x<=n;x++) {
         if(a[i]==x)
         c++; }
     if(c==2) {
         b=a[i]; }
     if(c==0)
     y=a[i]; }
 printf("%d\n%d",b,y);
    return 0; }