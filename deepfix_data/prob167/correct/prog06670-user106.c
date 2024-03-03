#include<stdio.h>
int n,i,sum=0;
 int s( int arr[]) {
for(i=0;i<n;i++) {
    sum=sum+arr[i]; }
    return sum; }
int main() {
    int n;
        scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    printf("%d",sum);
    return 0; }