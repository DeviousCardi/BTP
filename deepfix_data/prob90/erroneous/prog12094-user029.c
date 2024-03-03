#include <stdio.h>
int main(){
   int n,k,t,c=0;
   scanf("%d",&k);
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
 {  scanf("%d",&a[i]);}
   for(int x=0;x<n;x++) {
       for(int y=i;y<n;y++) {
          t=a[x]+a[y];
          if(t==k) {
              c=1; } } }
   if(c==1) {
       printf("lucky"); }
   else
   printf("unlucky");
    return 0; }