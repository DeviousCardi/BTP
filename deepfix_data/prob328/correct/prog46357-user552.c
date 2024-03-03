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
     t[i]=f(i);
     if(t[i]==(n-1)){
             printf("yes\n");
             i++; }
    else{
         printf("no\n"); } }
return 0; }