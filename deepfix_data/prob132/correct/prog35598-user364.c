#include <stdio.h>
int main() {
  int n;
  scanf("%d\n",&n);
  int a[100];
  int ch,count,j,k,i=0;
  ch=getchar();
  while(i!=n) {
      if(ch==',') {
          continue; }
        else {
          a[i]=ch; }
      i=i+1;
  if(i!=n){ch=getchar();} }
   for(j=0;j<n;j++) {
       count=0;
       for(k=0;k<n;k++) {
           if(a[j]==a[k]) {
               count=count+1; } }
    if(a[j]!=count) {
        printf("No");
        return 0; } }
  if(j==n){ printf("Yes");}
       return 0; }