#include<stdio.h>
int max(int a,int b) {
    if(a>b)return a;
    else return b; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)b[i]=1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=1;i<n;i++) {
         for(int j=0;j<i;i++) {
             if(a[i]>a[j])
             b[i]=max(b[i],b[j]+1); } }
         int x=b[0];
        for(int i=0;i<n;i++)x=max(x,b[i]);
        printf("%d",x);
    return 0; }