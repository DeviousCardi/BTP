#include <stdio.h>
int main(){
    int n, i, j, k[100], l=0, p, q, count1, count2;
    scanf ("%d\n", &n);
    int a[100];
    for (i=1; i<=100; i++) {
        scanf ("%d", &a[i]); }
    a[0]=1;
    for (j=0; j<=100; j++) {
        k[l]=a[j];
        j=k[l];
        l++;
        for (p=0; p<=j; p++) {
            if (a[p]!=a[j])
            count1++; }
        for (q=0; q<=j; q++) {
            if (a[q]==a[j])
            count2 = j-q; } }
    printf("%d %d", count1, count2);
    return 0; }