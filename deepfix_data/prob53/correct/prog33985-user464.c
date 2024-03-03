#include<stdio.h>
int dif(int, int a[],int n);
int main() {
    int n,i,a[100000],t,d;
    scanf("%d",&n);
    t=n-1;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    d=dif(1,a,n);
    printf("%d",d);
     return 0; }
int dif(int start,int a[],int n)
{int i;
  if(start==n) return a[0];
    else {
        for(i=start;i<n-2;i++) {
            a[1]=a[2];
            a[2]=a[i+2]; }
        dif(start++,a,n); } }