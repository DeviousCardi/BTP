#include <stdio.h>
int main() {
    int m, n, i, j, sum, max;
    scanf("%d %d", &n, &m);
    int arr[m*n];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &arr[i+j]); }
        scanf("\n"); }
    for(i=0; i<n; i++){
        sum=0;
        max=0;
        for(j=0; j<m; j++){
            sum=sum+arr[i+j]; }
        if(sum>max){
            max=sum; } }
    printf("%d", max);
    return 0; }