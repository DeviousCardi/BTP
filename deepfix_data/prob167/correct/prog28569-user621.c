#include<stdio.h>
int s=0,n,a=0;
int sum(int n,int a) {
        if(n<1)return a;
        scanf("%d",&a);
        sum(n-1,a);
        s=s+a;
        return s; }
int main() {
    scanf("%d",&n);
    if(n<0)return 0;
    s=sum(n,a);
    printf("%d",s);
    return 0; }