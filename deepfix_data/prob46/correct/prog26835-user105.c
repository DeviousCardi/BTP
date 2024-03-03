#include <stdio.h>
int main(){
 int n;
 int m;
 int i;
 int q;
 scanf("%d %d",&m,&n);
 for(i=2,q=0;i<n;i++) {
     if(n%i==0){
        q=q+1;
         break; }
     else{
         break; } }
     if(q==m){
         printf("yes"); }
     else{
         printf("no"); }
    return 0; }