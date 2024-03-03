#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n-1; i++) {
        char trash;
        scanf("%d", &a[i]);
        trash= getchar(); }
    scanf("%d", &a[n-1]);
    int freq[n+1];
    for (int i=0; i<n+1; i++) {
        freq[i]=0; }
    for (int i=0; i<n; i++) {
        freq[a[i]]++; }
    int i;
    for ( i=0; i<n+1; i++) {
        if (freq[i]!=i && freq[i]!=0)
        {printf("No\n"); break;} }
    if (i==n+1) printf("Yes\n");
    for (int i=0; i<n+1; i++) {
        printf("%d\t", freq[i]); }
    return 0; }