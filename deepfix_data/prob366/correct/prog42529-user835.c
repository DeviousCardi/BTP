#include <stdio.h>
int sort(int ar[],int n) {
    int temp;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(ar[i]>ar[j]) {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp; }
            else {
                continue; } } }
    return ar[0]; }
int main() {
    return 0; }