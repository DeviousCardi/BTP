#include <stdio.h>
int main()
{int n,k,tmp,i,j;
scanf("%d %d",&n,&k);
int a[n];
for(i=0;i<n;i++) {
    scanf("%d ",&a[i]); }
for(i=0;i<n;i++) {
    for(j=i;j<n;j++) {
        if(a[i]<a[j]) {
            tmp=a[i];
            a[i]=a[j];
            a[j]=tmp; } } }
for(i=0;i<n;i++) {
    printf("%d ",a[i]); }
    return 0; }