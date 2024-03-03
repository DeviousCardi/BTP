#include<stdio.h>
int dif(int, int a[],int n);
int main() {
    int n,i,a[100000],t,d;
    scanf("%d",&n);
    t=n-1;
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    d=dif(1,a,n);
    printf("%d",d);
     return 0; }
int dif(int start,int a[],int n)
{int i;
  if(start==n-1) return a[0];
    else {
        a[0]=a[0]-a[1];
        for(i=start;i<n;i++) {
            a[i]=a[i+1]; }
        dif(start++,a,n); } }