#include <stdio.h>
int main(){
 int n;
 int m;
 int i=2;
 int q;
 scanf("%d %d",&m,&n);
 for (q=0;i<=n-1;) {
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