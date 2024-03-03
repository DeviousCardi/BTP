#include<stdio.h>
int sum1(int sum, int temp, int n) {
    printf("temp%d ",temp);
    if(n==0) return sum;
    sum=sum+temp; printf("%d\n",sum);
    scanf("%d",&temp);
    return sum1(sum,temp,n-1); }
int main() {
    int n,i;
    scanf("%d",&n);
    scanf("%d",&i);
    printf("sum%d",sum1(0,i,n));
    return 0; }