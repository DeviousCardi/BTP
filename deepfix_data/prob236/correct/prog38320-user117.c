#include <stdio.h>
int main(){
    int n, i, j;
    scanf ("%d", n);
    printf("\n");
    int booknos[n];
    for (i=0; i<n; i++) {
        scanf ("%d", &booknos[i]); }
    printf("\n");
    int order[n];
    for (i=0; i<n; i++) {
        scanf ("%d", &order[i]); }
    if (n<100) {
        for (i=0; i<n; i++) {
            printf ("%d", order[i]); } }
    printf("end");
    return 0; }