#include<stdio.h>
long int n,pro=1;
long int product(long int a) {
    int num;
    scanf("%d",&num);
    pro=pro*num;
    if(a==n-1)
        return pro;
    else
        return pro*product(a+1); }
int main() {
    scanf("%d",&n);
    printf("%ld",pro);
    return 0; }