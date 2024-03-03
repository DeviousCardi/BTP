#include<stdio.h>
int arr[100];
int getInversions(int l,int r){
    int j,k,a[100];
    for(j=0;j<l;j++){
        for(k=j;k<=r+j;k++)
        if(arr[k]==arr[l-1]){
        a[j]=arr[k];
        return 0; }
       else
      a[j]=arr[k]; }
  for(int i=0;i<r*(l-2);i++)
  printf("%d",a[i]);
  return 0; }
int main()
{int n,k,i,j,s;
  scanf("%d %d",&n,&s);
   for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  getInversions(n,s);
  return 0; }