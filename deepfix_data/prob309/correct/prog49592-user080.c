#include <stdio.h>
int main() {
    int i=0;
    int m=0;
  int n,j,k,p,q,l=0;
  scanf("%d\n",&n);
  int a[100];
  int b[100];
  int ch;
  ch=getchar();
  while((i<100)&&(ch!=EOF)) {
      a[i]=ch;
       i=i+1;
      ch=getchar(); }
  for(j=0;j<n;j=j+1) {
      p=0;
      for(k=0;k<n;k=k+1) {
          if(a[j]==a[k]) {
              p=p+1;
              b[j]=p; } } }
  while(l<n)
     { while((m<n)&&(m%2)==0)
         {if(a[l]==b[m]) {
          q=q+1; }
      m=m+1; }
      l=l+1; }
  if(q==(n)) {
      printf("Yes"); }
  else {
      printf("No"); }
    return 0; }