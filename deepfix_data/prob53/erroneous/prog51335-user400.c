#include<stdio.h>
int diff(int a[]);
int main() {
    int N,i,c;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++) {
        scanf("%d",&a[i]); }
    c=diff(int a[N]);
    printf("%d",c);
    return 0; }
int diff(int a[]) {
    int b,N;
    b=diff(int a[N-2])-a[N-1];
    if(N=0)
    return a[0];
    else
    return b; }