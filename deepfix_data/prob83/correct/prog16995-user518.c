#include <stdio.h>
void rotate(int n, int d, int arr[]){
    int a, i, j;
    for(i = 0; i <= n; i++){
        a = arr[i%n];
        arr[i%n] = arr[(i+d)%n];
        arr[(i+d)%n] = a;
        for(j = 0; j < n; j++){
        printf("%d ", arr[j]); } } }
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