#include<stdio.h>
int sum(int a[],int n,int i){
    if(i==n)
    return 0;
    else
    return a[i]+sum(a,i-1,n); }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    printf("%d",sum(a,n,i));
    return 0; }