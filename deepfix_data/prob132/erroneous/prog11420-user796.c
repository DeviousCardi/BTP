#include <stdio.h>
#include<string.h>
int main() {
  int n,m,a[100],freq[100],i,j;
  scanf("%d",&n);
  scanf("%s",a);
 for(i=0;i<n;i++){
     m=1;
  for(j=i+1;j<n;j++){
      if(a[i]==a[j]){
         m++; } }
  freq[i]=m; }
  for(i=0;i<n;i++){
      if(a[i]==freq[i]){
          d=1; } }
  if(d==1){
      printf("yes"); }
  else{
      printf("no"); }
    return 0; }