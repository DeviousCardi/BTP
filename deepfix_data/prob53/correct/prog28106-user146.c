#include<stdio.h>
long int sum_num(int b[],int m);
int main() {
    int n,i,sum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    sum=sum_num(a,n);
    printf("%d",sum); }
long int sum_num(int b[],int m){
    int p=0;
    p=b[m]-b[m+1];
    b[m]=p;
    sum_num(b,m);
    return p; }