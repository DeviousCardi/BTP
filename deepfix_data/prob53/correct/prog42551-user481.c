#include<stdio.h>
int func(long int a[],long int N) {
    int d,i;
    d=a[0]-a[1];
    for(i=0;i<N;i++) {
      d=a[i]-a[i+1];
      a[i+1]=d; }
    return d; }
int main() {
    long int a[100000], N,i,res;
    scanf("%ld",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&a[i]); }
    res=func(&a[0],N);
    printf("%ld",res);
    return 0; }