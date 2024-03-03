#include<stdio.h>
int product(int n , int a[n]){ }
int main() {
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    product( n , a );
    printf("%d",product);
    return 0; }