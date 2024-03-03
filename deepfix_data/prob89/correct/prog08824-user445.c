#include <stdio.h>
int main(){
       int n=0,k=0,i=0,j=0,p=0;
       int a[n];
       for(i=0;i<n;i++)
       scanf("%d",&a[i]);
       for(i=0;i<n;i++){
           for(j=0;(j<n);j++){
               if(i!=j){
               if(a[i]+a[j]==k){
               printf("lucky");
               p=1;
               break;}} } }
       if(p!=1)
       printf("unlucky");
    return 0; }