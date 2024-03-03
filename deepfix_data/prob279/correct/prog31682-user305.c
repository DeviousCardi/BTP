#include <stdio.h>
int main() {
    int n, i, miss, rep;
    miss = 0;
    rep = 0;
    scanf("%d ", &n);
    int arr[n], occ[n+1];
    for(i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
        occ[i] = 0;
        occ[arr[i]]++; }
    occ[n] = 0;
    for(i = 1; i <= n; i++){
        if(occ[i] == 0){
            miss = i;
        }else if(occ[i] == 2){
            rep = i; } }
    printf("%d\n", rep);
    printf("%d", miss);
    return 0; }