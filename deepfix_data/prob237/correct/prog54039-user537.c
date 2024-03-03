#include<stdio.h>
int arr[100];
int main()
{int n,k,i,j,s;
  scanf("%d\n%d",&n,&s);
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(j=0;j<n;j++){
      for(k=j;k<=j+2;k++)
      if(arr[k]==arr[n-1]){
      printf("%d",arr[n-1]);
      return 0; }
      else
      printf("%d ",arr[k]); }
return 0; }