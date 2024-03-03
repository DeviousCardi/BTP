#include <stdio.h>
int swap(int a[],int i,int j) {
    int t;
    t=a[i];
    a[i]=a[j];
    a[j]=t; }
int max(int a[],int start,int end) {
    int i,max=0,m;
    for(i=start;i<=end;i++) {
        if(a[i]>max) {
            max=a[i];
            m=i; } }
    return m; }
void sort(int a[],int start,int end) {
    if(start>=end)
    return;
    int j;
    j=max(a,start,end);
    swap(a,start,j);
    sort(a,start+1,end); }
int main() {
   int n,k,i,j;
   scanf("%d %d",&n,&k);
   int a[n+1];
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
  sort(a,0,n-1);
  printf("%d",a[k-1]);
    return 0; }