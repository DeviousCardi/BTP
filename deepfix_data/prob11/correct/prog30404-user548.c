#include <stdio.h>
long int check(long int a[],long int start,long int N,long int sum,long int S) {
        if(sum==S)
        return 1;
    if(start==N) {
        if(sum==S)
        return 1;
        else
        return 0; }
return(check(a,start+1,N,sum=sum+a[start],S)||check(a,start+1,N,sum,S)); }
int main() {
    long int N,S,i;
    scanf("%ld %ld",&N,&S);
    long int a[N];
    for(i=0;i<N;i++)
    scanf("%ld",&a[i]);
    printf("%ld",check(a,0,N,0,S));
    return 0; }