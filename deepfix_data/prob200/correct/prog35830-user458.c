#include <stdio.h>
int main()
{int n,k;
scanf("%d%d\n",&n,&k);
int a[n];
  for(int i=0;i<n;i++){
      scanf("%d",&a[i]); }
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          if(a[j]<a[i]){
              int k;
              a[j]=k;
              a[j]=a[i];
              a[i]=k; } } }
  for(int i=n-1;i>n-k-1;i--){
      printf("%d\n",a[i]); }
    return 0; }