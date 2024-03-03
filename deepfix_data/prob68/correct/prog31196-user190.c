#include<stdio.h>
int product(int a[],int n){
    if(n==0){
        return 1; }
    else{
        return a[n-1]*product(a,n-1); } }
int main() {
    int n;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int p=product(a,n);
    printf("%d",p);
    return 0; }