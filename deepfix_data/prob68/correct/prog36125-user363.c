#include<stdio.h>
#include<math.h>
int product(int N,int p,int a[]) {
    if (N==1)
    return p;
    p=a[N-1]*p;
    return product(N-1,p,a); }
int main() {
    int N,x,p=1,a[100],i;
     scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf(" %d ",&a[i]); }
    x=product(N,p,a);
    printf("%d",x);
    return 0; }