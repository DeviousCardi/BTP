#include <stdio.h>
int main() {
  int n,i,j,k,l,b,m,c;
  scanf("%d,",&n);
  int a[n];
  b=1;
  for(i=0;i<n;i++){
      scanf("%d",&a[i]); }
  int sum[n];
  for(j=0;j<n;j++){
      sum[j]=1;
      sum[k]=1;
      c=1;
      if(j>0){
          for(m=j-1;m>=0;m--){
              if(a[j]==a[m]){
                  c=0;
                  break; } } }
      if(c==1){
      for(k=j+1;k<n-1;k++){
          if(a[j]==a[k]){
              sum[j]=sum[j]+1;
              sum[k]=sum[k]+1; } } }
  for(l=0;l<n;l++){
      if(a[l]!=sum[l]){
          b=0;
          break; } }
  if(b==0) printf("No");
  else printf("Yes");
    return 0; }