#include <stdio.h>
int main() {
    int n, m, i, k, sum = 0;
    scanf("%d%d", &n, &m);
    int arr_n[n];
    int arr_m[m];
    for(i = 0; i < n; i++){
        for(k = 0; k < m; k++){
            scanf("%d", &arr_m[k]);
            sum += arr_m[k]; }
        arr_n[i] = sum;
        sum = 0;
        if(i != 0 && arr_n[i] > arr_n[0]){
            arr_n[0] = arr_n[i]; } }
    printf("%d", arr_n[0]);
    return 0; }