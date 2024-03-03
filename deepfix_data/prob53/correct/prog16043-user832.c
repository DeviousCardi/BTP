#include<stdio.h>
int g(int i);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",g(n));
    return 0; }
int g(int i) {
    long int a;
    scanf("%ld",&a);
    if(i>1) {
        return (g(i-1)-a); }
    else {
        return -a; } }