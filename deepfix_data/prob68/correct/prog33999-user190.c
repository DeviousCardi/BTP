#include<stdio.h>
long int product(long int a[],long int n){
    if(n==0){
        return 1; }
    else{
        return a[n-1]*product(a,n-1); } }
int main() {
    long int n;
    scanf("%ld",&n);
    int i;
    long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    long int p=product(a,n);
    printf("%ld",p);
    return 0; }