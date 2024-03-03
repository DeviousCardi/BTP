#include<stdio.h>
int n,arr[10000];
long int product(long int a) {
    if(a==n-1)
        return arr[a];
    else
        return product(a+1)*arr[a]; }
int main() {
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%ld",product(0));
    return 0; }