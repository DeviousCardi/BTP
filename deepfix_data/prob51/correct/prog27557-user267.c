#include <stdio.h>
int main() {
int n,k,i,j,temp=0,max=0;
scanf("%d %d",&n,&k);
int a[n];
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
for(i=0;i<n;i++) {
    max=i;
    for(j=i+1;j<n;j++) {
        if(a[j]<a[max]) max=j; }
    temp=a[i];
    a[i]=a[max];
    a[max]=temp; }
for(i=0;i<n;i++)
printf("%d",a[i]);
    return 0; }