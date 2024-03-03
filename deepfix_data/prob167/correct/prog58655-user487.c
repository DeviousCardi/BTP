#include<stdio.h>
int sum(int N,long int a[100000]);
int main() {
    long int a[100000];
    int N;
    int i;
    scanf ("%d",&N);
    for(i=0;i<N;i=i+1) {
        scanf("%d",&a[i]); }
    printf("%d",sum(N,a));
    return 0; }
int sum(int N,long int a[100000]) {
    long int count=0;
    if (N==1) return(a[0]);
    count=a[N-1]+sum(N-1,a);
    return (count); }