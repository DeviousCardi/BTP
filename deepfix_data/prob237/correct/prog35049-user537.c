#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int count =0;
    for(int i=l;i<l+r;i++){
        for(int j=i+1;j<r+l;j++)
        if(arr[j]<arr[i])
        count++; }
    printf("%d\n",count);
    return count; }
int main() {
  int n,i,s,j;
  scanf("%d %d",&n,&s);
  int b[n-s+1];
  for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  for(j=0;j<n-s+1;j++)
  b[j]=getInversions(j,s);
  int max=b[0];
  for(int k=0;k<n-s+1;k++){
        if(b[k]>max)
        max=b[k]; }
  printf("%d ",max);
  return 0; }