#include <stdio.h>
void rot(int a[],int n);
int main() {
    int n,d;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)    scanf("%d",&arr[i]);
    scanf("\n%d",&d);
    for(int j=0;j<d;j++)    rot(arr,n);
    for(int k=0;k<n;k++)    printf("%d ",arr[k]);
    return 0; }
void rot(int a[],int c) {
  int temp=a[c-1];
  for(int i=c-1;i>0;i--)    a[i]=a[i- 1];
  a[0]=temp; }