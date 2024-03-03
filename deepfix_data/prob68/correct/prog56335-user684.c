#include<stdio.h>
int prod(int n) {
    int a;
    scanf("%d ",&a);
    if(n==1)
        return a;
    return a*prod(n-1); }
int main() {
    int n;
    scanf("%d\n",&n);
    int p=prod(n);
    printf("%d",p);
    return 0; }