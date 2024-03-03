#include <stdio.h>
int main(){
     int k,n,num[1000],i,sum;
     scanf("%d\n",&k);
     scanf("%d\n",&n);
     for(i=0;i<n;i++) {
         scanf("%d",&num[i]); }
     for(i=0;i<n;i++) {
         for(j=i+1;j<n;j++) {
             sum=num[i]+num[j];
             if(sum==k) {
                 break; } } }
     if(sum==k) {
         printf("lucky"); }
     else {
         printf("unlucky"); }
    return 0; }