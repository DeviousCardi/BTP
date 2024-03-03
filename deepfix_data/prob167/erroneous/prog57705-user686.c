#include<stdio.h>
int sum(n){
    int a;
    scanf("%d",&a);
    if(n==1) return a;
    return sum(n-1)+a; }
int main() {
    int n;
    scanf("%d",&n);
    int s=sum(n);
    printf("%d",s)l;
    return 0; }