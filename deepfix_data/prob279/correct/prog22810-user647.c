#include <stdio.h>
int main() {
  int n,i,j,miss,rep;
  scanf("%d  \n",&n);
  int a[n];
  int b[n+1];
  for(i=0;i<(n+1);i++){
      b[i]=0; }
  for(i=0;i<n;i++){
      scanf("%d ",&a[i]);
      b[a[i]]=b[a[i]]+1; }
  for(j=0;j<(n+1);j++){
      if(b[j]==0){
          miss=j; }
      if(b[j]==2){
          rep=j; } }
  printf("%d\n",rep);
  printf("%d",miss);
    return 0; }