#include <stdio.h>
int main() {
    int i=0;
  int n,j,k,p,q,l=0;
  scanf("%d\n",&n);
  int a[n];
  int b[n];
  int ch;
  ch=getchar();
  while((i<n)&&(ch!=EOF)) {
      a[i]=ch;
       i=i+1;
      ch=getchar(); }
  for(j=0;j<n;j=j+1) {
      p=0;
      for(k=0;k<n;k=k+1) {
          if(a[j]==a[k]) {
              p=p+1;
              b[j]=p; } } }
  while((l<n)&&(l%2)!=0)
     { if(a[l]==b[l]) {
          q=q+1; }
      l=l+1;}
  if(q==(n)) {
      printf("Yes"); }
  else {
      printf("No"); }
    return 0; }