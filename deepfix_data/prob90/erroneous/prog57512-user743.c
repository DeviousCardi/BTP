#include <stdio.h>
int main(){
int k,n,count=0;
scanf("%d %d",&k,&n);
int a[n];
scanf(int i=0;i<n;i++) {
    scanf("%d",&a[i]); }
for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
        if(a[j]>=a[i]&&a[j]<k) {
            int t=a[i];
            a[i]=a[j];
            a[j]=t; } } }
for(int i=0;i<n;i++) {
    if(a[i]<k)count=count+1; }
printf("%d",count);
    return 0; }