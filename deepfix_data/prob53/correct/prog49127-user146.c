#include<stdio.h>
long int sum_num(int b[],int m);
int main() {
    long int n,i,sum;
    scanf("%ld",&n);
    long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]); }
    sum=sum_num(a[n],n);
    printf("%ld",sum);
    return 0; }
long int sum_num(int b[],int m){
    int i=0;
    if(i<=m)
    return b[i]-sum_num(b,i+1); }