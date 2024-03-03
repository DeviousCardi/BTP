#include <stdio.h>
void rot(int a[],int n);
int main() {
    int n,d;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)    scanf("%d",&arr[i]);
    for(int j=0;j<d;j++)    rot(&arr,n);
    for(int k=0;k<n;k++)    printf("%d ",arr[k]);
    return 0; }
int rot(int a[],int c) {
  int temp;
  temp=a[c];
    for(int i=c;i>0;i--)    a[c]=a[c-1];
  a[0]=temp;
  return a[]; }