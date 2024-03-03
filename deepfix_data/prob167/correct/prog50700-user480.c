#include<stdio.h>
int sum(int n,int a[n]) {
    int s=0;
    if(n==0)
    return a[0];
    if(n>0){
        s=s+a[n-1];
        return sum(n-1,a); } }
int main() {
    int n,i,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    s=sum(n,a);
    printf("%d",s);
    return 0; }