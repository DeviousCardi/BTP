#include<stdio.h>
long int sum(long int a[],int n){
    static int s = 0;
    s = s + a[n-1];
    if(n>=1) return sum(a,n-1);
    else return s; }
int main() {
    long int n,i;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    long int s = sum(a,n);
    printf("%ld",s);
    return 0; }