#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20], min,n,c;
    scanf("%d",&n);
    for ( c = 0 ; c < n; c++ )
        scanf("%d", &a[c]);
    min = a[0];
    for ( c = 1 ; c < n ; c++ ) {
        if ( a[c] < min ) {
           min = a[c];
          printf("Yes"); }
        else{
            printf("No"); } }
    return 0; }