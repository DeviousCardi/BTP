#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int a[100];
  int ch,count,j,k,i=0;
  ch=getchar();
  while(i!=n) {
      if(ch==',')
      {ch=getchar();
          continue; }
        else {
          a[i]=ch;
          i=i+1; }
     if(i!=n){ ch=getchar();} }
  for(i=0;i<n;i++) {
      printf("%d ",a[i]); }
   return 0; }