#include<stdio.h>
long long int sum(long int a[],int N) {
    static long long int s=0;
    if(N==0){
        return (s+a[0]); }
    else{
        s=a[N-1]+sum(a,N-2);
        return s; } }
int main() {
    int N,i,s=0;
    long long int p;
    scanf("%d", &N);
    long int a[N];
    for (i=0;i<N;i++)
       scanf("%ld", &a[i]);
    p= sum(a, N);
    return 0; }