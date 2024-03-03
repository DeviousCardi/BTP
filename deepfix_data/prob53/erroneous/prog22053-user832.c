#include<stdio.h>
int g(int i,int a);
int main() {
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0; }
int f(int i) {
    long int a;
    scanf("%ld",&a);
    return (g(i,a)+2*a) }
int g(int i,int a) {
    if(i>1) {
        return (g(i-1)-a); }
    else {
        return -a; } }