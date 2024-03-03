#include <stdio.h>
#include<string.h>
int main() {
  int n,m,a[100],freq[100],i,j,d=0;
  scanf("%d",&n);
  scanf("%s",a);
 for(i=0;i<n;i++){
     m=0;
  for(j=0;j<n;j++){
      if(a[i]==a[j]){
         m++; } }
  freq[i]=m; }
  for(i=0;i<n;i++){
      if(a[i]!=freq[i]){
          d=1;
          break; } }
  if(d==1){
      printf("No"); }
  else{
      printf("Yes"); }
    return 0; }