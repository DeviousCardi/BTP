#include<stdio.h>
int prod(int,int);
int main() {
    int n,a,b,product;
    scanf("%d\n",&n);
    scanf("%d %d",&a,&b);
    product=prod(a,b);
    printf("%d",product);
    return 0; }
int prod(int a,int b) {
    static int product=0,i=0,n,k,l;
    product=a*b;
    k=product;
    if(i<n) {
        scanf("%d",&l);
        prod(k,l);
        i++; }
    return product; }