#include<stdio.h>
int diff(int*, int);
int main() {
    int n, i;
    scanf("%d\n", &n);
    int arr[n];
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]); }
    printf("%d", diff(arr, n));
    return 0; }
int diff(int *p, int n) {
    int reqdiff=*p;
    if(n==1)
    return(reqdiff);
    reqdiff=*p-diff(*++p, n-1); }