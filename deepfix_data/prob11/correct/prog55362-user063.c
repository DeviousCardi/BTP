#include <stdio.h>
int check_recur(int arr[], int N,  long int S) {
    if(N==0 && S==0)
        return 1;
    if(N==0)
        return 0;
    else if(N==1) {
        if(arr[0]==S)
            return 1;
        else
            return 0; }
    else {
        if( check_recur(arr, N-1, S)||check_recur(arr, N-1, S-arr[N-1]             ))
        return 1;
        return 0; } }
int main() {
    int N;
    long int S;
    int arr[30];
    scanf("%d %ld\n", &N, &S);
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]); }
    int result=check_recur(arr, N, S);
    if(result==1)
        printf("YES");
    else
        printf("NO");
    return 0; }