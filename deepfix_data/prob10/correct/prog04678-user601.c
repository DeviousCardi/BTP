#include<stdio.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
   int n,i,j,count=1,k=0;
   int a[20];
   int b[20];
   scanf("%d\n",&n);
   for(i=0;i<n;i++) {
       scanf("%d",&a[i]); }
   for(i=1;i<n;i++) {
        if(a[0]>a[i]) {
           count++;
           a[0]=a[i]; } }
   printf("%d",count);
    return 0; }