#include <stdio.h>
int main(){
    int n, i, j;
    scanf ("%d", n);
    printf("\n");
    int booknos[100];
    for (i=0; i<n; i++) {
        scanf ("%d", &booknos[i]); }
    printf("\n");
    int pos[100];
    for (j=0; j<n; j++) {
        scanf ("%d", &pos[j]); }
    for (i=0; i<n; i++) {
        printf ("%d", booknos[pos[i]]); }
    printf("end");
    return 0; }