#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (f(n-1)+f(n-2)); }
int main(){
 int i=0,j=0,n;
 scanf("%d",&n);
 int t[n];
 for(i=0;i<n;i++){
  scanf("%d",&t[i]); }
 for(j=0;j<n;j++){
    i=0;
     t[i]=f(i);
     if(t[i]==n){
             printf("yes\n"); }
         i++;
         break; }
     if(t[i]!=n){
         printf("no\n"); }
return 0; }