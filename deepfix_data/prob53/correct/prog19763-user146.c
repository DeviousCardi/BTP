#include<stdio.h>
long int sum_num(int b[],int m);
int main() {
    int n,i,sum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    sum=sum_num(a,n);
    printf("%d",sum+a[0]); }
long int sum_num(int b[],int m){
    int k=0;
    if(m>1)
    return (b[m-1]+sum_num(b,m-2)); }