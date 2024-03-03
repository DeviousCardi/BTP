#include <stdio.h>
#include<string.h>
int main() {
  int n,f=1,l=0;
  scanf("%d\n",&n);
  int a[n];
  for(int i=0;i<n;i++){
      scanf("%d,",&a[i]); }
  for(int i=0;i<n;i++){
      l=0;
      for(int j=0;j<n;j++) {
          if(a[j]==a[i]){
              l++; } }
      if(a[i]==l){
          f=1; }
      else{
          f=0; }
      if(f==0){
          printf("No");
          return 0; } }
printf("Yes");
return 0; }