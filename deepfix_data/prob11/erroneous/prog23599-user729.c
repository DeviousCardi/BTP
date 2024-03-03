#include <stdio.h>
int su(int n,int s,int num[n]) {
    int i;
    for(i=0; i<n; i++) }
int main() {
    int N,S;
    scanf("%d",&N);
    scanf("%d",&S);
    int arr[N];
    int i;
    for(i=0; i<N; i++) {
        scanf("%d",&arr[i]); }
    int sum=su(N,S,arr);
    return 0; }