#include<stdio.h>
int max(int f,int n,int a[])
{int i,count=0;
    for(i=f;i<n;i++) {
        for(j=0;j<n;j++) {
            if(a[j]>a[i]) {
                a[i]=a[j];
                count=count+1; } } }
    return count; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d "&a[i]);
   for(i=0;i<n;i++) {
       b[i]=max(i,n,a);
       printf("%d",b[i]); }
    return 0; }