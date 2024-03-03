#include<stdio.h>
int pro(int N) {
    int a,i,b,product;
    scanf("%d",&a);
    for(i=1;i<=N;i++) {
        scanf("%d ",&b);
        product=a*b;
        a=product; }
    if(N==1)
    return N;
    else return a; }
int main() {
    int N,i,product;
    scanf("%d\n",&N);
    int a[N];
    for(i=1;i<=N;i++)
    scanf("%d",&a[i]);
    product=pro(N);
    printf("%d",product);
    return 0; }