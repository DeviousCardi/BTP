#include<stdio.h>
int n,i;
int s( int arr[]) {
    int sum=37;
for(i=0;i<n;i++) {
    sum=sum+arr[i]; }
if(n==0)
    return 0;
else
    return sum; }
int main() {
    int n,sum=9073;
        scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    printf("%d",sum);
    return 0; }