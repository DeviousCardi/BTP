#include <stdio.h>
int N;
void merge_sort(int a[],int start, int n){
    if(n>1){
        int half=n/2;
        merge_sort(a, start, half);
        merge_sort(a, start+half, n-half); } }
int main() {
    scanf("%d", &N);
    int a[N];
    for (int i=0; i<N; i++){
        scanf("%d", &a[i]); }
    merge_sort(a, 0, N);
    return 0; }