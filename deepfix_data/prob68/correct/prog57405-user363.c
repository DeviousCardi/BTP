#include<stdio.h>
#include<math.h>
int product(int N,int a[],int p) {
    if (N==0) return 0;
    else
    p=a[N-1]*p;
    return product(N-1,a,p); }
int main() {
    int N,a[100],i,p=1;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf(" %d ",&a[i]); }
    product(N,a,p);
    printf("%d",product);
    return 0; }