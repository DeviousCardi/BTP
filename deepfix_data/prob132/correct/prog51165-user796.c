#include <stdio.h>
#include<string.h>
int main() {
  int n,m,a[100],freq[100],i,j,d=0;
  scanf("%d",&n);
  scanf("%s",a);
 for(i=0;i<2*n-1&&a[i]!=',';i++){
     m=0;
    for(j=0;j<2*n-1&&a[j]!=',';j++){
      if(a[i]==a[j]) {
         m++; } }
  freq[i]=m; }
for(i=0;i<2*n-1&&a[i]!=',';i++){
      if(a[i]==freq[i]){
          d=1;
         i++; } }
  if(d==1){
      printf("Yes"); }
  else{
      printf("No"); }
    return 0; }