#include <stdio.h>
int maxindex(int start,int n,int array[]) {
  int m=start;
    for(int i=start;i<n;i++) {
        if(array[m]<array[i])
        m=i; }
  return m; }
void swap(int a,int b,int array[]) {
    int t=array[a];
    array[a]=array[b];
    array[b]=t;
    return; }
void selection_sort(int start,int n,int array[]) {
  if(n>1) {
      int d=maxindex(start,n,array);
       swap(d,start,array);
      selection_sort(start+1,n-1,array); } }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d\n",&a[i]);
   selection_sort(0,n,a);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    if(n%2==1)
    printf("%d",a[n/2+1]);
    else
{float f=(float)(a[n/2]+a[n/2+1]);
    printf("%f",f/2);}
    return 0; }