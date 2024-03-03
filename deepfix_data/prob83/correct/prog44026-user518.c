#include <stdio.h>
void rotate(int n, int d, int arr[]){
    int a, i;
    for(i = 0; i < n; i++){
        a = arr[i%n];
        arr[i%n] = arr[(i+d)%n];
        arr[(i+d)%n] = a;
        for(i = 0; i < n; i++){
            printf("%d ", arr[i]); } } }
int main() {
    int n, i, d;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++){
        scanf("%d ", &arr[i]); }
    scanf("%d", &d);
        rotate(n, d, arr);
    return 0; }