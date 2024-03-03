#include <stdio.h>
int N;
void sum(long long int a[], int k,long long int s){
    s += a[k];
    if (k==N-1){
        printf ("%lld", s);
        return ; }
    sum (a, k+1, s); }
int main() {
    scanf ("%d", &N);
    long long int a[N];
    for (int i=0; i<N; i++){
        scanf ("%lld", &a[i]); }
    sum (a,0,0);
    return 0; }