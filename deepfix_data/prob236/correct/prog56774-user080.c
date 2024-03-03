#include <stdio.h>
int main(){
  int n,i,j,str1[100],dest[100],value[100];
  scanf("%d",&n);
  for(i=0;i<n;i=i+1) {
      scanf("%d",&str1[i]);
      scanf("%d",&value[i]);
      dest[value[i]]==str1[i];
      printf("%d",dest[value[i]]); }
    printf(" end");
    return 0; }