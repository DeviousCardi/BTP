#include<stdio.h>
long int sum(long int a[],int n){
    static int s = 0;
    s = s + a[n];
    if(n==2) return s;
    else return sum(a,n-1); }
int main() {
    long int n,i;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    long int s = sum(a,n);
    printf("%ld",s);
    return 0; }