#include<stdio.h>
int prod(int,int);
int main() {
    int n,a,b,product;
    scanf("%d\n",&n);
    scanf("%d %d",&a,&b);
    prod(a,b);
    product=prod(a,b);
    printf("%d",product);
    return 0; }
int prod(int a,int b) {
    static int product=0,i=0,n;
    product=a*b;
    a=product;
    if(i<n) {
        scanf("%d",&b);
        i++;
        prod(a,b); }
    return product; }