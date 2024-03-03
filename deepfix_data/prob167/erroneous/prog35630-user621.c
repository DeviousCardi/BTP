#include<stdio.h>
int i=0,s=0,n,a=0;
void sum(int n,int a) {
        if(n<1)return ;
        s=s+a;
        sum(n-1,input[i+1]); }
int main() {
    scanf("%d",&n);
    int input[n];
    sum(n,a[i]);
    printf("%d",s);
    return 0; }