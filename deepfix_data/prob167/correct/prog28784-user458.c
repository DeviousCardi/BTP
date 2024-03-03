#include<stdio.h>
int sum(int n,int a[]){
    if(n==0)
    return 0;
    else
return a[n-1]+sum(n-1,a); }
int main() {
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    return 0; }