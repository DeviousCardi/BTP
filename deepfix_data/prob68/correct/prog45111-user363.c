#include<stdio.h>
#include<math.h>
long int product(int N,int a[],long int p) {
    if (N==0) return 0;
    else
    p=a[N-1]*p;
    return product(N-1,a,p); }
int main() {
    int N,a[100],i;
    long int p=1,x;
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf(" %d ",&a[i]); }
    x=product(N,a,p);
    printf("%d",x);
    return 0; }