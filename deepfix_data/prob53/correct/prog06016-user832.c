#include<stdio.h>
int sum(int i);
int main() {
    long int n,a;
    scanf("%d",&n);
    scanf("%ld",&a);
    if(n!=1)
    printf("%d",a-sum(n-1));
    if(n==1)
    printf("%d",a);
    return 0; }
int sum(int i) {
    int a;
    scanf("%ld",&a);
    if(i>1)
    return (a+sum(i-1));
    else
    return a; }