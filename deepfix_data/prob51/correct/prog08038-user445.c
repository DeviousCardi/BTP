#include <stdio.h>
void swap(int a[10000],int b,int c) {
    int temp=0;
    temp=b;
    b=c;
    c=b;
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