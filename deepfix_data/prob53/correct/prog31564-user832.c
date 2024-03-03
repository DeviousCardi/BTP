#include<stdio.h>
int funct(int i);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",funct(n));
    return 0; }
int funct(int i) {
    int a;
    scanf("%d",&a);
    if(i!=1)
    return (a-funct(i-1));
    if(i==1)
    return a; }