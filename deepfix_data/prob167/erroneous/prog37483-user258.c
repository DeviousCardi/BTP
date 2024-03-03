#include<stdio.h>
int sum_num(int a[],int n){
    if(n=0)
    return 0;
    if(n=1)
    return a[0]
    if(n>1)
    sum(n)=sum(n-1)+a[n-1];
        return sum(n); }
int main() {
    int n;
    scanf("%d\n",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    return 0; }