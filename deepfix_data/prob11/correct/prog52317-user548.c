#include <stdio.h>
long int check(long int a[],long int start,long int N,long int sum,long int S) {
    if(start==N-1)
    return (S==sum);
    return(check(a,start+1,N,sum=sum+a[start],S)||check(a,start+1,N,sum,S)); }
int main() {
    long int N,S,i;
    scanf("%ld %ld",&N,&S);
    long int a[N];
    for(i=0;i<N;i++)
    scanf("%ld",&a[i]);
    printf("%d",check(a,0,N,0,S));
    return 0; }