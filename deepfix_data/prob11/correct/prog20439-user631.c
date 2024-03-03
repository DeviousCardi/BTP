#include <stdio.h>
void function(long int array[],long int n,long int S){
    long int sum=0;
    for(long int i=0;i<n;i++)
        sum=sum+array[i];
    if(sum==S){
        printf("YES");
        return; }
    else if(n==0){
        printf("NO");
        return; }
    else
        function(array,n-1,S); }
int main() {
    long int N,S;
    scanf("%ld",&N);
    scanf("%ld",&S);
    long int array[N];
    for(long int i=0;i<N;i++)
        scanf("%ld",&array[i]);
    function(array,N,S);
    return 0; }