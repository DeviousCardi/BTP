#include <stdio.h>
#include<stdlib.h>
int main() {
  int n,t;
  scanf("%d\n",&n);
  int a[n];
  for(int i=0;i<n;i++){
      scanf("%d,",&t);
      a[t]++; }
  for(int i=0;i<=n;i++){
      if(a[t]!=t){
          printf("No");
          exit(0); }
      printf("*"); }
 printf("Yes");
    return 0; }