#include <stdio.h>
int main() {
  int n;
  scanf("%d",&n);
  int a[100];
  int ch,count,i=0;
  ch=getchar();
  while(i!=n) {
      if(ch==',') {
          continue; }
        else {
          a[i]=ch; }
      i=i+1; }
   for(i=0;i<n;i++) {
       count=0;
       for(j=0;j<n;j++) {
           if(a[i]==a[j]) {
               count=count+1; } }
   if(a[i]!=count) {
        printf("No");
        retutn 0; } }
   printf("Yes");
       return 0; }