#include <stdio.h>
#include<string.h>
int main() {
  int n,m,a[100],freq[100],i,j,d=0;
  scanf("%d",&n);
  scanf("%s",a);
 for(i=0;i<2*n-1;i++){
     m=0;
     if(a[i]==','){
         continue; }
  for(j=0;j<2*n-1;j++){
      if(a[i]==a[j]&&a[j]!=','){
         m++; } }
  freq[i]=m; }
  for(i=0;i<2*n-1;i++){
      if(a[i]==freq[i]){
          d=1;
          break; } }
  if(d==1){
      printf("Yes"); }
  else{
      printf("No"); }
    return 0; }