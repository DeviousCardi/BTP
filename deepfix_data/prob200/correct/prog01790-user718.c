#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i]<upperLimit) {
            if(arr[i] > count) {
                count = arr[i]; } } }
    return count; }
int main() {
    int size = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        if(arr[i] > size) {
            size = arr[i]; } }
    do {
        printf("%d\n", size);
        size = getMaxLessThan(size);
        printf("%d\n", size); }
    while(size > 0);
    return 0; }