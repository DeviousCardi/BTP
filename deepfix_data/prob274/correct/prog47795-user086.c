#include <stdio.h>
int main(){
    int n,j=0,b[100],a[100],t,i,k;
    scanf("%d\n",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
   i=0;
   while(j<n) {
       b[i]=j+1;
       b[i+1]=a[j];
       j++;
       i+=2; }
   t=0;
   i=2;
   while(i<2*n) {
       t++;
       i++;
       if(b[1]==b[i]&&b[i]!=b[i+1]&&b[i]!=b[i-1]);
       {t++;
         break; } }
   k=t-1;
   printf("%d %d",t,k);
    return 0; }