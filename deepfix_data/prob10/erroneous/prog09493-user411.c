#include<stdio.h>
int n,i,j,a[1000],MaxTill[1000],b;
void f()
{   int i,j;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
  { scanf("%d",&a[i]);}
    for(i=0;i<n;i++) {
    for(j=0;j<i;j++) {
     if(a[i]>a[j])
      MaxTill[i] = Max(1+MaxTill[j]);
      else
      MaxTill[i] = 1; } } }
int main() {
     int i;
    k=arr[n-1];
    for(i=1;i<n;i++)
  { arr[n-i]=arr[n-i-1]; }
    arr[0]=k;
    return 0; }