#include <stdio.h>
int main() {
    int n, i, miss, rep;
    scanf("%d ", &n);
    int arr[n], occ[n];
    for(i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
        occ[i] = 0;
        occ[arr[i]]++; }
    for(i = 0; i < n; i++){
        if(occ[i] == 0){
            miss = i;
        }else if(occ[i] == 2){
            rep = i; } }
    printf("%d\n", rep);
    printf("%d", miss);
    return 0; }