#include <stdio.h>
int arr[100]={0};
int n;
int k,w;
int getMaxLessThan(int upperLimit) {
    int i;
    int max=arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]>max)
            max=arr[i];
        else
            return max; } }
int main() {
    return 0; }