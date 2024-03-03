#include <stdio.h>
void sort(int a[],int n);
int main() {
   int n,k;
   scanf("%d %d",&n,&k);
   int a[n];
   for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
    sort(a,n);
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; }
void sort(int a[],int n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                int t=a[i];
                a[i]=a[j];
                a[j]=t; } } } }