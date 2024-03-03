#include<stdio.h>
int max(int f,int n,int a[])
{int i=f,count=0,j;
        for(j=i;j<n;j++) {
            if(a[j]>=a[i]) {
                a[i]=a[j];
                count=count+1; } }
    return count; }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
   for(i=0;i<n;i++) {
       b[i]=max(i,n,a);
       printf("%d ",b[i]); }
   int m=b[0];
   for(i=0;i<n;i++) {
       if(b[i]>=m)
       m=b[i]; }
   printf("%d",m);
    return 0; }