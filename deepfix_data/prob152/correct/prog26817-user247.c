#include <stdio.h>
int sum(int a[],int n,int i,int k){
    if(i==n){
        return k; }
    k=k+a[i];
    return sum(a,n,i+1,k); }
int main() {
    int n,i,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    k=sum(a,n,0,0);
    return 0; }