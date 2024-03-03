#include<stdio.h>
int s=0,a=0;
int sum(int n) {
        if(n<1)return a;
        s=s+a;
        sum(n-1);
        return s; }
int main() {
    int n;
    scanf("%d",&n);
    sum(n);
    printf("%d",s);
    return 0; }