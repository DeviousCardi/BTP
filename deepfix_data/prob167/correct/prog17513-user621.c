#include<stdio.h>
int s=0,a=0;
int sum(int n) {
        if(n<1)return a;
        scanf("%d",&a);
        sum(n-1);
        s=s+a;
        return s; }
int main() {
    int n;
    scanf("%d",&n);
    sum(n);
    printf("%d",s);
    return 0; }