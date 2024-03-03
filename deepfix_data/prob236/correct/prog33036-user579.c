#include <stdio.h>
int main(){
int j,n,i,b[100],a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(j=0;j<n;j++)
scanf("%d",&b[i]);
for(i=0;i<n;i++) {
for(j=0;j<n;j++) {
    if(i==b[j]) {
        a[i]=a[b[j]];
    printf("%d ",a[i]); } } }
printf("end");
    return 0; }