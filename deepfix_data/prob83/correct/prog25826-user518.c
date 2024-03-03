#include <stdio.h>
void rotate(int n, int d, int arr[]){
    int a, i;
    for(i = 0; i <= n; i++){
        a = arr[i];
        arr[i] = arr[i+d];
        arr[i+d] = a; } }
int main() {
    int n, i, d;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d ", &arr[i]); }
    scanf("%d", &d);
    for(i = 0; i < n; i++){
        printf("%d", arr[i]); }
    return 0; }