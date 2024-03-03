#include<stdio.h>
int arr[100];
int main()
{int n,k,i,j,s;
  scanf("%d\n%d",&n,&s);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(j=0;j<n;j++){
      for(k=0;k<s;k++)
      printf("%d ",arr[k]);
    return 0; } }