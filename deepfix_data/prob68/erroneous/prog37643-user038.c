#include<stdio.h>
int prod(int a,int b) {
    static int product=0,i=0;
    product=a*b;
    a=prod;
    if(i<n) {
        scanf("%d",&b);
        product=prod(a,b);
        i++; }
    return product; }
int main() {
    int n,a,b;
    scanf("%d\n",&n);
    scanf("%d %d",&a,&b);
    product=prod(a,b);
    printf("%d",product);
    return 0; }