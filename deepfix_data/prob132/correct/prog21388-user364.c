#include <stdio.h>
int main() {
  int n;
  scanf("%d ",&n);
  int a[100];
  int ch;
  int count;
  int j,k,i=0;
  ch=getchar();
  while(i!=n) {
      if(ch==',') {
          continue; }
        else {
          a[i]=ch; }
      i=i+1;
      ch=getchar(); }
  for(i=0;i<n;i++)
  printf("%d",a[i]);
   return 0; }