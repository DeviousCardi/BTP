#include<stdio.h>
int arr[100];
int getInversions(int l,int r) {
    int k,n,i,,jc=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)  {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++)
    {     for(j=i+1;j<n;j++)
      getInversions(int arr[i],int arr[j]);
          c++; } }
int main() {
    return 0; }