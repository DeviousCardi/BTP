#include<stdio.h>
long int sum_num(int b[],int m);
int main() {
    int n,i,sum;
    scanf("%d",&n);
    int a[n];
    sum=sum_num(&a[n],n);
    printf("%d",sum); }
long int sum_num(int b[],int m){
    int i,p;
    for(i=0;i<m;i++){
        scanf("%d",&b[i]); }
    p=b[i]-b[i+1];
    b[i]=p;
    return p; }