#include<stdio.h>
long long int sum(long long int add[],long long int (N)) {
    static P;
    if(N==0) {
        P=0;
        return(add[0]); }
    P=add[N]+(sum(add,N-1));
    return P; }
int main() {
    long long int N,i;
    scanf("%lld\n",&N);
    long long int arr[N],add=0;
    for(i=0;i<N;i++) {
        scanf("%lld ",&arr[i]); }
    add=sum(arr,N-1);
    printf("%lld",add);
    return 0; }