#include <stdio.h>
long int check(long int a[],long int N,long int sum,long int S) {
        if(sum==S)
        return 1;
    if(N==0) {
        return 0; }
return(check(a,N-1,sum=sum+a[N-1],S)||check(a,N-1,sum,S)); }
int main() {
    long int N,S,i;
    scanf("%ld %ld",&N,&S);
    long int a[N];
    for(i=0;i<N;i++)
    scanf("%ld",&a[i]);
    printf("%ld",check(a,N,0,S));
    return 0; }