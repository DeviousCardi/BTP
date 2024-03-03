#include <stdio.h>
int main() {
 int n,a[100],c=0,b=0,y=0;
 scanf("%d",&n);
 for(int i=0;i<n;i++) {
     scanf("%d",&a[i]); }
 for(int x=1;x<=n;x++) {
     c=0;
     for(int i=0;i<n;i++) {
         if(x==a[i])
         c++; }
     if(c==2) {
         b=a[i]; }
     if(c==0)
     y=a[i]; }
 printf("%d\n",b);
 printf("%d",y);
    return 0; }