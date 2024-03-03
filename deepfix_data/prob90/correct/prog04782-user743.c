#include <stdio.h>
int main(){
int k,n,count=0,l=0;
scanf("%d",&k);
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++) {
    scanf("%d",&a[i]); }
for(int i=0;i<n;i++) {
    for(int j=0;j<n;j++) {
        if(a[j]>=a[i]&&a[j]<k) {
            int t=a[i];
            a[i]=a[j];
            a[j]=t; } } }
for(int i=0;i<n;i++) {
    if(a[i]<k)count=count+1; }
for(int i=0;i<(count-1);i++) {
    for(int j=i+1;j<count;j++) {
        if((a[i]+a[j])==k) {
        l=l+1;printf("lucky");break; }
        if(l==1)break; } }
if(l==0)printf("unlucky");
    return 0; }