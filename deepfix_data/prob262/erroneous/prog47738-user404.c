#include<stdio.h>
#include<strings.h>
int reverse(int arr[],int n);
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    reverse(int arr[n],int n);
    return 0; }
int reverse(int arr[n],int n) {
    int a=n;
    printf("%d",arr[a-1]);
    a=a-1;
    if(a==0)
    return 0;
    reverse(int arr[a-1],int a); }