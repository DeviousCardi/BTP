#include<stdio.h>
int max(int,int);
int main() {
    int n;
    int a[n],lis[n];int c=0,l=0;
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        lis[i]=1;
        for(int j=0;j<i;j+=1) {
            if(a[j]<a[i])
            lis[i]=lis[j]+1;
            c=max(c,lis[i]); }
        l=max(l,c); }
  printf("%d",l);
    return 0; }
int max(int a,int b) {
    int e=(a>b?a:b);
    return e; }