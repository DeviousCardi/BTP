#include<stdio.h>
int max(int a,int b) {
    if(a>b)return a;
    else return b; }
int main() {
    int n,x;
    scanf("%d",&n);
    int a[n],b[n];b[0]=1;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[j]>a[i])b[j]=max(b[i],1); } }
    printf("%d",b[n]);
    return 0; }