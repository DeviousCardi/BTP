#include <stdio.h>
int main() {
    int n=0;
    scanf("%d", &n);
    int arr[100]={0};
    for(int i=0; i<n; i++) {
        scanf("%d,", &arr[i]); }
    int numarr[100]={0};
    for(int i=0; i<n; i++) {
        numarr[arr[i]]++; }
    int temp = 0;
    for(int i=0; i<n; i++) {
        if(numarr[i]==i || numarr[i]==0) {
            temp++; } }
    if(temp==n) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }