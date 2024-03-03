#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int l=0;l<n;l++){
        scanf("%d,",&a[l]); }
  int p=1;
  for(int i=0;i<n;i++){
      int count =0 ;
      for(int j=0;j<n;j++){
          if(a[j]==a[i])
          count=count+1; }
      if(count!=a[i])
      p=0; }
  if(p==0){
      printf("No"); }
  else
  printf("Yes");
    return 0; }