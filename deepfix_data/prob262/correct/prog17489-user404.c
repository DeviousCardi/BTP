#include<stdio.h>
#include<strings.h>
int reverse(int arr[],int  );
int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    reverse( arr[n], n);
    return 0; }
int reverse(int arr[],int n) {
    int a, b[n];
    printf("%d",arr[a-1]);
    a=a-1;
    if(a==0)
    return 0; }