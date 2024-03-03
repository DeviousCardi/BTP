#include <stdio.h>
void rot(int a[],int n);
int main() {
    int n,d;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=0;i<n;i++)    scanf("%d",&arr[i]);
    for(int j=0;j<d;j++)    rot(&arr,n);
    for(int k=0;k<n;k++)    printf("%d",arr[k]);
    return 0; }
void rot(int a[],int n) {
  int temp;
  temp=a[n];
    for(int i=n;i>0;i--)    a[n]=a[n-1];
  a[0]=temp; }