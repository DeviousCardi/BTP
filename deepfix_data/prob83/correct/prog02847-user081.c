#include <stdio.h>
void rotatearray(int arr[], int n) {
    int temp1, temp2=arr[0];
    for(int i=0; i<n; i++) {
        if(i==(n-2)) {
            arr[0]=arr[i];
            arr[i]=temp1; }
        temp1 = arr[i+1];
        arr[i+1] = temp2;
        temp2 = temp1; }
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]); }
    printf("\n"); }
int main() {
    int arr[100], n=0, d=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]); }
    scanf("%d", &d);
    int k=0;
    for(int i=0; i<d; i++) {
        rotatearray(arr, n); }
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]); }
    return 0; }