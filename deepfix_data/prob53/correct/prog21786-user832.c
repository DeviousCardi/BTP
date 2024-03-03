#include<stdio.h>
int sum(int i);
int main() {
    int n,a;
    scanf("%d",&n);
    scanf("%d",&a);
    printf("%d",a-sum(n-1));
    return 0; }
int sum(int i) {
    int a;
    scanf("%d",&a);
    if(i>1)
    return (a+sum(i-1));
    else
    return a; }