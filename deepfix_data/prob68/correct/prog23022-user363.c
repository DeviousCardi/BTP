#include<stdio.h>
#include<math.h>
int product(int N,int a[],int p) {
    if (N==0) return 0;
    p=a[N-1]*a[N-2];
    return product(N-1,a,p); }
int main() {
    int N,a[10^9],p,x,i;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf(" %d ",&a[i]); }
    x=product;
    printf("%d",x);
    return 0; }