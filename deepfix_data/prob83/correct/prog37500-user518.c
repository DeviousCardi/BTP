#include <stdio.h>
void rotate(int n, int d, int arr[]){
    int a, i, j;
    for(i = 0; i < n*d; i++){
        a = arr[i%n];
        arr[i%n] = arr[(i+1)%n];
        arr[(i+1)%n] = a;
        for(j = 0; j < n; j++){
        printf("%d ", arr[j]); }
    printf("\n"); } }
int main() {
    int n, i, d;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d ", &arr[i]); }
    scanf("%d", &d);
    for(i = 0; i < d; i++){
        rotate(n, d, arr); }
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]); }
    return 0; }