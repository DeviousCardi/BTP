#include<stdio.h>
int sum(int n) {
    long int a;
    if(n==0)
    return 0;
    else {
        scanf("%d",&a);
        return a+sum(n-1); } }
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0; }