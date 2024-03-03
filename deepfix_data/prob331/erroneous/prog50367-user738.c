#include <stdio.h>
int main(){
 int n,count=0;
     scanf("%d",&n);
     for(i=0;i<n;i++) {
         for(j=0;j<n;j++) {
             scanf("%d",a);
             if(a==1 && i=j) {
                 count++; }
             else if(a==0 && i!=j) {
                 count++; } } }
     printf("%d",count);
    return 0; }