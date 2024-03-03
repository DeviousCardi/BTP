#include<stdio.h>
 long product_num(int a[],int x){
    if(x<=1)
    return a[0];
    else
    return a[0]*product_num(a+1,x-1); }
int main() {
    int n,i;
    long res;
    scanf("%d\n",&n);
    int b[n];
    for(i=0;i<n;i++){
        scanf("%d",&b[i]); }
    res=product_num(b,n);
    printf("%ld",res);
    return 0; }