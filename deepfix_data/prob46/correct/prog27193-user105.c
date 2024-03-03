#include <stdio.h>
int main(){
 int n;
 int m;
 int i=2;
 int q=0;
 scanf("%d %d",&m,&n);
 for(;i<=n-1;) {
     if(n%i==0){
         i++;
         q++;
         break; }
     else{
         i++;
         break; } }
     if(q==m){
         printf("yes"); }
     else{
         printf("no"); }
    return 0; }