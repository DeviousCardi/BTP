#include<stdio.h>
int dif(int a[],int n);
int main() {
    int n,i,a[100000],t,d;
    scanf("%d",&n);
    t=n-1;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    while (i>=n&&i<100000){a[i]=0;i++;}
    d=dif(a,n);
    printf("%d",d);
     return 0; }
int dif(int a[],int n)
{int i;
  if(n==1) return a[0];
    else {
        a[0]=a[0]-a[1];
        for(i=1;i<n;i++) {
            a[i]=a[i+1]; }
        for(i=0;i<n;i++)
        printf("%d",a[i]);
        dif(a,n-1); } }