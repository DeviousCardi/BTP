#include<stdio.h>
int s=0,a=0;
int sum(int n) {
        if(n<1)return a;
        scanf("%d",&a);
        s=s+a;
        sum(n-1); }
int main() {
    int n;
    scanf("%d",&n);
    s=sum(n);
    printf("%d",s);
    return 0; }