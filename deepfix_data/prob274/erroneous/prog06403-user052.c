#include <stdio.h>
int main(){
    int n,a[101],b[101],t=1,k=0,i;
    scanf("%d ",&n);
    for(i=1;i<=n;i++)
     scanf("%d",&a[i]);
    b[0]=1;
    for(i=1;i<n;i++) {
        b[i]=a[b[i-1]]; }
     for(i=0;i<n;i++) {
         if(b[i+1]!=b[i]) {
             break; }
          t++;} }
     for(i=1;i<n;i++) {
         k++
         if(b[1]==b[i+1])
          break; }
     printf("%d %d",t,k);
    return 0; }