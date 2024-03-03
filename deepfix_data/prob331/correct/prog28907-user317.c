#include <stdio.h>
int main(){
 int n,flag1=0,flag2=0;
 scanf("%d",&n);
 int a[n][n];
 for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
         scanf("%d ",&a[i][j]); } }
  for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
      if(i==j){
          if(a[i][j]==1)
          flag1=1;
          else
          flag1=0; }
      if(i!=j){
          if(a[i][j]==0)
          flag2=1;
          else
          flag2=0; } } }
 if(flag1==1 && flag2==1){
     printf("GIVEN %dX%d matrix is an IDENTITY MATRIX",n,n); }
 else
 printf("GIVEN %dX%d matrix is NOT an IDENTITY MATRIX",n,n);
  return 0; }