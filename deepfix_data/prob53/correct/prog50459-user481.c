#include<stdio.h>
int func(long int a[],long int N,long int i) {
    int d,count=0;
    d=a[i]-a[i+1];
    a[i+1]=d;
    count++;
    if(count<N)
    return func(a,N,(i+1)); }
int main() {
    long int a[100000], N,i,res;
    scanf("%ld",&N);
    for(i=0;i<N;i++) {
        scanf("%ld",&a[i]); }
    res=func(&a[0],N,0);
    printf("%ld",res);
    return 0; }