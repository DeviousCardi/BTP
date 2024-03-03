#include <stdio.h>
int main() {
    int i=0;
  int n,j,k,p,l,q;
  scanf("%d",&n);
  int a[n];
  int b[n];
  char ch;
  ch=getchar();
  while((i<n)&&(ch!=',')) {
      a[i]=ch;
      ch=getchar();
      i=i+1;
      printf("%c",a[i]); }
  for(j=0;j<n;j=j+1) {
      p=0;
      for(k=0;k<n;k=k+1) {
          if(a[j]==a[k]) {
              p=p+1;
              b[j]=p; } } }
  for(l=0;l<n;l=l+1) {
      if(a[l]==b[l]) {
          q=q+1; } }
  if(q==(n)) {
      printf("Yes"); }
  else {
      printf("No"); }
    return 0; }