#include<stdio.h>
int n,pro;
long int product(long int a) {
    int num;
    scanf("%d",&num);
    if(a==n-1)
        return pro*num;
    else
        return pro*product(a+1); }
int main() {
    int i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("%ld",product(0));
    return 0; }