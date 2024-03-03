#include<stdio.h>
int prd(int a[],int n) {
    if(n==1){
    return a[0];}
    if(n>1){
    return a[n-1]*prd(a,n-1);} }
int main() {
    int a[1000000000],n;
    scanf("%d",&n);
    scanf("%d",&a);
    printf("%d",prd(a,n));
    return 0; }