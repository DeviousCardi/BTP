#include <stdio.h>
int main() {
    int n,d,i,j;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]); }
    scanf("%d",&d);
    printf("%d %d",n,d);
    for(i=0;i<n;i++) {
        printf("%d",array[i]); }
    return 0; }