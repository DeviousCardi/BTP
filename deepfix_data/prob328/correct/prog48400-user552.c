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
 int t[100];
 for(i=0;i<n;i++){
  scanf("%d",&t[i]); }
 int a[25];
 for(i=0;i<25;i++){
     a[i]=f(i); }
 if(t[i]==a[i]){
     printf("yes\n"); }
 else{
     printf("no\n"); }
return 0; }