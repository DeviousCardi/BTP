#include<stdio.h>
#include<math.h>
int product(int N,int p) {
    int a[100],i;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf(" %d ",&a[i]); }
    if (N==1) return p;
    else
    p=a[N-1]*p;
    return product(N-1,p); }
int main() {
    int N,x,p=1;
    x=product(N,p);
    printf("%d",x);
    return 0; }