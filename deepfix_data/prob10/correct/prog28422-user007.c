#include<stdio.h>
int max_s(int a[],int n);
int main() {
   int n,max_sl=0,sl;
   scanf("%d\n",&n);
   int arr[n];
   for(int i=0;i<n;i++)    scanf("%d",&arr[i]);
   for(int j=0;j<n;j++) {
        sl=max_s(arr,j);
        if(sl>=max_sl) max_sl=sl; }
    printf("%d",max_sl);
    return 0; }
int max_s(int a[],int n) {
    int max_int,max=1,rec;
    for(int i=0;i<=n;i++) {
      rec=1;
      max_int=a[i];
      for(int j=i+1;j<=n;j++)
       if(a[j]>max_int) {
           rec++;
           max_int=a[j]; }
      if(rec>=max) max=rec; }
    return max; }