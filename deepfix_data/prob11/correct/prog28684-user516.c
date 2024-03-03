#include <stdio.h>
long S;
int sum(long n,long a[n],long p){
    if(n==0)
    return 0;
    if((p==S)||(sum(n-1,a,p+a[n-1]))||sum(n-1,a,p)){
        return 1; }
    return 0; }
int main() {
    long N,i;
    scanf("%ld%ld",&N,&S);
    long a[N];
    for(int i=0;i<N;i++)
    scanf("%ld",&a[i]);
    sum(N,a,0);
    return 0; }