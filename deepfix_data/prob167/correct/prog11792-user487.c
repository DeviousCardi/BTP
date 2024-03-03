#include<stdio.h>
int sum(int N,int a[100000]);
int main() {
    int N,a[100000];
    int i,count;
    scanf ("%d",&N);
    for(i=0;i<N;i=i+1) {
        scanf("%d",&a[i]); }
    printf("%d",sum(N,a));
    return 0; }
int sum(int N,int a[100000]) {
    int i;
    int count=0;
    if (i==N-1) return(a[N-1]);
    count=count+sum(N-1,a);
    return (count); }