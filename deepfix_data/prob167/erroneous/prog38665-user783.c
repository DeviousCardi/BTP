#include<stdio.h>
int sum(int N) {
    if(N<=1)
    return arr[N];
    return arr[N]+sum(N-1); }
int main() {
    int N;
    int i;
    int arr[200000];
    scanf("%d",&N);
    for(i=0;i<N;i++) {
        sdcanf("%d",&arr[i]); }
    return 0; }