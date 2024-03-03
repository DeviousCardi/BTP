#include<stdio.h>
long int compute_prod(int arr[], int start, int end) {
    if((start+1)==end) {
        return arr[start]*arr[end]; }
    else
        return arr[start]*compute_prod(arr, start+1, end); }
int main() {
    double N;
    scanf("%lf\n", &N);
    int arr[1000000000];
    for(int i=0; i<N; i++) {
        scanf("%d ", &arr[i]); }
    compute_prod(arr, 0, N-1);
    return 0; }