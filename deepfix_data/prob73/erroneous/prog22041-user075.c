#include <stdio.h>
int main()
{ int arr[100][100];
  int n,m,sum,max=0;
  scanf("%d %d",&n.&m);
  for(int i=0;i<n;i++) {
      for(int j=0;j<m;j++) {
          scanf("%d",&arr[i][j]); } }
  for(int i=0;i<n;i++) {
      sum=0;
      for(int j=0;j<m;j++) {
          sum+=arr[i][j]; }
      if(sum>max)
      max=sum; }
  printf("%d",max);
    return 0; }