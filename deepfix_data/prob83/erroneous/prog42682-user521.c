#include <stdio.h>
int rrotate(int t[],int b) {
    int count=0;
    int e;
    while(count<n) {
        t[count+b]=t[count];
        e=t[count+b]; }
    return e; }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
         scanf("%d",&a[i]); }
     int d;
     scanf("%d",&d);
     for(i=0;i<n;i++) {
         a[i+d]=rrotate(a[i],d); }
     for(i=0;i<n;i++) {
         printf("%d ",a[i];) }
    return 0; }