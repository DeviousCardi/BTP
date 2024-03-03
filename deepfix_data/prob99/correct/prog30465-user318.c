#include<stdio.h>
int main() {
    int n,c,x;
    scanf("%d",&n);
    int a[n],b[n-1];
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        c=1;
        for(int j=0;j<n;j++)
        if(a[0]<a[j])c=c+1;
        b[i]=c; }
      for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
        if(b[i]<b[j]) {
          x=b[j];
          b[j]=b[i];
          b[i]=x; } } }
    printf("%d",b[0]);
    return 0; }