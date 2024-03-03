#include <stdio.h>
int main(){
    int n;
scanf("%d",&n);
  int s[n];
  for (int i=0;i<n;i++){
      scanf("%d",&s[i]); }
  int d;
  scanf("%d",&d);
   int k;
  for(k=n-d;k<n;k++){
       printf("%d ",k); }
  for (int l=0;l<n-d;l++){
   printf("%d ",s[l]); }
    return 0; }