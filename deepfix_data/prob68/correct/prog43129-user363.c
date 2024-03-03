#include<stdio.h>
#include<math.h>
long int product(int N) {
    int p=1,a[100],i;
    for(i=0;i<N;i++) {
        scanf(" %d ",&a[i]); }
    if (N==0) return 0;
    else
    p=a[N-1]*p;
    return product(N-1); }
int main() {
    int N,a[100],i,x;
    scanf("%d",&N);
    x=product(N);
    printf("%d",x);
    return 0; }