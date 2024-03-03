#include<stdio.h>
int arr[100];
int getInversions(int l,int r){
    int a[100],i;
    for(i=0;i<100;i++)
    a[i]=0;
    for(int i=0;i<l-r+1;i++){
        for(int j=i;j<r+i;j++)
        if(i<j&&arr[j]>arr[i])
        a[i]++;
        printf("%d ",a[i]); }
    int max=a[0];
    for(int k=0;k<l-r+1;k++){
        if(a[k]>max)
        max=a[k]; }
    return 0; }
int main()
{int n,i,s;
  scanf("%d %d",&n,&s);
   for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
  getInversions(n,s);
  return 0; }