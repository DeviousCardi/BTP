#include <stdio.h>
int main() {
    int m, n, i, j, max=0;
    int arr[i*j];
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &arr[i+j]); }
        scanf("\n"); }
    for(i=0; i<n; i++){
        sum=0;
        for(j=0; j<m; j++){
            sum=sum+arr[i+j]; }
        if(sum>max){
            max=sum; } }
    return 0; }