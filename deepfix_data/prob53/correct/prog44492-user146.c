#include<stdio.h>
long int sum_num(int b[],int m);
int main() {
    long int n,i,sum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    sum=sum_num(a,n);
    printf("%ld",sum); }
long int sum_num(int b[],int m){
    int i,p=0;
    for(i=0;i<m;i++){
    p=b[i]-b[i+1];
    b[i]=p; }
    return p; }