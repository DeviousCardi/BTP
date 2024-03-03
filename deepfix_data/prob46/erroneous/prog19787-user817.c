#include <stdio.h>
int main(){
    int n,i,m,k=0;
    scanf("%d",&m);
    scanf("%d",&n);
  for(i=1;i<=n;i++){
      if(n%i==0)
          k++; }
  if(k-2==m) {
      printf("YES") }
  else {
      printf("NO"); }
            return 0; }