#include<stdio.h>
int s,n,a=0;
int sum(int n,int a) {
        if(n<1)return a;
        scanf("%d",&a);
        sum(n-1,a);
        s=s+a;
        return s; }
int main() {
    scanf("%d",&n);
    sum(n,a);
    printf("%d",s);
    return 0; }