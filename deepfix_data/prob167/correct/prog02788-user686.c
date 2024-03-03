#include<stdio.h>
long int sum(n){
    int a;
    scanf("%d",&a);
    if(n==1) return a;
    return sum(n-1)+a; }
int main() {
    int n;
    scanf("%d",&n);
    long int s=sum(n);
    printf("%ld",s);
    return 0; }