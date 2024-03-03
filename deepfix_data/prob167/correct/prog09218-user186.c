#include<stdio.h>
long int sum(int n) {
    int a;
    scanf("%d",&a);
    if(n==1)
    return a;
    else
    return a+sum(n-1); }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0; }