#include<stdio.h>
int sum(int k,int n) {
    if(k==n)
    return 0;
    else {
        int x;
        scanf("%d",&x);
        return x+sum(k+1,n); } }
int main() {
    int n,s;
    scanf("%d",&n);
    s=sum(0,n);
    printf("%d",s);
    return 0; }