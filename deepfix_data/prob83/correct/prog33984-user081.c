#include <stdio.h>
void rotatearray(int arr[], int n, int d) {
    for(int i=0; i<d; i++) {
        arr[n+i]=arr[i]; } }
int main() {
    int arr[100]={0}, n=0, d=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]); }
    scanf("%d", &d);
    rotatearray(arr, n, d);
    for(int i=d+1; i<n+d+1; i++) {
        printf("%d ", arr[i]); } }