#include <stdio.h>
int main()
{int n,k;
scanf("%d%d\n",&n,&k);
int a[n];
  for(int i=0;i<n;i++){
      scanf("%d",&a[i]); }
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(a[j]>a[i]){
              int k;
              a[i]=k;
              a[i]=a[j];
              a[j]=k; } } }
  for(int i=0;i<n;i++){
      printf("%d ",a[i]); }
    return 0; }