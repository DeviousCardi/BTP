#include <stdio.h>
int main(){
    int n,j=0,b[100],a[100],t,i,k;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
  i=1;
   while(i<n) {
       if(a[i]==a[1]&&i+1==a[1]&&i!=1)
       break;
       t++;
       i++; }
   k=t-1;
   printf("%d %d",t,k);
   i=0;
   while(i<n) {
       if(a[i]==a[1]&&i==a[1];
       break;
       t++;
       i++; }
    return 0; }