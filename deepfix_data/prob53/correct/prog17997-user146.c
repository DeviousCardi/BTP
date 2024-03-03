#include<stdio.h>
long int sum_num(int b[],int m);
int main() {
    int n,i,sum;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    sum=sum_num(&a[n],n);
    printf("%d",sum);
    return 0; }
long int sum_num(int b[],int m){
    int i=0;
    if(i<=m)
    return b[i]-sum_num(b,i+1); }