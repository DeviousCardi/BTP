#include <stdio.h>
int main(){
  int n,i,j,str1[100],dest[100],value[100];
  scanf("%d",&n);
  for(i=0;i<n;i=i+1) {
      scanf("%d\n",&str1[i]);
      scanf("%d",&value[i]); }
      j=value[i];
      dest[j]=str1[i];
      printf("%d",dest[j]);
    printf(" end");
    return 0; }