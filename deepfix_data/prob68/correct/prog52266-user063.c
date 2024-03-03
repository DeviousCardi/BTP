#include<stdio.h>
long int compute_prod(int arr[], int start, int end) {
    if(start==end)
        return arr[start];
    else
        return arr[start]*compute_prod(arr, start+1, end); }
int main() {
    int N;
    scanf("%d\n", &N);
    int arr[N];
    for(int i=0; i<N; i++) {
        scanf("%d ", &arr[i]); }
    printf("%ld", compute_prod(arr, 0, N-1));
    return 0; }