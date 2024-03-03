#include <stdio.h>
void(int a[10000],int a[i],int a[j]) {
    int temp=0;
    temp=a[i];
    a[i]=a[j];
    a[j]=a[i];
    return ; }
int main() {
   int n,k,i,j;
   int a[100000];
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++) {
       for(j=i+1;j<n;j++) {
           if(a[j]>a[i])
           swap(a,a[i],a[j]); } }
   printf("%d",a[k-1]);
    return 0; }