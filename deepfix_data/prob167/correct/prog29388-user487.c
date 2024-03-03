#include<stdio.h>
int sum(int N,int a[100000]);
int main() {
    int N,a[100000];
    int i;
    scanf ("%d",&N);
    for(i=0;i<N;i=i+1) {
        scanf("%1000000000d",&a[i]); }
    printf("%100000000000d",sum(N,a));
    return 0; }
int sum(int N,int a[100000]) {
    long int count=0;
    if (N==1) return(a[0]);
    count=a[N-1]+sum(N-1,a);
    return (count); }