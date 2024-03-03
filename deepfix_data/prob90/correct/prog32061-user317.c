#include <stdio.h>
int main(){
  int k,n,t1,t2,a[n];
  scanf("%d",&k);
  scanf("%d",&n);
  for(int i=0;i<n;i++){
      scanf("%d",&a[i]); }
  for(int i=1;i<k/2+1;i++){
      for(int j=0;j<n;j++){
         if(a[j]==i){
          t1=1;
          break; } }
      for(int j=0;j<n;j++){
          if(a[j]==k-i){
              t2=1;
              break; } }
    if(t1*t2==1)
    break; }
    if(t1*t2==1)
    printf("lucky");
    else
    printf("unlucky");
    return 0; }