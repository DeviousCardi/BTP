#include<stdio.h>
int sum(int n,int a[n]) {
    int s=0;
    if(n==0)
    return s;
    if(n>0){
        s=s+a[n-1];
        return sum(n,a[n-1]); } }
int main() {
    int n,i,sum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    return 0; }