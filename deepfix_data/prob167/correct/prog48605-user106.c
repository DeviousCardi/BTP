#include<stdio.h>
int n,i;
 int s( int arr[]) {
    int sum;
for(i=0;i<n;i++) {
    sum=sum+arr[i]; }
if(n==0)
    return 0;
else
    return sum; }
int main() {
    int n;
        scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    return 0; }