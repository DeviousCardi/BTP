#include<stdio.h>
void rotate(int arr[], int n) {
    int temp1=0, temp2=arr[0];
    for(int i=0; i<n; i++) {
        if(i==(n-1)) {
            arr[0] = temp2; }
        else {
            temp1 = arr[i+1];
            arr[i+1] = temp2;
            temp2 = temp1; } } }
int main() {
    int n=0, arr[100]={0};
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]); }
    int d=0;
    scanf("%d", &d);
    for(int i=0; i<d; i++) {
        rotate(arr, n); }
    for(int i=0; i<n; i++) {
        printf("%d", arr[i]); }
    return 0; }