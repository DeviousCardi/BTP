#include <stdio.h>
int sum(int a[], int N){
    static int s=0;
    if(N<2)
        return 0;
    s += sum(a+1, N-1);
    return s; }
int main() {
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d", &a[i]); }
    printf("%d", sum(a, N));
    return 0; }