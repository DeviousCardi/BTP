#include<stdio.h>
int arr[200000];
int main() {
    int N;
    int i;
    scanf("%d",&N);
    for(i=1;i<=N;i++) {
        scanf("%d",&arr[i]); }
    printf("%d",sum(N));
    return 0; }
int sum(int N) {
    if(N==1)
    return arr[N];
    return arr[N]+sum(N-1); }