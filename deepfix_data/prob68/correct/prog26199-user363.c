#include<stdio.h>
#include<math.h>
long int product(int N,long int p,int a[]) {
    p=a[N-1]*p;
    if (N==1)  return 0;
    return product(N-1,p,a); }
int main() {
    int N,a[100],i;
    long int p=1,x;
     scanf("%d",&N);
    for(i=0;i<N;i++) {
        scanf(" %d ",&a[i]); }
    x=product(N,p,a);
    printf("%ld",x);
    return 0; }