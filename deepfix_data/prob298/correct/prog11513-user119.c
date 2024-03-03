#include <stdio.h>
#include <stdlib.h>
int term(int n) { }
int search(int k,int n) {
    if(k<term(n))
    return 0;
    if(k==term(n))
    return 1;
    return search(k,n+1); }
int main(){
   int t,k,i,n=1;
   scanf("%d",&t);
   for(i=1;i<=t;i++) {
       scanf("%d",&k);
       if(search(k,n))
       printf("yes\n");
       else
       printf("no\n"); }
   return 0; }