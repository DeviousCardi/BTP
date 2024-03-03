#include<stdio.h>
long int sum(long int a[],int n){
    static int s = 0;
    if(n==0) return 0;
    if(n==1) return s;
    else
    s = s + a[n];
    return sum(a,n-1); }
int main() {
    long int n,i;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    long int s = sum(a,n);
    printf("%ld",s);
    return 0; }