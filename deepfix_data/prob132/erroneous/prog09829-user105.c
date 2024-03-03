#include <stdio.h>
int main() {
  int n,p,count,j;
  int a[100];
  scanf("%d ",&n);
  for(i=0;i<n;i++){
      scanf("%d ",&p);
      a[i]=p; }
  for(i=0;i<n;i++){
      for(j=0,count=0;j<n;j++){
          if(a[i]==a[j])
          count=count+1 }
      if(a[i]==count)
      printf("YES"); }
    return 0; }