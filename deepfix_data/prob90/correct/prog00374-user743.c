#include <stdio.h>
int main(){
int k,n,count=0,p=0,q=0;
scanf("%d %d",&k,&n);
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
for(int i=0;i<count;i++) {
    int l=0;
    l=k-i;
    for(int j=0;j<count;j++) {
        if(l==a[j]){p=p+1;}
        if(i==a[j]){q=q+1;} }
    if((p!=0)&&(q!=0)){printf("lucky");} }
if((p==0)&&(q==0)){printf("unlucky");}
    return 0; }