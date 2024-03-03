#include<stdio.h>
int sum(int a[], int n, int s){
    if (n==1){
            return(s+a[n-1]); }
    s=s+a[n-1];
    return(sum(a[n-1],n-1,s)); }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]); }
    int su=sum(a[n],n,0);
    printf("%d",su);
    return 0; }