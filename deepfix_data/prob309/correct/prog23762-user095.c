#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]); }
    for(i=0;i<n;i++) {
                printf("%d",array[i]); }
    return 0; }