#include<stdio.h>
#include<limits.h>
#include <stdlib.h>
int Max(int a[], int size) {
    int max= INT_MIN;
    for (int i=0; i<size; i++) {
        if (a[i]>=max) max=a[i]; }
   return max; }
int Min(int a[], int size) {
    int min= INT_MAX;
    for (int i=0; i<size; i++) {
        if (a[i]<=min) min=a[i]; }
   return min; }
int main(){
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int MaxInRow[m];
    for (int i=0; i<m; i++) {
        int row[n];
        for (int j=0; j<n; j++) {
            scanf("%d", &row[j]); }
        MaxInRow[i]=Max(row,n); }
    int d= Min(MaxInRow,m);
    printf("%d\n", d);
    return 0; }