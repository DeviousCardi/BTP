#include <stdio.h>
int check_recur(int arr[], int N, double S) {
    if(N==0)
        return 0;
    else if(N==1) {
        if(arr[0]==S)
            return 1;
        else
            return 0; }
    else {
        return check_recur(arr, N-1.0, S)||check_recur(arr, N-1.0, S           -arr[N-1]); } }
int main() {
    int N;
    double S;
    int arr[30];
    scanf("%d %lf\n", &N, &S);
    for(int i=0; i<N; i++) {
        scanf("%d", &arr[i]); }
    int result=check_recur(arr, N, S);
    if(result==1)
        printf("YES");
    else
        printf("NO");
    return 0; }