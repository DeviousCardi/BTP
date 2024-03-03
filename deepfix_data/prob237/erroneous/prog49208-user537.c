#include<stdio.h>
int arr[100];
int getInversions(int l,int r){
    int count =0;
    for(int i=l;i<l+r;i++){
        for(int j=i+1;j<r+l;j++)
        if(arr[j]<arr[i])
        count++; }
    return count; }
int main()
{int n,i,s;
  scanf("%d %d",&n,&s);
  int b[n-s+1];
   for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(j=0;j<n-s+1;j++)
  b[j]=getInversions(j,j+s-1);
  int max=a[0];
    for(int k=0;k<l-r+1;k++){
        if(a[k]>max)
        max=a[k]; }
    printf("\n%d ",max);
  return 0; }