#include<stdio.h>
int arr[100];
int main()
{int n,k,i,j;
  scanf("%d\n%d",&n,&k);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(j=0;j<k;j++){
      for(k=0;k<j+2;k++)
      printf("%d",arr[k]);
    return 0; } }