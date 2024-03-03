#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int l=0;l<n;l++){
        scanf("%d",&a[l]); }
  int p=1;
  for(int i=0;i<n;i++){
      int k = a[i] ;
      int count =0 ;
      for(int j=0;j<n;j++){
          if(a[j]==k)
          count=count+1; }
      if(count!=k)
      p=0; }
    return 0; }