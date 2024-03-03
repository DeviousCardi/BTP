#include <stdio.h>
int N;
void sum(int a[], int k, int s){
    s+=a[k];
    if(k==N-1){
        printf("%d", s);
        return; }
    sum(a, k+1, s); }
int main() {
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d", &a[i]); }
    sum(a,0,0);
    return 0; }