#include <stdio.h>
int a[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    for(int i=0;i<100;i++) {
       for(int j=i+1;j<100;j++) {
           if(a[i]<a[j]) {
               int x=a[i];
               a[i]=a[j];
               a[j]=x; } } }
    for(int i=0;i<100;i++) {
        if(upperLimit==a[i])
        return a[i+1]; } }
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(int i=0;i<100;i++) {
       for(int j=i+1;j<100;j++) {
           if(a[i]<a[j]) {
               int x=a[i];
               a[i]=a[j];
               a[j]=x; } } }
    int m=a[0];
    for(int i=0;i<k;i++) {
        printf("%d ",m);
        m=getMaxLessThan(m); }
    return 0; }