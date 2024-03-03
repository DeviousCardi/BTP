#include <stdio.h>
int main() {
    int A[1000], i, n, count=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &A[i]); }
    if(A[i] == i + 1) {
        count = count + 1; }
    for(i=0; i<n; i++) {
        if(count == i+1) {
            printf("Yes"); }
        else {
            printf("No"); } }
    return 0; }