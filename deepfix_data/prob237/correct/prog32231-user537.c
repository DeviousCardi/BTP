#include<stdio.h>
int arr[100];
int getInversions(int l,int r){
    int count=0,a[100];
    for(int i=0;i<l;i++){
        for(int j=0;j<r;j++)
        if(i<j&&arr[j]>arr[i])
        a[i]++; }
    int max=a[0];
    for(int k=0;k<l-r+1;k++){
        if(a[k]>max)
        max=a[k]; }
    printf("%d",max);
    return 0; }
int main()
{int n,i,s;
  scanf("%d %d",&n,&s);
   for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  getInversions(n,s);
  return 0; }