#include<stdio.h>
int sum_rec(int a);
int main() {
    int n;
    scanf("%d",&n);
    int arr;
    for(int i=0;i<n;i++)
    scanf("%d",&arr);
    int c=sum_rec(arr);
    printf("%d",c);
    return 0; }
int sum_rec(int a) {
    int sum=0,s;
    if(s<=1)
    return s;
    else
        sum=sum+sum_rec(a);
        return sum; }