#include <stdio.h>
#include <stdlib.h>
int main() {
    int a[20], min,n,c,d=0;
    scanf("%d",&n);
    for ( c = 0 ; c < n; c++ )
        scanf("%d", &a[c]);
    min=a[0];
    for ( c = 1 ; c < n ; c++ ) {
        if ( a[c] <min ) {
           min = a[c];
           d++;
          printf("Yes");
          break; }
        if(d==0){
            printf("No");
            break; } }
    return 0; }