#include <stdio.h>
int main() {
   long int n,k,a[100000],b[100000],j,i;
   scanf("%ld%ld",&n,&k);
   for(i=0;i<n;i++){
       scanf("%ld",a+i); }
   for(i=0;i<n;i++){
       b[i]=n; }
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           if(a[j]<a[i])
                b[i]--;
            if(a[j]==a[i]&&j>i)
                b[i]--; } }
   for(i=0;i<n;i++){
       if(b[i]==k)
       printf("%ld",a[i]); }
    return 0; }