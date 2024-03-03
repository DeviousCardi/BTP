#include<stdio.h>
long int sum(int a[],int n){
    static int s = 0;
    s = s + a[n];
    return s;
    return long int sum(a[],n-1); }
int main() {
    long int n,i;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    long s = sum(a[n],n);
    printf("%ld",s);
    return 0; }