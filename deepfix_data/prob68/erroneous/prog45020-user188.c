#include<stdio.h>
intx;
intproduct_num(inta[],intx){
    if(x<=1)
    return x;
    else
    return product_num(a+1,x-1); }
int main() {
    int n;
    int res;
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++){
        scanf("%c",&b[i]); }
    res=pruduct_num(b,n);
    printf("%d",res);
    return 0; }