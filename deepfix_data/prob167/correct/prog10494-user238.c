#include<stdio.h>
long sum(int n) {
    long a;
    if(n>0) {
        scanf("%ld ",&a);
        return (a+sum(n-1)); }
    else
        return 0; }
int main() {
    int n;
    long s;
    scanf("%d\n",&n);
    s=sum(n);
    printf("%ld",s);
    return 0; }