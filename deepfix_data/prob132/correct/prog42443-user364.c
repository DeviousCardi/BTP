#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int a[1000];
  int ch,count,j,k,i=0;
  ch=getchar();
  while(i!=n) {
      if(ch==','||ch==' '||ch=='\n')
      {ch=getchar();
          continue; }
        else {
          a[i]=ch-'0';
          i=i+1; }
     if(i!=n){ ch=getchar();} }
   for(j=0;j<n;j++) {
       count=0;
       for(k=0;k<n;k++) {
           if(a[j]==a[k]) {
               count=count+1; } }
       if(a[j]!=count) {
        printf("No");
        return 0; } }
  printf("Yes");
   return 0; }